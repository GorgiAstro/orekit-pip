#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/fraction/BigFraction.h"
#include "org/hipparchus/util/Pair.h"
#include "org/hipparchus/fraction/BigFraction$ConvergenceTest.h"
#include "org/hipparchus/fraction/BigFractionField.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/fraction/BigFraction.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "java/lang/Boolean.h"
#include "java/util/stream/Stream.h"
#include "org/hipparchus/FieldElement.h"
#include "java/lang/String.h"
#include "java/lang/Comparable.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace fraction {

      ::java::lang::Class *BigFraction::class$ = NULL;
      jmethodID *BigFraction::mids$ = NULL;
      bool BigFraction::live$ = false;
      BigFraction *BigFraction::FOUR_FIFTHS = NULL;
      BigFraction *BigFraction::MINUS_ONE = NULL;
      BigFraction *BigFraction::ONE = NULL;
      BigFraction *BigFraction::ONE_FIFTH = NULL;
      BigFraction *BigFraction::ONE_HALF = NULL;
      BigFraction *BigFraction::ONE_QUARTER = NULL;
      BigFraction *BigFraction::ONE_THIRD = NULL;
      BigFraction *BigFraction::THREE_FIFTHS = NULL;
      BigFraction *BigFraction::THREE_QUARTERS = NULL;
      BigFraction *BigFraction::TWO = NULL;
      BigFraction *BigFraction::TWO_FIFTHS = NULL;
      BigFraction *BigFraction::TWO_QUARTERS = NULL;
      BigFraction *BigFraction::TWO_THIRDS = NULL;
      BigFraction *BigFraction::ZERO = NULL;

      jclass BigFraction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/fraction/BigFraction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_8ba9fe7a847cecad] = env->getMethodID(cls, "<init>", "(D)V");
          mids$[mid_init$_44ed599e93e8a30c] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_init$_3d7dd2314a0dd456] = env->getMethodID(cls, "<init>", "(J)V");
          mids$[mid_init$_3313c75e3e16c428] = env->getMethodID(cls, "<init>", "(II)V");
          mids$[mid_init$_bdc6c8322b49cc04] = env->getMethodID(cls, "<init>", "(DJ)V");
          mids$[mid_init$_3246a605cef69701] = env->getMethodID(cls, "<init>", "(JJ)V");
          mids$[mid_init$_2aa803b9073e6a76] = env->getMethodID(cls, "<init>", "(DDI)V");
          mids$[mid_abs_7369b54299dcf892] = env->getMethodID(cls, "abs", "()Lorg/hipparchus/fraction/BigFraction;");
          mids$[mid_add_5b32b9d46e03e856] = env->getMethodID(cls, "add", "(Lorg/hipparchus/fraction/BigFraction;)Lorg/hipparchus/fraction/BigFraction;");
          mids$[mid_add_e1eafac49c6f04c1] = env->getMethodID(cls, "add", "(I)Lorg/hipparchus/fraction/BigFraction;");
          mids$[mid_add_5e5367a598c17c54] = env->getMethodID(cls, "add", "(J)Lorg/hipparchus/fraction/BigFraction;");
          mids$[mid_compareTo_a8f11b01dfcd000b] = env->getMethodID(cls, "compareTo", "(Lorg/hipparchus/fraction/BigFraction;)I");
          mids$[mid_convergent_7f045a1e9d117075] = env->getStaticMethodID(cls, "convergent", "(DILorg/hipparchus/fraction/BigFraction$ConvergenceTest;)Lorg/hipparchus/util/Pair;");
          mids$[mid_convergents_0df0904681fc943b] = env->getStaticMethodID(cls, "convergents", "(DI)Ljava/util/stream/Stream;");
          mids$[mid_divide_5b32b9d46e03e856] = env->getMethodID(cls, "divide", "(Lorg/hipparchus/fraction/BigFraction;)Lorg/hipparchus/fraction/BigFraction;");
          mids$[mid_divide_e1eafac49c6f04c1] = env->getMethodID(cls, "divide", "(I)Lorg/hipparchus/fraction/BigFraction;");
          mids$[mid_divide_5e5367a598c17c54] = env->getMethodID(cls, "divide", "(J)Lorg/hipparchus/fraction/BigFraction;");
          mids$[mid_doubleValue_b74f83833fdad017] = env->getMethodID(cls, "doubleValue", "()D");
          mids$[mid_equals_460c5e2d9d51c6cc] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_floatValue_1fb1bf0772ae5db7] = env->getMethodID(cls, "floatValue", "()F");
          mids$[mid_getDenominatorAsInt_55546ef6a647f39b] = env->getMethodID(cls, "getDenominatorAsInt", "()I");
          mids$[mid_getDenominatorAsLong_6c0ce7e438e5ded4] = env->getMethodID(cls, "getDenominatorAsLong", "()J");
          mids$[mid_getField_23be7e86283dd98a] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/fraction/BigFractionField;");
          mids$[mid_getNumeratorAsInt_55546ef6a647f39b] = env->getMethodID(cls, "getNumeratorAsInt", "()I");
          mids$[mid_getNumeratorAsLong_6c0ce7e438e5ded4] = env->getMethodID(cls, "getNumeratorAsLong", "()J");
          mids$[mid_getReal_b74f83833fdad017] = env->getMethodID(cls, "getReal", "()D");
          mids$[mid_getReducedFraction_4b1511d974d66351] = env->getStaticMethodID(cls, "getReducedFraction", "(II)Lorg/hipparchus/fraction/BigFraction;");
          mids$[mid_hashCode_55546ef6a647f39b] = env->getMethodID(cls, "hashCode", "()I");
          mids$[mid_intValue_55546ef6a647f39b] = env->getMethodID(cls, "intValue", "()I");
          mids$[mid_isInteger_9ab94ac1dc23b105] = env->getMethodID(cls, "isInteger", "()Z");
          mids$[mid_longValue_6c0ce7e438e5ded4] = env->getMethodID(cls, "longValue", "()J");
          mids$[mid_multiply_5b32b9d46e03e856] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/fraction/BigFraction;)Lorg/hipparchus/fraction/BigFraction;");
          mids$[mid_multiply_e1eafac49c6f04c1] = env->getMethodID(cls, "multiply", "(I)Lorg/hipparchus/fraction/BigFraction;");
          mids$[mid_multiply_5e5367a598c17c54] = env->getMethodID(cls, "multiply", "(J)Lorg/hipparchus/fraction/BigFraction;");
          mids$[mid_negate_7369b54299dcf892] = env->getMethodID(cls, "negate", "()Lorg/hipparchus/fraction/BigFraction;");
          mids$[mid_percentageValue_b74f83833fdad017] = env->getMethodID(cls, "percentageValue", "()D");
          mids$[mid_pow_04fd0666b613d2ab] = env->getMethodID(cls, "pow", "(D)D");
          mids$[mid_pow_e1eafac49c6f04c1] = env->getMethodID(cls, "pow", "(I)Lorg/hipparchus/fraction/BigFraction;");
          mids$[mid_pow_5e5367a598c17c54] = env->getMethodID(cls, "pow", "(J)Lorg/hipparchus/fraction/BigFraction;");
          mids$[mid_reciprocal_7369b54299dcf892] = env->getMethodID(cls, "reciprocal", "()Lorg/hipparchus/fraction/BigFraction;");
          mids$[mid_reduce_7369b54299dcf892] = env->getMethodID(cls, "reduce", "()Lorg/hipparchus/fraction/BigFraction;");
          mids$[mid_signum_55546ef6a647f39b] = env->getMethodID(cls, "signum", "()I");
          mids$[mid_subtract_5b32b9d46e03e856] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/fraction/BigFraction;)Lorg/hipparchus/fraction/BigFraction;");
          mids$[mid_subtract_e1eafac49c6f04c1] = env->getMethodID(cls, "subtract", "(I)Lorg/hipparchus/fraction/BigFraction;");
          mids$[mid_subtract_5e5367a598c17c54] = env->getMethodID(cls, "subtract", "(J)Lorg/hipparchus/fraction/BigFraction;");
          mids$[mid_toString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          FOUR_FIFTHS = new BigFraction(env->getStaticObjectField(cls, "FOUR_FIFTHS", "Lorg/hipparchus/fraction/BigFraction;"));
          MINUS_ONE = new BigFraction(env->getStaticObjectField(cls, "MINUS_ONE", "Lorg/hipparchus/fraction/BigFraction;"));
          ONE = new BigFraction(env->getStaticObjectField(cls, "ONE", "Lorg/hipparchus/fraction/BigFraction;"));
          ONE_FIFTH = new BigFraction(env->getStaticObjectField(cls, "ONE_FIFTH", "Lorg/hipparchus/fraction/BigFraction;"));
          ONE_HALF = new BigFraction(env->getStaticObjectField(cls, "ONE_HALF", "Lorg/hipparchus/fraction/BigFraction;"));
          ONE_QUARTER = new BigFraction(env->getStaticObjectField(cls, "ONE_QUARTER", "Lorg/hipparchus/fraction/BigFraction;"));
          ONE_THIRD = new BigFraction(env->getStaticObjectField(cls, "ONE_THIRD", "Lorg/hipparchus/fraction/BigFraction;"));
          THREE_FIFTHS = new BigFraction(env->getStaticObjectField(cls, "THREE_FIFTHS", "Lorg/hipparchus/fraction/BigFraction;"));
          THREE_QUARTERS = new BigFraction(env->getStaticObjectField(cls, "THREE_QUARTERS", "Lorg/hipparchus/fraction/BigFraction;"));
          TWO = new BigFraction(env->getStaticObjectField(cls, "TWO", "Lorg/hipparchus/fraction/BigFraction;"));
          TWO_FIFTHS = new BigFraction(env->getStaticObjectField(cls, "TWO_FIFTHS", "Lorg/hipparchus/fraction/BigFraction;"));
          TWO_QUARTERS = new BigFraction(env->getStaticObjectField(cls, "TWO_QUARTERS", "Lorg/hipparchus/fraction/BigFraction;"));
          TWO_THIRDS = new BigFraction(env->getStaticObjectField(cls, "TWO_THIRDS", "Lorg/hipparchus/fraction/BigFraction;"));
          ZERO = new BigFraction(env->getStaticObjectField(cls, "ZERO", "Lorg/hipparchus/fraction/BigFraction;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      BigFraction::BigFraction(jdouble a0) : ::java::lang::Number(env->newObject(initializeClass, &mids$, mid_init$_8ba9fe7a847cecad, a0)) {}

      BigFraction::BigFraction(jint a0) : ::java::lang::Number(env->newObject(initializeClass, &mids$, mid_init$_44ed599e93e8a30c, a0)) {}

      BigFraction::BigFraction(jlong a0) : ::java::lang::Number(env->newObject(initializeClass, &mids$, mid_init$_3d7dd2314a0dd456, a0)) {}

      BigFraction::BigFraction(jint a0, jint a1) : ::java::lang::Number(env->newObject(initializeClass, &mids$, mid_init$_3313c75e3e16c428, a0, a1)) {}

      BigFraction::BigFraction(jdouble a0, jlong a1) : ::java::lang::Number(env->newObject(initializeClass, &mids$, mid_init$_bdc6c8322b49cc04, a0, a1)) {}

      BigFraction::BigFraction(jlong a0, jlong a1) : ::java::lang::Number(env->newObject(initializeClass, &mids$, mid_init$_3246a605cef69701, a0, a1)) {}

      BigFraction::BigFraction(jdouble a0, jdouble a1, jint a2) : ::java::lang::Number(env->newObject(initializeClass, &mids$, mid_init$_2aa803b9073e6a76, a0, a1, a2)) {}

      BigFraction BigFraction::abs() const
      {
        return BigFraction(env->callObjectMethod(this$, mids$[mid_abs_7369b54299dcf892]));
      }

      BigFraction BigFraction::add(const BigFraction & a0) const
      {
        return BigFraction(env->callObjectMethod(this$, mids$[mid_add_5b32b9d46e03e856], a0.this$));
      }

      BigFraction BigFraction::add(jint a0) const
      {
        return BigFraction(env->callObjectMethod(this$, mids$[mid_add_e1eafac49c6f04c1], a0));
      }

      BigFraction BigFraction::add(jlong a0) const
      {
        return BigFraction(env->callObjectMethod(this$, mids$[mid_add_5e5367a598c17c54], a0));
      }

      jint BigFraction::compareTo(const BigFraction & a0) const
      {
        return env->callIntMethod(this$, mids$[mid_compareTo_a8f11b01dfcd000b], a0.this$);
      }

      ::org::hipparchus::util::Pair BigFraction::convergent(jdouble a0, jint a1, const ::org::hipparchus::fraction::BigFraction$ConvergenceTest & a2)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::util::Pair(env->callStaticObjectMethod(cls, mids$[mid_convergent_7f045a1e9d117075], a0, a1, a2.this$));
      }

      ::java::util::stream::Stream BigFraction::convergents(jdouble a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::java::util::stream::Stream(env->callStaticObjectMethod(cls, mids$[mid_convergents_0df0904681fc943b], a0, a1));
      }

      BigFraction BigFraction::divide(const BigFraction & a0) const
      {
        return BigFraction(env->callObjectMethod(this$, mids$[mid_divide_5b32b9d46e03e856], a0.this$));
      }

      BigFraction BigFraction::divide(jint a0) const
      {
        return BigFraction(env->callObjectMethod(this$, mids$[mid_divide_e1eafac49c6f04c1], a0));
      }

      BigFraction BigFraction::divide(jlong a0) const
      {
        return BigFraction(env->callObjectMethod(this$, mids$[mid_divide_5e5367a598c17c54], a0));
      }

      jdouble BigFraction::doubleValue() const
      {
        return env->callDoubleMethod(this$, mids$[mid_doubleValue_b74f83833fdad017]);
      }

      jboolean BigFraction::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_460c5e2d9d51c6cc], a0.this$);
      }

      jfloat BigFraction::floatValue() const
      {
        return env->callFloatMethod(this$, mids$[mid_floatValue_1fb1bf0772ae5db7]);
      }

      jint BigFraction::getDenominatorAsInt() const
      {
        return env->callIntMethod(this$, mids$[mid_getDenominatorAsInt_55546ef6a647f39b]);
      }

      jlong BigFraction::getDenominatorAsLong() const
      {
        return env->callLongMethod(this$, mids$[mid_getDenominatorAsLong_6c0ce7e438e5ded4]);
      }

      ::org::hipparchus::fraction::BigFractionField BigFraction::getField() const
      {
        return ::org::hipparchus::fraction::BigFractionField(env->callObjectMethod(this$, mids$[mid_getField_23be7e86283dd98a]));
      }

      jint BigFraction::getNumeratorAsInt() const
      {
        return env->callIntMethod(this$, mids$[mid_getNumeratorAsInt_55546ef6a647f39b]);
      }

      jlong BigFraction::getNumeratorAsLong() const
      {
        return env->callLongMethod(this$, mids$[mid_getNumeratorAsLong_6c0ce7e438e5ded4]);
      }

      jdouble BigFraction::getReal() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getReal_b74f83833fdad017]);
      }

      BigFraction BigFraction::getReducedFraction(jint a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return BigFraction(env->callStaticObjectMethod(cls, mids$[mid_getReducedFraction_4b1511d974d66351], a0, a1));
      }

      jint BigFraction::hashCode() const
      {
        return env->callIntMethod(this$, mids$[mid_hashCode_55546ef6a647f39b]);
      }

      jint BigFraction::intValue() const
      {
        return env->callIntMethod(this$, mids$[mid_intValue_55546ef6a647f39b]);
      }

      jboolean BigFraction::isInteger() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isInteger_9ab94ac1dc23b105]);
      }

      jlong BigFraction::longValue() const
      {
        return env->callLongMethod(this$, mids$[mid_longValue_6c0ce7e438e5ded4]);
      }

      BigFraction BigFraction::multiply(const BigFraction & a0) const
      {
        return BigFraction(env->callObjectMethod(this$, mids$[mid_multiply_5b32b9d46e03e856], a0.this$));
      }

      BigFraction BigFraction::multiply(jint a0) const
      {
        return BigFraction(env->callObjectMethod(this$, mids$[mid_multiply_e1eafac49c6f04c1], a0));
      }

      BigFraction BigFraction::multiply(jlong a0) const
      {
        return BigFraction(env->callObjectMethod(this$, mids$[mid_multiply_5e5367a598c17c54], a0));
      }

      BigFraction BigFraction::negate() const
      {
        return BigFraction(env->callObjectMethod(this$, mids$[mid_negate_7369b54299dcf892]));
      }

      jdouble BigFraction::percentageValue() const
      {
        return env->callDoubleMethod(this$, mids$[mid_percentageValue_b74f83833fdad017]);
      }

      jdouble BigFraction::pow(jdouble a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_pow_04fd0666b613d2ab], a0);
      }

      BigFraction BigFraction::pow(jint a0) const
      {
        return BigFraction(env->callObjectMethod(this$, mids$[mid_pow_e1eafac49c6f04c1], a0));
      }

      BigFraction BigFraction::pow(jlong a0) const
      {
        return BigFraction(env->callObjectMethod(this$, mids$[mid_pow_5e5367a598c17c54], a0));
      }

      BigFraction BigFraction::reciprocal() const
      {
        return BigFraction(env->callObjectMethod(this$, mids$[mid_reciprocal_7369b54299dcf892]));
      }

      BigFraction BigFraction::reduce() const
      {
        return BigFraction(env->callObjectMethod(this$, mids$[mid_reduce_7369b54299dcf892]));
      }

      jint BigFraction::signum() const
      {
        return env->callIntMethod(this$, mids$[mid_signum_55546ef6a647f39b]);
      }

      BigFraction BigFraction::subtract(const BigFraction & a0) const
      {
        return BigFraction(env->callObjectMethod(this$, mids$[mid_subtract_5b32b9d46e03e856], a0.this$));
      }

      BigFraction BigFraction::subtract(jint a0) const
      {
        return BigFraction(env->callObjectMethod(this$, mids$[mid_subtract_e1eafac49c6f04c1], a0));
      }

      BigFraction BigFraction::subtract(jlong a0) const
      {
        return BigFraction(env->callObjectMethod(this$, mids$[mid_subtract_5e5367a598c17c54], a0));
      }

      ::java::lang::String BigFraction::toString() const
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
  namespace hipparchus {
    namespace fraction {
      static PyObject *t_BigFraction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BigFraction_instance_(PyTypeObject *type, PyObject *arg);
      static int t_BigFraction_init_(t_BigFraction *self, PyObject *args, PyObject *kwds);
      static PyObject *t_BigFraction_abs(t_BigFraction *self);
      static PyObject *t_BigFraction_add(t_BigFraction *self, PyObject *args);
      static PyObject *t_BigFraction_compareTo(t_BigFraction *self, PyObject *arg);
      static PyObject *t_BigFraction_convergent(PyTypeObject *type, PyObject *args);
      static PyObject *t_BigFraction_convergents(PyTypeObject *type, PyObject *args);
      static PyObject *t_BigFraction_divide(t_BigFraction *self, PyObject *args);
      static PyObject *t_BigFraction_doubleValue(t_BigFraction *self, PyObject *args);
      static PyObject *t_BigFraction_equals(t_BigFraction *self, PyObject *args);
      static PyObject *t_BigFraction_floatValue(t_BigFraction *self, PyObject *args);
      static PyObject *t_BigFraction_getDenominatorAsInt(t_BigFraction *self);
      static PyObject *t_BigFraction_getDenominatorAsLong(t_BigFraction *self);
      static PyObject *t_BigFraction_getField(t_BigFraction *self);
      static PyObject *t_BigFraction_getNumeratorAsInt(t_BigFraction *self);
      static PyObject *t_BigFraction_getNumeratorAsLong(t_BigFraction *self);
      static PyObject *t_BigFraction_getReal(t_BigFraction *self);
      static PyObject *t_BigFraction_getReducedFraction(PyTypeObject *type, PyObject *args);
      static PyObject *t_BigFraction_hashCode(t_BigFraction *self, PyObject *args);
      static PyObject *t_BigFraction_intValue(t_BigFraction *self, PyObject *args);
      static PyObject *t_BigFraction_isInteger(t_BigFraction *self);
      static PyObject *t_BigFraction_longValue(t_BigFraction *self, PyObject *args);
      static PyObject *t_BigFraction_multiply(t_BigFraction *self, PyObject *args);
      static PyObject *t_BigFraction_negate(t_BigFraction *self);
      static PyObject *t_BigFraction_percentageValue(t_BigFraction *self);
      static PyObject *t_BigFraction_pow(t_BigFraction *self, PyObject *args);
      static PyObject *t_BigFraction_reciprocal(t_BigFraction *self);
      static PyObject *t_BigFraction_reduce(t_BigFraction *self);
      static PyObject *t_BigFraction_signum(t_BigFraction *self);
      static PyObject *t_BigFraction_subtract(t_BigFraction *self, PyObject *args);
      static PyObject *t_BigFraction_toString(t_BigFraction *self, PyObject *args);
      static PyObject *t_BigFraction_get__denominatorAsInt(t_BigFraction *self, void *data);
      static PyObject *t_BigFraction_get__denominatorAsLong(t_BigFraction *self, void *data);
      static PyObject *t_BigFraction_get__field(t_BigFraction *self, void *data);
      static PyObject *t_BigFraction_get__integer(t_BigFraction *self, void *data);
      static PyObject *t_BigFraction_get__numeratorAsInt(t_BigFraction *self, void *data);
      static PyObject *t_BigFraction_get__numeratorAsLong(t_BigFraction *self, void *data);
      static PyObject *t_BigFraction_get__real(t_BigFraction *self, void *data);
      static PyGetSetDef t_BigFraction__fields_[] = {
        DECLARE_GET_FIELD(t_BigFraction, denominatorAsInt),
        DECLARE_GET_FIELD(t_BigFraction, denominatorAsLong),
        DECLARE_GET_FIELD(t_BigFraction, field),
        DECLARE_GET_FIELD(t_BigFraction, integer),
        DECLARE_GET_FIELD(t_BigFraction, numeratorAsInt),
        DECLARE_GET_FIELD(t_BigFraction, numeratorAsLong),
        DECLARE_GET_FIELD(t_BigFraction, real),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_BigFraction__methods_[] = {
        DECLARE_METHOD(t_BigFraction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BigFraction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BigFraction, abs, METH_NOARGS),
        DECLARE_METHOD(t_BigFraction, add, METH_VARARGS),
        DECLARE_METHOD(t_BigFraction, compareTo, METH_O),
        DECLARE_METHOD(t_BigFraction, convergent, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_BigFraction, convergents, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_BigFraction, divide, METH_VARARGS),
        DECLARE_METHOD(t_BigFraction, doubleValue, METH_VARARGS),
        DECLARE_METHOD(t_BigFraction, equals, METH_VARARGS),
        DECLARE_METHOD(t_BigFraction, floatValue, METH_VARARGS),
        DECLARE_METHOD(t_BigFraction, getDenominatorAsInt, METH_NOARGS),
        DECLARE_METHOD(t_BigFraction, getDenominatorAsLong, METH_NOARGS),
        DECLARE_METHOD(t_BigFraction, getField, METH_NOARGS),
        DECLARE_METHOD(t_BigFraction, getNumeratorAsInt, METH_NOARGS),
        DECLARE_METHOD(t_BigFraction, getNumeratorAsLong, METH_NOARGS),
        DECLARE_METHOD(t_BigFraction, getReal, METH_NOARGS),
        DECLARE_METHOD(t_BigFraction, getReducedFraction, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_BigFraction, hashCode, METH_VARARGS),
        DECLARE_METHOD(t_BigFraction, intValue, METH_VARARGS),
        DECLARE_METHOD(t_BigFraction, isInteger, METH_NOARGS),
        DECLARE_METHOD(t_BigFraction, longValue, METH_VARARGS),
        DECLARE_METHOD(t_BigFraction, multiply, METH_VARARGS),
        DECLARE_METHOD(t_BigFraction, negate, METH_NOARGS),
        DECLARE_METHOD(t_BigFraction, percentageValue, METH_NOARGS),
        DECLARE_METHOD(t_BigFraction, pow, METH_VARARGS),
        DECLARE_METHOD(t_BigFraction, reciprocal, METH_NOARGS),
        DECLARE_METHOD(t_BigFraction, reduce, METH_NOARGS),
        DECLARE_METHOD(t_BigFraction, signum, METH_NOARGS),
        DECLARE_METHOD(t_BigFraction, subtract, METH_VARARGS),
        DECLARE_METHOD(t_BigFraction, toString, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(BigFraction)[] = {
        { Py_tp_methods, t_BigFraction__methods_ },
        { Py_tp_init, (void *) t_BigFraction_init_ },
        { Py_tp_getset, t_BigFraction__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(BigFraction)[] = {
        &PY_TYPE_DEF(::java::lang::Number),
        NULL
      };

      DEFINE_TYPE(BigFraction, t_BigFraction, BigFraction);

      void t_BigFraction::install(PyObject *module)
      {
        installType(&PY_TYPE(BigFraction), &PY_TYPE_DEF(BigFraction), module, "BigFraction", 0);
        PyObject_SetAttrString((PyObject *) PY_TYPE(BigFraction), "ConvergenceTest", make_descriptor(&PY_TYPE_DEF(BigFraction$ConvergenceTest)));
      }

      void t_BigFraction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(BigFraction), "class_", make_descriptor(BigFraction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BigFraction), "wrapfn_", make_descriptor(t_BigFraction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BigFraction), "boxfn_", make_descriptor(boxObject));
        env->getClass(BigFraction::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(BigFraction), "FOUR_FIFTHS", make_descriptor(t_BigFraction::wrap_Object(*BigFraction::FOUR_FIFTHS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BigFraction), "MINUS_ONE", make_descriptor(t_BigFraction::wrap_Object(*BigFraction::MINUS_ONE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BigFraction), "ONE", make_descriptor(t_BigFraction::wrap_Object(*BigFraction::ONE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BigFraction), "ONE_FIFTH", make_descriptor(t_BigFraction::wrap_Object(*BigFraction::ONE_FIFTH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BigFraction), "ONE_HALF", make_descriptor(t_BigFraction::wrap_Object(*BigFraction::ONE_HALF)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BigFraction), "ONE_QUARTER", make_descriptor(t_BigFraction::wrap_Object(*BigFraction::ONE_QUARTER)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BigFraction), "ONE_THIRD", make_descriptor(t_BigFraction::wrap_Object(*BigFraction::ONE_THIRD)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BigFraction), "THREE_FIFTHS", make_descriptor(t_BigFraction::wrap_Object(*BigFraction::THREE_FIFTHS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BigFraction), "THREE_QUARTERS", make_descriptor(t_BigFraction::wrap_Object(*BigFraction::THREE_QUARTERS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BigFraction), "TWO", make_descriptor(t_BigFraction::wrap_Object(*BigFraction::TWO)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BigFraction), "TWO_FIFTHS", make_descriptor(t_BigFraction::wrap_Object(*BigFraction::TWO_FIFTHS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BigFraction), "TWO_QUARTERS", make_descriptor(t_BigFraction::wrap_Object(*BigFraction::TWO_QUARTERS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BigFraction), "TWO_THIRDS", make_descriptor(t_BigFraction::wrap_Object(*BigFraction::TWO_THIRDS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BigFraction), "ZERO", make_descriptor(t_BigFraction::wrap_Object(*BigFraction::ZERO)));
      }

      static PyObject *t_BigFraction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, BigFraction::initializeClass, 1)))
          return NULL;
        return t_BigFraction::wrap_Object(BigFraction(((t_BigFraction *) arg)->object.this$));
      }
      static PyObject *t_BigFraction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, BigFraction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_BigFraction_init_(t_BigFraction *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            BigFraction object((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              INT_CALL(object = BigFraction(a0));
              self->object = object;
              break;
            }
          }
          {
            jint a0;
            BigFraction object((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              INT_CALL(object = BigFraction(a0));
              self->object = object;
              break;
            }
          }
          {
            jlong a0;
            BigFraction object((jobject) NULL);

            if (!parseArgs(args, "J", &a0))
            {
              INT_CALL(object = BigFraction(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            jint a0;
            jint a1;
            BigFraction object((jobject) NULL);

            if (!parseArgs(args, "II", &a0, &a1))
            {
              INT_CALL(object = BigFraction(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            jdouble a0;
            jlong a1;
            BigFraction object((jobject) NULL);

            if (!parseArgs(args, "DJ", &a0, &a1))
            {
              INT_CALL(object = BigFraction(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            jlong a0;
            jlong a1;
            BigFraction object((jobject) NULL);

            if (!parseArgs(args, "JJ", &a0, &a1))
            {
              INT_CALL(object = BigFraction(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            jdouble a0;
            jdouble a1;
            jint a2;
            BigFraction object((jobject) NULL);

            if (!parseArgs(args, "DDI", &a0, &a1, &a2))
            {
              INT_CALL(object = BigFraction(a0, a1, a2));
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

      static PyObject *t_BigFraction_abs(t_BigFraction *self)
      {
        BigFraction result((jobject) NULL);
        OBJ_CALL(result = self->object.abs());
        return t_BigFraction::wrap_Object(result);
      }

      static PyObject *t_BigFraction_add(t_BigFraction *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            BigFraction a0((jobject) NULL);
            BigFraction result((jobject) NULL);

            if (!parseArgs(args, "k", BigFraction::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.add(a0));
              return t_BigFraction::wrap_Object(result);
            }
          }
          {
            jint a0;
            BigFraction result((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.add(a0));
              return t_BigFraction::wrap_Object(result);
            }
          }
          {
            jlong a0;
            BigFraction result((jobject) NULL);

            if (!parseArgs(args, "J", &a0))
            {
              OBJ_CALL(result = self->object.add(a0));
              return t_BigFraction::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "add", args);
        return NULL;
      }

      static PyObject *t_BigFraction_compareTo(t_BigFraction *self, PyObject *arg)
      {
        BigFraction a0((jobject) NULL);
        jint result;

        if (!parseArg(arg, "k", BigFraction::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.compareTo(a0));
          return PyLong_FromLong((long) result);
        }

        PyErr_SetArgsError((PyObject *) self, "compareTo", arg);
        return NULL;
      }

      static PyObject *t_BigFraction_convergent(PyTypeObject *type, PyObject *args)
      {
        jdouble a0;
        jint a1;
        ::org::hipparchus::fraction::BigFraction$ConvergenceTest a2((jobject) NULL);
        ::org::hipparchus::util::Pair result((jobject) NULL);

        if (!parseArgs(args, "DIk", ::org::hipparchus::fraction::BigFraction$ConvergenceTest::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(result = ::org::hipparchus::fraction::BigFraction::convergent(a0, a1, a2));
          return ::org::hipparchus::util::t_Pair::wrap_Object(result, ::org::hipparchus::fraction::PY_TYPE(BigFraction), ::java::lang::PY_TYPE(Boolean));
        }

        PyErr_SetArgsError(type, "convergent", args);
        return NULL;
      }

      static PyObject *t_BigFraction_convergents(PyTypeObject *type, PyObject *args)
      {
        jdouble a0;
        jint a1;
        ::java::util::stream::Stream result((jobject) NULL);

        if (!parseArgs(args, "DI", &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::fraction::BigFraction::convergents(a0, a1));
          return ::java::util::stream::t_Stream::wrap_Object(result, ::org::hipparchus::fraction::PY_TYPE(BigFraction));
        }

        PyErr_SetArgsError(type, "convergents", args);
        return NULL;
      }

      static PyObject *t_BigFraction_divide(t_BigFraction *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            BigFraction a0((jobject) NULL);
            BigFraction result((jobject) NULL);

            if (!parseArgs(args, "k", BigFraction::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.divide(a0));
              return t_BigFraction::wrap_Object(result);
            }
          }
          {
            jint a0;
            BigFraction result((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.divide(a0));
              return t_BigFraction::wrap_Object(result);
            }
          }
          {
            jlong a0;
            BigFraction result((jobject) NULL);

            if (!parseArgs(args, "J", &a0))
            {
              OBJ_CALL(result = self->object.divide(a0));
              return t_BigFraction::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "divide", args);
        return NULL;
      }

      static PyObject *t_BigFraction_doubleValue(t_BigFraction *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.doubleValue());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(BigFraction), (PyObject *) self, "doubleValue", args, 2);
      }

      static PyObject *t_BigFraction_equals(t_BigFraction *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "o", &a0))
        {
          OBJ_CALL(result = self->object.equals(a0));
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(BigFraction), (PyObject *) self, "equals", args, 2);
      }

      static PyObject *t_BigFraction_floatValue(t_BigFraction *self, PyObject *args)
      {
        jfloat result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.floatValue());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(BigFraction), (PyObject *) self, "floatValue", args, 2);
      }

      static PyObject *t_BigFraction_getDenominatorAsInt(t_BigFraction *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getDenominatorAsInt());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_BigFraction_getDenominatorAsLong(t_BigFraction *self)
      {
        jlong result;
        OBJ_CALL(result = self->object.getDenominatorAsLong());
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      static PyObject *t_BigFraction_getField(t_BigFraction *self)
      {
        ::org::hipparchus::fraction::BigFractionField result((jobject) NULL);
        OBJ_CALL(result = self->object.getField());
        return ::org::hipparchus::fraction::t_BigFractionField::wrap_Object(result);
      }

      static PyObject *t_BigFraction_getNumeratorAsInt(t_BigFraction *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getNumeratorAsInt());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_BigFraction_getNumeratorAsLong(t_BigFraction *self)
      {
        jlong result;
        OBJ_CALL(result = self->object.getNumeratorAsLong());
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      static PyObject *t_BigFraction_getReal(t_BigFraction *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getReal());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_BigFraction_getReducedFraction(PyTypeObject *type, PyObject *args)
      {
        jint a0;
        jint a1;
        BigFraction result((jobject) NULL);

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::fraction::BigFraction::getReducedFraction(a0, a1));
          return t_BigFraction::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getReducedFraction", args);
        return NULL;
      }

      static PyObject *t_BigFraction_hashCode(t_BigFraction *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hashCode());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(BigFraction), (PyObject *) self, "hashCode", args, 2);
      }

      static PyObject *t_BigFraction_intValue(t_BigFraction *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.intValue());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(BigFraction), (PyObject *) self, "intValue", args, 2);
      }

      static PyObject *t_BigFraction_isInteger(t_BigFraction *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isInteger());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_BigFraction_longValue(t_BigFraction *self, PyObject *args)
      {
        jlong result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.longValue());
          return PyLong_FromLongLong((PY_LONG_LONG) result);
        }

        return callSuper(PY_TYPE(BigFraction), (PyObject *) self, "longValue", args, 2);
      }

      static PyObject *t_BigFraction_multiply(t_BigFraction *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            BigFraction a0((jobject) NULL);
            BigFraction result((jobject) NULL);

            if (!parseArgs(args, "k", BigFraction::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.multiply(a0));
              return t_BigFraction::wrap_Object(result);
            }
          }
          {
            jint a0;
            BigFraction result((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.multiply(a0));
              return t_BigFraction::wrap_Object(result);
            }
          }
          {
            jlong a0;
            BigFraction result((jobject) NULL);

            if (!parseArgs(args, "J", &a0))
            {
              OBJ_CALL(result = self->object.multiply(a0));
              return t_BigFraction::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "multiply", args);
        return NULL;
      }

      static PyObject *t_BigFraction_negate(t_BigFraction *self)
      {
        BigFraction result((jobject) NULL);
        OBJ_CALL(result = self->object.negate());
        return t_BigFraction::wrap_Object(result);
      }

      static PyObject *t_BigFraction_percentageValue(t_BigFraction *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.percentageValue());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_BigFraction_pow(t_BigFraction *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.pow(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            jint a0;
            BigFraction result((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.pow(a0));
              return t_BigFraction::wrap_Object(result);
            }
          }
          {
            jlong a0;
            BigFraction result((jobject) NULL);

            if (!parseArgs(args, "J", &a0))
            {
              OBJ_CALL(result = self->object.pow(a0));
              return t_BigFraction::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "pow", args);
        return NULL;
      }

      static PyObject *t_BigFraction_reciprocal(t_BigFraction *self)
      {
        BigFraction result((jobject) NULL);
        OBJ_CALL(result = self->object.reciprocal());
        return t_BigFraction::wrap_Object(result);
      }

      static PyObject *t_BigFraction_reduce(t_BigFraction *self)
      {
        BigFraction result((jobject) NULL);
        OBJ_CALL(result = self->object.reduce());
        return t_BigFraction::wrap_Object(result);
      }

      static PyObject *t_BigFraction_signum(t_BigFraction *self)
      {
        jint result;
        OBJ_CALL(result = self->object.signum());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_BigFraction_subtract(t_BigFraction *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            BigFraction a0((jobject) NULL);
            BigFraction result((jobject) NULL);

            if (!parseArgs(args, "k", BigFraction::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.subtract(a0));
              return t_BigFraction::wrap_Object(result);
            }
          }
          {
            jint a0;
            BigFraction result((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.subtract(a0));
              return t_BigFraction::wrap_Object(result);
            }
          }
          {
            jlong a0;
            BigFraction result((jobject) NULL);

            if (!parseArgs(args, "J", &a0))
            {
              OBJ_CALL(result = self->object.subtract(a0));
              return t_BigFraction::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "subtract", args);
        return NULL;
      }

      static PyObject *t_BigFraction_toString(t_BigFraction *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(BigFraction), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_BigFraction_get__denominatorAsInt(t_BigFraction *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getDenominatorAsInt());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_BigFraction_get__denominatorAsLong(t_BigFraction *self, void *data)
      {
        jlong value;
        OBJ_CALL(value = self->object.getDenominatorAsLong());
        return PyLong_FromLongLong((PY_LONG_LONG) value);
      }

      static PyObject *t_BigFraction_get__field(t_BigFraction *self, void *data)
      {
        ::org::hipparchus::fraction::BigFractionField value((jobject) NULL);
        OBJ_CALL(value = self->object.getField());
        return ::org::hipparchus::fraction::t_BigFractionField::wrap_Object(value);
      }

      static PyObject *t_BigFraction_get__integer(t_BigFraction *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isInteger());
        Py_RETURN_BOOL(value);
      }

      static PyObject *t_BigFraction_get__numeratorAsInt(t_BigFraction *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getNumeratorAsInt());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_BigFraction_get__numeratorAsLong(t_BigFraction *self, void *data)
      {
        jlong value;
        OBJ_CALL(value = self->object.getNumeratorAsLong());
        return PyLong_FromLongLong((PY_LONG_LONG) value);
      }

      static PyObject *t_BigFraction_get__real(t_BigFraction *self, void *data)
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
#include "org/hipparchus/linear/FieldMatrixDecomposer.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/FieldMatrix.h"
#include "org/hipparchus/linear/FieldDecompositionSolver.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *FieldMatrixDecomposer::class$ = NULL;
      jmethodID *FieldMatrixDecomposer::mids$ = NULL;
      bool FieldMatrixDecomposer::live$ = false;

      jclass FieldMatrixDecomposer::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/FieldMatrixDecomposer");

          mids$ = new jmethodID[max_mid];
          mids$[mid_decompose_b399fec7c31dfc95] = env->getMethodID(cls, "decompose", "(Lorg/hipparchus/linear/FieldMatrix;)Lorg/hipparchus/linear/FieldDecompositionSolver;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::hipparchus::linear::FieldDecompositionSolver FieldMatrixDecomposer::decompose(const ::org::hipparchus::linear::FieldMatrix & a0) const
      {
        return ::org::hipparchus::linear::FieldDecompositionSolver(env->callObjectMethod(this$, mids$[mid_decompose_b399fec7c31dfc95], a0.this$));
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
      static PyObject *t_FieldMatrixDecomposer_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldMatrixDecomposer_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldMatrixDecomposer_of_(t_FieldMatrixDecomposer *self, PyObject *args);
      static PyObject *t_FieldMatrixDecomposer_decompose(t_FieldMatrixDecomposer *self, PyObject *arg);
      static PyObject *t_FieldMatrixDecomposer_get__parameters_(t_FieldMatrixDecomposer *self, void *data);
      static PyGetSetDef t_FieldMatrixDecomposer__fields_[] = {
        DECLARE_GET_FIELD(t_FieldMatrixDecomposer, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldMatrixDecomposer__methods_[] = {
        DECLARE_METHOD(t_FieldMatrixDecomposer, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldMatrixDecomposer, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldMatrixDecomposer, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldMatrixDecomposer, decompose, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldMatrixDecomposer)[] = {
        { Py_tp_methods, t_FieldMatrixDecomposer__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_FieldMatrixDecomposer__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldMatrixDecomposer)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldMatrixDecomposer, t_FieldMatrixDecomposer, FieldMatrixDecomposer);
      PyObject *t_FieldMatrixDecomposer::wrap_Object(const FieldMatrixDecomposer& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldMatrixDecomposer::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldMatrixDecomposer *self = (t_FieldMatrixDecomposer *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldMatrixDecomposer::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldMatrixDecomposer::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldMatrixDecomposer *self = (t_FieldMatrixDecomposer *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldMatrixDecomposer::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldMatrixDecomposer), &PY_TYPE_DEF(FieldMatrixDecomposer), module, "FieldMatrixDecomposer", 0);
      }

      void t_FieldMatrixDecomposer::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldMatrixDecomposer), "class_", make_descriptor(FieldMatrixDecomposer::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldMatrixDecomposer), "wrapfn_", make_descriptor(t_FieldMatrixDecomposer::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldMatrixDecomposer), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldMatrixDecomposer_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldMatrixDecomposer::initializeClass, 1)))
          return NULL;
        return t_FieldMatrixDecomposer::wrap_Object(FieldMatrixDecomposer(((t_FieldMatrixDecomposer *) arg)->object.this$));
      }
      static PyObject *t_FieldMatrixDecomposer_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldMatrixDecomposer::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldMatrixDecomposer_of_(t_FieldMatrixDecomposer *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_FieldMatrixDecomposer_decompose(t_FieldMatrixDecomposer *self, PyObject *arg)
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
      static PyObject *t_FieldMatrixDecomposer_get__parameters_(t_FieldMatrixDecomposer *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "java/util/Locale.h"
#include "java/lang/Throwable.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/Localizable.h"
#include "org/hipparchus/exception/LocalizedException.h"
#include "java/lang/Object.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace exception {

      ::java::lang::Class *MathRuntimeException::class$ = NULL;
      jmethodID *MathRuntimeException::mids$ = NULL;
      bool MathRuntimeException::live$ = false;

      jclass MathRuntimeException::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/exception/MathRuntimeException");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_9b3ada3301b0db8c] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/exception/Localizable;[Ljava/lang/Object;)V");
          mids$[mid_init$_4d462b77e7e55a0d] = env->getMethodID(cls, "<init>", "(Ljava/lang/Throwable;Lorg/hipparchus/exception/Localizable;[Ljava/lang/Object;)V");
          mids$[mid_createInternalError_cfbaba94b4fd4362] = env->getStaticMethodID(cls, "createInternalError", "()Lorg/hipparchus/exception/MathRuntimeException;");
          mids$[mid_createInternalError_4f759f0cc64787fb] = env->getStaticMethodID(cls, "createInternalError", "(Ljava/lang/Throwable;)Lorg/hipparchus/exception/MathRuntimeException;");
          mids$[mid_getLocalizedMessage_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getLocalizedMessage", "()Ljava/lang/String;");
          mids$[mid_getMessage_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getMessage", "()Ljava/lang/String;");
          mids$[mid_getMessage_26070c28e6ea354d] = env->getMethodID(cls, "getMessage", "(Ljava/util/Locale;)Ljava/lang/String;");
          mids$[mid_getParts_24e2edd6319f4c5a] = env->getMethodID(cls, "getParts", "()[Ljava/lang/Object;");
          mids$[mid_getSpecifier_d8f5056e4f45c9a6] = env->getMethodID(cls, "getSpecifier", "()Lorg/hipparchus/exception/Localizable;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      MathRuntimeException::MathRuntimeException(const ::org::hipparchus::exception::Localizable & a0, const JArray< ::java::lang::Object > & a1) : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_9b3ada3301b0db8c, a0.this$, a1.this$)) {}

      MathRuntimeException::MathRuntimeException(const ::java::lang::Throwable & a0, const ::org::hipparchus::exception::Localizable & a1, const JArray< ::java::lang::Object > & a2) : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_4d462b77e7e55a0d, a0.this$, a1.this$, a2.this$)) {}

      MathRuntimeException MathRuntimeException::createInternalError()
      {
        jclass cls = env->getClass(initializeClass);
        return MathRuntimeException(env->callStaticObjectMethod(cls, mids$[mid_createInternalError_cfbaba94b4fd4362]));
      }

      MathRuntimeException MathRuntimeException::createInternalError(const ::java::lang::Throwable & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return MathRuntimeException(env->callStaticObjectMethod(cls, mids$[mid_createInternalError_4f759f0cc64787fb], a0.this$));
      }

      ::java::lang::String MathRuntimeException::getLocalizedMessage() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLocalizedMessage_1c1fa1e935d6cdcf]));
      }

      ::java::lang::String MathRuntimeException::getMessage() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getMessage_1c1fa1e935d6cdcf]));
      }

      ::java::lang::String MathRuntimeException::getMessage(const ::java::util::Locale & a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getMessage_26070c28e6ea354d], a0.this$));
      }

      JArray< ::java::lang::Object > MathRuntimeException::getParts() const
      {
        return JArray< ::java::lang::Object >(env->callObjectMethod(this$, mids$[mid_getParts_24e2edd6319f4c5a]));
      }

      ::org::hipparchus::exception::Localizable MathRuntimeException::getSpecifier() const
      {
        return ::org::hipparchus::exception::Localizable(env->callObjectMethod(this$, mids$[mid_getSpecifier_d8f5056e4f45c9a6]));
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
      static PyObject *t_MathRuntimeException_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MathRuntimeException_instance_(PyTypeObject *type, PyObject *arg);
      static int t_MathRuntimeException_init_(t_MathRuntimeException *self, PyObject *args, PyObject *kwds);
      static PyObject *t_MathRuntimeException_createInternalError(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathRuntimeException_getLocalizedMessage(t_MathRuntimeException *self, PyObject *args);
      static PyObject *t_MathRuntimeException_getMessage(t_MathRuntimeException *self, PyObject *args);
      static PyObject *t_MathRuntimeException_getParts(t_MathRuntimeException *self);
      static PyObject *t_MathRuntimeException_getSpecifier(t_MathRuntimeException *self);
      static PyObject *t_MathRuntimeException_get__localizedMessage(t_MathRuntimeException *self, void *data);
      static PyObject *t_MathRuntimeException_get__message(t_MathRuntimeException *self, void *data);
      static PyObject *t_MathRuntimeException_get__parts(t_MathRuntimeException *self, void *data);
      static PyObject *t_MathRuntimeException_get__specifier(t_MathRuntimeException *self, void *data);
      static PyGetSetDef t_MathRuntimeException__fields_[] = {
        DECLARE_GET_FIELD(t_MathRuntimeException, localizedMessage),
        DECLARE_GET_FIELD(t_MathRuntimeException, message),
        DECLARE_GET_FIELD(t_MathRuntimeException, parts),
        DECLARE_GET_FIELD(t_MathRuntimeException, specifier),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_MathRuntimeException__methods_[] = {
        DECLARE_METHOD(t_MathRuntimeException, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MathRuntimeException, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MathRuntimeException, createInternalError, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathRuntimeException, getLocalizedMessage, METH_VARARGS),
        DECLARE_METHOD(t_MathRuntimeException, getMessage, METH_VARARGS),
        DECLARE_METHOD(t_MathRuntimeException, getParts, METH_NOARGS),
        DECLARE_METHOD(t_MathRuntimeException, getSpecifier, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(MathRuntimeException)[] = {
        { Py_tp_methods, t_MathRuntimeException__methods_ },
        { Py_tp_init, (void *) t_MathRuntimeException_init_ },
        { Py_tp_getset, t_MathRuntimeException__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(MathRuntimeException)[] = {
        &PY_TYPE_DEF(::java::lang::RuntimeException),
        NULL
      };

      DEFINE_TYPE(MathRuntimeException, t_MathRuntimeException, MathRuntimeException);

      void t_MathRuntimeException::install(PyObject *module)
      {
        installType(&PY_TYPE(MathRuntimeException), &PY_TYPE_DEF(MathRuntimeException), module, "MathRuntimeException", 0);
      }

      void t_MathRuntimeException::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathRuntimeException), "class_", make_descriptor(MathRuntimeException::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathRuntimeException), "wrapfn_", make_descriptor(t_MathRuntimeException::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathRuntimeException), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_MathRuntimeException_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, MathRuntimeException::initializeClass, 1)))
          return NULL;
        return t_MathRuntimeException::wrap_Object(MathRuntimeException(((t_MathRuntimeException *) arg)->object.this$));
      }
      static PyObject *t_MathRuntimeException_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, MathRuntimeException::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_MathRuntimeException_init_(t_MathRuntimeException *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::hipparchus::exception::Localizable a0((jobject) NULL);
            JArray< ::java::lang::Object > a1((jobject) NULL);
            MathRuntimeException object((jobject) NULL);

            if (!parseArgs(args, "k[o", ::org::hipparchus::exception::Localizable::initializeClass, &a0, &a1))
            {
              INT_CALL(object = MathRuntimeException(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::java::lang::Throwable a0((jobject) NULL);
            ::org::hipparchus::exception::Localizable a1((jobject) NULL);
            JArray< ::java::lang::Object > a2((jobject) NULL);
            MathRuntimeException object((jobject) NULL);

            if (!parseArgs(args, "kk[o", ::java::lang::Throwable::initializeClass, ::org::hipparchus::exception::Localizable::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = MathRuntimeException(a0, a1, a2));
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

      static PyObject *t_MathRuntimeException_createInternalError(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            MathRuntimeException result((jobject) NULL);
            OBJ_CALL(result = ::org::hipparchus::exception::MathRuntimeException::createInternalError());
            return t_MathRuntimeException::wrap_Object(result);
          }
          break;
         case 1:
          {
            ::java::lang::Throwable a0((jobject) NULL);
            MathRuntimeException result((jobject) NULL);

            if (!parseArgs(args, "k", ::java::lang::Throwable::initializeClass, &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::exception::MathRuntimeException::createInternalError(a0));
              return t_MathRuntimeException::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "createInternalError", args);
        return NULL;
      }

      static PyObject *t_MathRuntimeException_getLocalizedMessage(t_MathRuntimeException *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLocalizedMessage());
          return j2p(result);
        }

        return callSuper(PY_TYPE(MathRuntimeException), (PyObject *) self, "getLocalizedMessage", args, 2);
      }

      static PyObject *t_MathRuntimeException_getMessage(t_MathRuntimeException *self, PyObject *args)
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

        return callSuper(PY_TYPE(MathRuntimeException), (PyObject *) self, "getMessage", args, 2);
      }

      static PyObject *t_MathRuntimeException_getParts(t_MathRuntimeException *self)
      {
        JArray< ::java::lang::Object > result((jobject) NULL);
        OBJ_CALL(result = self->object.getParts());
        return JArray<jobject>(result.this$).wrap(::java::lang::t_Object::wrap_jobject);
      }

      static PyObject *t_MathRuntimeException_getSpecifier(t_MathRuntimeException *self)
      {
        ::org::hipparchus::exception::Localizable result((jobject) NULL);
        OBJ_CALL(result = self->object.getSpecifier());
        return ::org::hipparchus::exception::t_Localizable::wrap_Object(result);
      }

      static PyObject *t_MathRuntimeException_get__localizedMessage(t_MathRuntimeException *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getLocalizedMessage());
        return j2p(value);
      }

      static PyObject *t_MathRuntimeException_get__message(t_MathRuntimeException *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getMessage());
        return j2p(value);
      }

      static PyObject *t_MathRuntimeException_get__parts(t_MathRuntimeException *self, void *data)
      {
        JArray< ::java::lang::Object > value((jobject) NULL);
        OBJ_CALL(value = self->object.getParts());
        return JArray<jobject>(value.this$).wrap(::java::lang::t_Object::wrap_jobject);
      }

      static PyObject *t_MathRuntimeException_get__specifier(t_MathRuntimeException *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/odm/ocm/OpsStatus.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OpsStatus.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *OpsStatus::class$ = NULL;
              jmethodID *OpsStatus::mids$ = NULL;
              bool OpsStatus::live$ = false;
              OpsStatus *OpsStatus::BACKUP = NULL;
              OpsStatus *OpsStatus::DECAYED = NULL;
              OpsStatus *OpsStatus::EXTENDED_MISSION = NULL;
              OpsStatus *OpsStatus::NONOPERATIONAL = NULL;
              OpsStatus *OpsStatus::OPERATIONAL = NULL;
              OpsStatus *OpsStatus::PARTIALLY_OPERATIONAL = NULL;
              OpsStatus *OpsStatus::REENTRY_MODE = NULL;
              OpsStatus *OpsStatus::STANBY = NULL;
              OpsStatus *OpsStatus::UNKNOWN = NULL;

              jclass OpsStatus::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/OpsStatus");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_toString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
                  mids$[mid_valueOf_2dc733d6c14f00e7] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/odm/ocm/OpsStatus;");
                  mids$[mid_values_7a219b506f8b5e5e] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/odm/ocm/OpsStatus;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  BACKUP = new OpsStatus(env->getStaticObjectField(cls, "BACKUP", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OpsStatus;"));
                  DECAYED = new OpsStatus(env->getStaticObjectField(cls, "DECAYED", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OpsStatus;"));
                  EXTENDED_MISSION = new OpsStatus(env->getStaticObjectField(cls, "EXTENDED_MISSION", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OpsStatus;"));
                  NONOPERATIONAL = new OpsStatus(env->getStaticObjectField(cls, "NONOPERATIONAL", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OpsStatus;"));
                  OPERATIONAL = new OpsStatus(env->getStaticObjectField(cls, "OPERATIONAL", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OpsStatus;"));
                  PARTIALLY_OPERATIONAL = new OpsStatus(env->getStaticObjectField(cls, "PARTIALLY_OPERATIONAL", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OpsStatus;"));
                  REENTRY_MODE = new OpsStatus(env->getStaticObjectField(cls, "REENTRY_MODE", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OpsStatus;"));
                  STANBY = new OpsStatus(env->getStaticObjectField(cls, "STANBY", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OpsStatus;"));
                  UNKNOWN = new OpsStatus(env->getStaticObjectField(cls, "UNKNOWN", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OpsStatus;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              ::java::lang::String OpsStatus::toString() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_1c1fa1e935d6cdcf]));
              }

              OpsStatus OpsStatus::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return OpsStatus(env->callStaticObjectMethod(cls, mids$[mid_valueOf_2dc733d6c14f00e7], a0.this$));
              }

              JArray< OpsStatus > OpsStatus::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< OpsStatus >(env->callStaticObjectMethod(cls, mids$[mid_values_7a219b506f8b5e5e]));
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
              static PyObject *t_OpsStatus_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OpsStatus_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OpsStatus_of_(t_OpsStatus *self, PyObject *args);
              static PyObject *t_OpsStatus_toString(t_OpsStatus *self, PyObject *args);
              static PyObject *t_OpsStatus_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_OpsStatus_values(PyTypeObject *type);
              static PyObject *t_OpsStatus_get__parameters_(t_OpsStatus *self, void *data);
              static PyGetSetDef t_OpsStatus__fields_[] = {
                DECLARE_GET_FIELD(t_OpsStatus, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OpsStatus__methods_[] = {
                DECLARE_METHOD(t_OpsStatus, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OpsStatus, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OpsStatus, of_, METH_VARARGS),
                DECLARE_METHOD(t_OpsStatus, toString, METH_VARARGS),
                DECLARE_METHOD(t_OpsStatus, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_OpsStatus, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OpsStatus)[] = {
                { Py_tp_methods, t_OpsStatus__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_OpsStatus__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OpsStatus)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(OpsStatus, t_OpsStatus, OpsStatus);
              PyObject *t_OpsStatus::wrap_Object(const OpsStatus& object, PyTypeObject *p0)
              {
                PyObject *obj = t_OpsStatus::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OpsStatus *self = (t_OpsStatus *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_OpsStatus::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_OpsStatus::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OpsStatus *self = (t_OpsStatus *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_OpsStatus::install(PyObject *module)
              {
                installType(&PY_TYPE(OpsStatus), &PY_TYPE_DEF(OpsStatus), module, "OpsStatus", 0);
              }

              void t_OpsStatus::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OpsStatus), "class_", make_descriptor(OpsStatus::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OpsStatus), "wrapfn_", make_descriptor(t_OpsStatus::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OpsStatus), "boxfn_", make_descriptor(boxObject));
                env->getClass(OpsStatus::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(OpsStatus), "BACKUP", make_descriptor(t_OpsStatus::wrap_Object(*OpsStatus::BACKUP)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OpsStatus), "DECAYED", make_descriptor(t_OpsStatus::wrap_Object(*OpsStatus::DECAYED)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OpsStatus), "EXTENDED_MISSION", make_descriptor(t_OpsStatus::wrap_Object(*OpsStatus::EXTENDED_MISSION)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OpsStatus), "NONOPERATIONAL", make_descriptor(t_OpsStatus::wrap_Object(*OpsStatus::NONOPERATIONAL)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OpsStatus), "OPERATIONAL", make_descriptor(t_OpsStatus::wrap_Object(*OpsStatus::OPERATIONAL)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OpsStatus), "PARTIALLY_OPERATIONAL", make_descriptor(t_OpsStatus::wrap_Object(*OpsStatus::PARTIALLY_OPERATIONAL)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OpsStatus), "REENTRY_MODE", make_descriptor(t_OpsStatus::wrap_Object(*OpsStatus::REENTRY_MODE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OpsStatus), "STANBY", make_descriptor(t_OpsStatus::wrap_Object(*OpsStatus::STANBY)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OpsStatus), "UNKNOWN", make_descriptor(t_OpsStatus::wrap_Object(*OpsStatus::UNKNOWN)));
              }

              static PyObject *t_OpsStatus_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OpsStatus::initializeClass, 1)))
                  return NULL;
                return t_OpsStatus::wrap_Object(OpsStatus(((t_OpsStatus *) arg)->object.this$));
              }
              static PyObject *t_OpsStatus_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OpsStatus::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_OpsStatus_of_(t_OpsStatus *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_OpsStatus_toString(t_OpsStatus *self, PyObject *args)
              {
                ::java::lang::String result((jobject) NULL);

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.toString());
                  return j2p(result);
                }

                return callSuper(PY_TYPE(OpsStatus), (PyObject *) self, "toString", args, 2);
              }

              static PyObject *t_OpsStatus_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                OpsStatus result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::ocm::OpsStatus::valueOf(a0));
                  return t_OpsStatus::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_OpsStatus_values(PyTypeObject *type)
              {
                JArray< OpsStatus > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::ocm::OpsStatus::values());
                return JArray<jobject>(result.this$).wrap(t_OpsStatus::wrap_jobject);
              }
              static PyObject *t_OpsStatus_get__parameters_(t_OpsStatus *self, void *data)
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
#include "org/hipparchus/linear/FieldMatrixPreservingVisitor.h"
#include "org/hipparchus/FieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *FieldMatrixPreservingVisitor::class$ = NULL;
      jmethodID *FieldMatrixPreservingVisitor::mids$ = NULL;
      bool FieldMatrixPreservingVisitor::live$ = false;

      jclass FieldMatrixPreservingVisitor::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/FieldMatrixPreservingVisitor");

          mids$ = new jmethodID[max_mid];
          mids$[mid_end_2ff8de927fda4153] = env->getMethodID(cls, "end", "()Lorg/hipparchus/FieldElement;");
          mids$[mid_start_ea412797eafea800] = env->getMethodID(cls, "start", "(IIIIII)V");
          mids$[mid_visit_c2695120fce254e7] = env->getMethodID(cls, "visit", "(IILorg/hipparchus/FieldElement;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::hipparchus::FieldElement FieldMatrixPreservingVisitor::end() const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_end_2ff8de927fda4153]));
      }

      void FieldMatrixPreservingVisitor::start(jint a0, jint a1, jint a2, jint a3, jint a4, jint a5) const
      {
        env->callVoidMethod(this$, mids$[mid_start_ea412797eafea800], a0, a1, a2, a3, a4, a5);
      }

      void FieldMatrixPreservingVisitor::visit(jint a0, jint a1, const ::org::hipparchus::FieldElement & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_visit_c2695120fce254e7], a0, a1, a2.this$);
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
      static PyObject *t_FieldMatrixPreservingVisitor_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldMatrixPreservingVisitor_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldMatrixPreservingVisitor_of_(t_FieldMatrixPreservingVisitor *self, PyObject *args);
      static PyObject *t_FieldMatrixPreservingVisitor_end(t_FieldMatrixPreservingVisitor *self);
      static PyObject *t_FieldMatrixPreservingVisitor_start(t_FieldMatrixPreservingVisitor *self, PyObject *args);
      static PyObject *t_FieldMatrixPreservingVisitor_visit(t_FieldMatrixPreservingVisitor *self, PyObject *args);
      static PyObject *t_FieldMatrixPreservingVisitor_get__parameters_(t_FieldMatrixPreservingVisitor *self, void *data);
      static PyGetSetDef t_FieldMatrixPreservingVisitor__fields_[] = {
        DECLARE_GET_FIELD(t_FieldMatrixPreservingVisitor, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldMatrixPreservingVisitor__methods_[] = {
        DECLARE_METHOD(t_FieldMatrixPreservingVisitor, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldMatrixPreservingVisitor, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldMatrixPreservingVisitor, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldMatrixPreservingVisitor, end, METH_NOARGS),
        DECLARE_METHOD(t_FieldMatrixPreservingVisitor, start, METH_VARARGS),
        DECLARE_METHOD(t_FieldMatrixPreservingVisitor, visit, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldMatrixPreservingVisitor)[] = {
        { Py_tp_methods, t_FieldMatrixPreservingVisitor__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_FieldMatrixPreservingVisitor__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldMatrixPreservingVisitor)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldMatrixPreservingVisitor, t_FieldMatrixPreservingVisitor, FieldMatrixPreservingVisitor);
      PyObject *t_FieldMatrixPreservingVisitor::wrap_Object(const FieldMatrixPreservingVisitor& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldMatrixPreservingVisitor::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldMatrixPreservingVisitor *self = (t_FieldMatrixPreservingVisitor *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldMatrixPreservingVisitor::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldMatrixPreservingVisitor::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldMatrixPreservingVisitor *self = (t_FieldMatrixPreservingVisitor *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldMatrixPreservingVisitor::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldMatrixPreservingVisitor), &PY_TYPE_DEF(FieldMatrixPreservingVisitor), module, "FieldMatrixPreservingVisitor", 0);
      }

      void t_FieldMatrixPreservingVisitor::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldMatrixPreservingVisitor), "class_", make_descriptor(FieldMatrixPreservingVisitor::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldMatrixPreservingVisitor), "wrapfn_", make_descriptor(t_FieldMatrixPreservingVisitor::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldMatrixPreservingVisitor), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldMatrixPreservingVisitor_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldMatrixPreservingVisitor::initializeClass, 1)))
          return NULL;
        return t_FieldMatrixPreservingVisitor::wrap_Object(FieldMatrixPreservingVisitor(((t_FieldMatrixPreservingVisitor *) arg)->object.this$));
      }
      static PyObject *t_FieldMatrixPreservingVisitor_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldMatrixPreservingVisitor::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldMatrixPreservingVisitor_of_(t_FieldMatrixPreservingVisitor *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_FieldMatrixPreservingVisitor_end(t_FieldMatrixPreservingVisitor *self)
      {
        ::org::hipparchus::FieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.end());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldMatrixPreservingVisitor_start(t_FieldMatrixPreservingVisitor *self, PyObject *args)
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

      static PyObject *t_FieldMatrixPreservingVisitor_visit(t_FieldMatrixPreservingVisitor *self, PyObject *args)
      {
        jint a0;
        jint a1;
        ::org::hipparchus::FieldElement a2((jobject) NULL);
        PyTypeObject **p2;

        if (!parseArgs(args, "IIK", ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(self->object.visit(a0, a1, a2));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "visit", args);
        return NULL;
      }
      static PyObject *t_FieldMatrixPreservingVisitor_get__parameters_(t_FieldMatrixPreservingVisitor *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/section/Metadata.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/definitions/TimeSystem.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace section {

          ::java::lang::Class *Metadata::class$ = NULL;
          jmethodID *Metadata::mids$ = NULL;
          bool Metadata::live$ = false;

          jclass Metadata::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/section/Metadata");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getTimeSystem_91b7f51e80ad440f] = env->getMethodID(cls, "getTimeSystem", "()Lorg/orekit/files/ccsds/definitions/TimeSystem;");
              mids$[mid_setTimeSystem_00f5ccc3311d9b97] = env->getMethodID(cls, "setTimeSystem", "(Lorg/orekit/files/ccsds/definitions/TimeSystem;)V");
              mids$[mid_validate_8ba9fe7a847cecad] = env->getMethodID(cls, "validate", "(D)V");
              mids$[mid_getLaunchYear_f0ba70671b70c6e5] = env->getMethodID(cls, "getLaunchYear", "(Ljava/lang/String;)I");
              mids$[mid_getLaunchNumber_f0ba70671b70c6e5] = env->getMethodID(cls, "getLaunchNumber", "(Ljava/lang/String;)I");
              mids$[mid_getLaunchPiece_6f0f3576df9f75ee] = env->getMethodID(cls, "getLaunchPiece", "(Ljava/lang/String;)Ljava/lang/String;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::orekit::files::ccsds::definitions::TimeSystem Metadata::getTimeSystem() const
          {
            return ::org::orekit::files::ccsds::definitions::TimeSystem(env->callObjectMethod(this$, mids$[mid_getTimeSystem_91b7f51e80ad440f]));
          }

          void Metadata::setTimeSystem(const ::org::orekit::files::ccsds::definitions::TimeSystem & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setTimeSystem_00f5ccc3311d9b97], a0.this$);
          }

          void Metadata::validate(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_validate_8ba9fe7a847cecad], a0);
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
          static PyObject *t_Metadata_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Metadata_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Metadata_getTimeSystem(t_Metadata *self);
          static PyObject *t_Metadata_setTimeSystem(t_Metadata *self, PyObject *arg);
          static PyObject *t_Metadata_validate(t_Metadata *self, PyObject *args);
          static PyObject *t_Metadata_get__timeSystem(t_Metadata *self, void *data);
          static int t_Metadata_set__timeSystem(t_Metadata *self, PyObject *arg, void *data);
          static PyGetSetDef t_Metadata__fields_[] = {
            DECLARE_GETSET_FIELD(t_Metadata, timeSystem),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Metadata__methods_[] = {
            DECLARE_METHOD(t_Metadata, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Metadata, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Metadata, getTimeSystem, METH_NOARGS),
            DECLARE_METHOD(t_Metadata, setTimeSystem, METH_O),
            DECLARE_METHOD(t_Metadata, validate, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Metadata)[] = {
            { Py_tp_methods, t_Metadata__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_Metadata__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Metadata)[] = {
            &PY_TYPE_DEF(::org::orekit::files::ccsds::section::CommentsContainer),
            NULL
          };

          DEFINE_TYPE(Metadata, t_Metadata, Metadata);

          void t_Metadata::install(PyObject *module)
          {
            installType(&PY_TYPE(Metadata), &PY_TYPE_DEF(Metadata), module, "Metadata", 0);
          }

          void t_Metadata::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Metadata), "class_", make_descriptor(Metadata::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Metadata), "wrapfn_", make_descriptor(t_Metadata::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Metadata), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Metadata_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Metadata::initializeClass, 1)))
              return NULL;
            return t_Metadata::wrap_Object(Metadata(((t_Metadata *) arg)->object.this$));
          }
          static PyObject *t_Metadata_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Metadata::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_Metadata_getTimeSystem(t_Metadata *self)
          {
            ::org::orekit::files::ccsds::definitions::TimeSystem result((jobject) NULL);
            OBJ_CALL(result = self->object.getTimeSystem());
            return ::org::orekit::files::ccsds::definitions::t_TimeSystem::wrap_Object(result);
          }

          static PyObject *t_Metadata_setTimeSystem(t_Metadata *self, PyObject *arg)
          {
            ::org::orekit::files::ccsds::definitions::TimeSystem a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::files::ccsds::definitions::TimeSystem::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::definitions::t_TimeSystem::parameters_))
            {
              OBJ_CALL(self->object.setTimeSystem(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setTimeSystem", arg);
            return NULL;
          }

          static PyObject *t_Metadata_validate(t_Metadata *self, PyObject *args)
          {
            jdouble a0;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(self->object.validate(a0));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(Metadata), (PyObject *) self, "validate", args, 2);
          }

          static PyObject *t_Metadata_get__timeSystem(t_Metadata *self, void *data)
          {
            ::org::orekit::files::ccsds::definitions::TimeSystem value((jobject) NULL);
            OBJ_CALL(value = self->object.getTimeSystem());
            return ::org::orekit::files::ccsds::definitions::t_TimeSystem::wrap_Object(value);
          }
          static int t_Metadata_set__timeSystem(t_Metadata *self, PyObject *arg, void *data)
          {
            {
              ::org::orekit::files::ccsds::definitions::TimeSystem value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::TimeSystem::initializeClass, &value))
              {
                INT_CALL(self->object.setTimeSystem(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "timeSystem", arg);
            return -1;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/attitudes/AttitudeInterpolator.h"
#include "org/orekit/utils/TimeStampedAngularCoordinates.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/attitudes/Attitude.h"
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
          mids$[mid_init$_f65cfdadd87367f9] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/time/TimeInterpolator;)V");
          mids$[mid_getAngularInterpolator_04638ce011c1f261] = env->getMethodID(cls, "getAngularInterpolator", "()Lorg/orekit/time/TimeInterpolator;");
          mids$[mid_getReferenceFrame_2c51111cc6894ba1] = env->getMethodID(cls, "getReferenceFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_interpolate_d1f7420a1b94b392] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/AbstractTimeInterpolator$InterpolationData;)Lorg/orekit/attitudes/Attitude;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      AttitudeInterpolator::AttitudeInterpolator(const ::org::orekit::frames::Frame & a0, const ::org::orekit::time::TimeInterpolator & a1) : ::org::orekit::time::AbstractTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_f65cfdadd87367f9, a0.this$, a1.this$)) {}

      ::org::orekit::time::TimeInterpolator AttitudeInterpolator::getAngularInterpolator() const
      {
        return ::org::orekit::time::TimeInterpolator(env->callObjectMethod(this$, mids$[mid_getAngularInterpolator_04638ce011c1f261]));
      }

      ::org::orekit::frames::Frame AttitudeInterpolator::getReferenceFrame() const
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
#include "org/orekit/bodies/Loxodrome.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "java/lang/Class.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace bodies {

      ::java::lang::Class *Loxodrome::class$ = NULL;
      jmethodID *Loxodrome::mids$ = NULL;
      bool Loxodrome::live$ = false;

      jclass Loxodrome::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/bodies/Loxodrome");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_374ffa21d0136141] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/GeodeticPoint;DLorg/orekit/bodies/OneAxisEllipsoid;)V");
          mids$[mid_init$_b1d6d9374cba059b] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/GeodeticPoint;DLorg/orekit/bodies/OneAxisEllipsoid;D)V");
          mids$[mid_getAltitude_b74f83833fdad017] = env->getMethodID(cls, "getAltitude", "()D");
          mids$[mid_getAzimuth_b74f83833fdad017] = env->getMethodID(cls, "getAzimuth", "()D");
          mids$[mid_getBody_dd5c4288aa5a3dd8] = env->getMethodID(cls, "getBody", "()Lorg/orekit/bodies/OneAxisEllipsoid;");
          mids$[mid_getPoint_963915d358b1e63a] = env->getMethodID(cls, "getPoint", "()Lorg/orekit/bodies/GeodeticPoint;");
          mids$[mid_pointAtDistance_11599325d56b0055] = env->getMethodID(cls, "pointAtDistance", "(D)Lorg/orekit/bodies/GeodeticPoint;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      Loxodrome::Loxodrome(const ::org::orekit::bodies::GeodeticPoint & a0, jdouble a1, const ::org::orekit::bodies::OneAxisEllipsoid & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_374ffa21d0136141, a0.this$, a1, a2.this$)) {}

      Loxodrome::Loxodrome(const ::org::orekit::bodies::GeodeticPoint & a0, jdouble a1, const ::org::orekit::bodies::OneAxisEllipsoid & a2, jdouble a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b1d6d9374cba059b, a0.this$, a1, a2.this$, a3)) {}

      jdouble Loxodrome::getAltitude() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getAltitude_b74f83833fdad017]);
      }

      jdouble Loxodrome::getAzimuth() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getAzimuth_b74f83833fdad017]);
      }

      ::org::orekit::bodies::OneAxisEllipsoid Loxodrome::getBody() const
      {
        return ::org::orekit::bodies::OneAxisEllipsoid(env->callObjectMethod(this$, mids$[mid_getBody_dd5c4288aa5a3dd8]));
      }

      ::org::orekit::bodies::GeodeticPoint Loxodrome::getPoint() const
      {
        return ::org::orekit::bodies::GeodeticPoint(env->callObjectMethod(this$, mids$[mid_getPoint_963915d358b1e63a]));
      }

      ::org::orekit::bodies::GeodeticPoint Loxodrome::pointAtDistance(jdouble a0) const
      {
        return ::org::orekit::bodies::GeodeticPoint(env->callObjectMethod(this$, mids$[mid_pointAtDistance_11599325d56b0055], a0));
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
      static PyObject *t_Loxodrome_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Loxodrome_instance_(PyTypeObject *type, PyObject *arg);
      static int t_Loxodrome_init_(t_Loxodrome *self, PyObject *args, PyObject *kwds);
      static PyObject *t_Loxodrome_getAltitude(t_Loxodrome *self);
      static PyObject *t_Loxodrome_getAzimuth(t_Loxodrome *self);
      static PyObject *t_Loxodrome_getBody(t_Loxodrome *self);
      static PyObject *t_Loxodrome_getPoint(t_Loxodrome *self);
      static PyObject *t_Loxodrome_pointAtDistance(t_Loxodrome *self, PyObject *arg);
      static PyObject *t_Loxodrome_get__altitude(t_Loxodrome *self, void *data);
      static PyObject *t_Loxodrome_get__azimuth(t_Loxodrome *self, void *data);
      static PyObject *t_Loxodrome_get__body(t_Loxodrome *self, void *data);
      static PyObject *t_Loxodrome_get__point(t_Loxodrome *self, void *data);
      static PyGetSetDef t_Loxodrome__fields_[] = {
        DECLARE_GET_FIELD(t_Loxodrome, altitude),
        DECLARE_GET_FIELD(t_Loxodrome, azimuth),
        DECLARE_GET_FIELD(t_Loxodrome, body),
        DECLARE_GET_FIELD(t_Loxodrome, point),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_Loxodrome__methods_[] = {
        DECLARE_METHOD(t_Loxodrome, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Loxodrome, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Loxodrome, getAltitude, METH_NOARGS),
        DECLARE_METHOD(t_Loxodrome, getAzimuth, METH_NOARGS),
        DECLARE_METHOD(t_Loxodrome, getBody, METH_NOARGS),
        DECLARE_METHOD(t_Loxodrome, getPoint, METH_NOARGS),
        DECLARE_METHOD(t_Loxodrome, pointAtDistance, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Loxodrome)[] = {
        { Py_tp_methods, t_Loxodrome__methods_ },
        { Py_tp_init, (void *) t_Loxodrome_init_ },
        { Py_tp_getset, t_Loxodrome__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Loxodrome)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(Loxodrome, t_Loxodrome, Loxodrome);

      void t_Loxodrome::install(PyObject *module)
      {
        installType(&PY_TYPE(Loxodrome), &PY_TYPE_DEF(Loxodrome), module, "Loxodrome", 0);
      }

      void t_Loxodrome::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Loxodrome), "class_", make_descriptor(Loxodrome::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Loxodrome), "wrapfn_", make_descriptor(t_Loxodrome::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Loxodrome), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Loxodrome_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Loxodrome::initializeClass, 1)))
          return NULL;
        return t_Loxodrome::wrap_Object(Loxodrome(((t_Loxodrome *) arg)->object.this$));
      }
      static PyObject *t_Loxodrome_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Loxodrome::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_Loxodrome_init_(t_Loxodrome *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::orekit::bodies::GeodeticPoint a0((jobject) NULL);
            jdouble a1;
            ::org::orekit::bodies::OneAxisEllipsoid a2((jobject) NULL);
            Loxodrome object((jobject) NULL);

            if (!parseArgs(args, "kDk", ::org::orekit::bodies::GeodeticPoint::initializeClass, ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = Loxodrome(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            ::org::orekit::bodies::GeodeticPoint a0((jobject) NULL);
            jdouble a1;
            ::org::orekit::bodies::OneAxisEllipsoid a2((jobject) NULL);
            jdouble a3;
            Loxodrome object((jobject) NULL);

            if (!parseArgs(args, "kDkD", ::org::orekit::bodies::GeodeticPoint::initializeClass, ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = Loxodrome(a0, a1, a2, a3));
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

      static PyObject *t_Loxodrome_getAltitude(t_Loxodrome *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getAltitude());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Loxodrome_getAzimuth(t_Loxodrome *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getAzimuth());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Loxodrome_getBody(t_Loxodrome *self)
      {
        ::org::orekit::bodies::OneAxisEllipsoid result((jobject) NULL);
        OBJ_CALL(result = self->object.getBody());
        return ::org::orekit::bodies::t_OneAxisEllipsoid::wrap_Object(result);
      }

      static PyObject *t_Loxodrome_getPoint(t_Loxodrome *self)
      {
        ::org::orekit::bodies::GeodeticPoint result((jobject) NULL);
        OBJ_CALL(result = self->object.getPoint());
        return ::org::orekit::bodies::t_GeodeticPoint::wrap_Object(result);
      }

      static PyObject *t_Loxodrome_pointAtDistance(t_Loxodrome *self, PyObject *arg)
      {
        jdouble a0;
        ::org::orekit::bodies::GeodeticPoint result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.pointAtDistance(a0));
          return ::org::orekit::bodies::t_GeodeticPoint::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "pointAtDistance", arg);
        return NULL;
      }

      static PyObject *t_Loxodrome_get__altitude(t_Loxodrome *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getAltitude());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Loxodrome_get__azimuth(t_Loxodrome *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getAzimuth());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Loxodrome_get__body(t_Loxodrome *self, void *data)
      {
        ::org::orekit::bodies::OneAxisEllipsoid value((jobject) NULL);
        OBJ_CALL(value = self->object.getBody());
        return ::org::orekit::bodies::t_OneAxisEllipsoid::wrap_Object(value);
      }

      static PyObject *t_Loxodrome_get__point(t_Loxodrome *self, void *data)
      {
        ::org::orekit::bodies::GeodeticPoint value((jobject) NULL);
        OBJ_CALL(value = self->object.getPoint());
        return ::org::orekit::bodies::t_GeodeticPoint::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/atmosphere/data/AbstractSolarActivityDataLoader$LineParameters.h"
#include "org/orekit/time/TimeStamped.h"
#include "java/io/Serializable.h"
#include "org/orekit/models/earth/atmosphere/data/AbstractSolarActivityDataLoader$LineParameters.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Comparable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace atmosphere {
          namespace data {

            ::java::lang::Class *AbstractSolarActivityDataLoader$LineParameters::class$ = NULL;
            jmethodID *AbstractSolarActivityDataLoader$LineParameters::mids$ = NULL;
            bool AbstractSolarActivityDataLoader$LineParameters::live$ = false;

            jclass AbstractSolarActivityDataLoader$LineParameters::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/models/earth/atmosphere/data/AbstractSolarActivityDataLoader$LineParameters");

                mids$ = new jmethodID[max_mid];
                mids$[mid_compareTo_73ef5c88fa79f2d9] = env->getMethodID(cls, "compareTo", "(Lorg/orekit/models/earth/atmosphere/data/AbstractSolarActivityDataLoader$LineParameters;)I");
                mids$[mid_equals_460c5e2d9d51c6cc] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
                mids$[mid_getDate_c325492395d89b24] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_hashCode_55546ef6a647f39b] = env->getMethodID(cls, "hashCode", "()I");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jint AbstractSolarActivityDataLoader$LineParameters::compareTo(const AbstractSolarActivityDataLoader$LineParameters & a0) const
            {
              return env->callIntMethod(this$, mids$[mid_compareTo_73ef5c88fa79f2d9], a0.this$);
            }

            jboolean AbstractSolarActivityDataLoader$LineParameters::equals(const ::java::lang::Object & a0) const
            {
              return env->callBooleanMethod(this$, mids$[mid_equals_460c5e2d9d51c6cc], a0.this$);
            }

            ::org::orekit::time::AbsoluteDate AbstractSolarActivityDataLoader$LineParameters::getDate() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_c325492395d89b24]));
            }

            jint AbstractSolarActivityDataLoader$LineParameters::hashCode() const
            {
              return env->callIntMethod(this$, mids$[mid_hashCode_55546ef6a647f39b]);
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
    namespace models {
      namespace earth {
        namespace atmosphere {
          namespace data {
            static PyObject *t_AbstractSolarActivityDataLoader$LineParameters_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AbstractSolarActivityDataLoader$LineParameters_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AbstractSolarActivityDataLoader$LineParameters_of_(t_AbstractSolarActivityDataLoader$LineParameters *self, PyObject *args);
            static PyObject *t_AbstractSolarActivityDataLoader$LineParameters_compareTo(t_AbstractSolarActivityDataLoader$LineParameters *self, PyObject *arg);
            static PyObject *t_AbstractSolarActivityDataLoader$LineParameters_equals(t_AbstractSolarActivityDataLoader$LineParameters *self, PyObject *args);
            static PyObject *t_AbstractSolarActivityDataLoader$LineParameters_getDate(t_AbstractSolarActivityDataLoader$LineParameters *self);
            static PyObject *t_AbstractSolarActivityDataLoader$LineParameters_hashCode(t_AbstractSolarActivityDataLoader$LineParameters *self, PyObject *args);
            static PyObject *t_AbstractSolarActivityDataLoader$LineParameters_get__date(t_AbstractSolarActivityDataLoader$LineParameters *self, void *data);
            static PyObject *t_AbstractSolarActivityDataLoader$LineParameters_get__parameters_(t_AbstractSolarActivityDataLoader$LineParameters *self, void *data);
            static PyGetSetDef t_AbstractSolarActivityDataLoader$LineParameters__fields_[] = {
              DECLARE_GET_FIELD(t_AbstractSolarActivityDataLoader$LineParameters, date),
              DECLARE_GET_FIELD(t_AbstractSolarActivityDataLoader$LineParameters, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_AbstractSolarActivityDataLoader$LineParameters__methods_[] = {
              DECLARE_METHOD(t_AbstractSolarActivityDataLoader$LineParameters, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AbstractSolarActivityDataLoader$LineParameters, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AbstractSolarActivityDataLoader$LineParameters, of_, METH_VARARGS),
              DECLARE_METHOD(t_AbstractSolarActivityDataLoader$LineParameters, compareTo, METH_O),
              DECLARE_METHOD(t_AbstractSolarActivityDataLoader$LineParameters, equals, METH_VARARGS),
              DECLARE_METHOD(t_AbstractSolarActivityDataLoader$LineParameters, getDate, METH_NOARGS),
              DECLARE_METHOD(t_AbstractSolarActivityDataLoader$LineParameters, hashCode, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(AbstractSolarActivityDataLoader$LineParameters)[] = {
              { Py_tp_methods, t_AbstractSolarActivityDataLoader$LineParameters__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_AbstractSolarActivityDataLoader$LineParameters__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(AbstractSolarActivityDataLoader$LineParameters)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(AbstractSolarActivityDataLoader$LineParameters, t_AbstractSolarActivityDataLoader$LineParameters, AbstractSolarActivityDataLoader$LineParameters);
            PyObject *t_AbstractSolarActivityDataLoader$LineParameters::wrap_Object(const AbstractSolarActivityDataLoader$LineParameters& object, PyTypeObject *p0)
            {
              PyObject *obj = t_AbstractSolarActivityDataLoader$LineParameters::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_AbstractSolarActivityDataLoader$LineParameters *self = (t_AbstractSolarActivityDataLoader$LineParameters *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_AbstractSolarActivityDataLoader$LineParameters::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_AbstractSolarActivityDataLoader$LineParameters::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_AbstractSolarActivityDataLoader$LineParameters *self = (t_AbstractSolarActivityDataLoader$LineParameters *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_AbstractSolarActivityDataLoader$LineParameters::install(PyObject *module)
            {
              installType(&PY_TYPE(AbstractSolarActivityDataLoader$LineParameters), &PY_TYPE_DEF(AbstractSolarActivityDataLoader$LineParameters), module, "AbstractSolarActivityDataLoader$LineParameters", 0);
            }

            void t_AbstractSolarActivityDataLoader$LineParameters::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractSolarActivityDataLoader$LineParameters), "class_", make_descriptor(AbstractSolarActivityDataLoader$LineParameters::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractSolarActivityDataLoader$LineParameters), "wrapfn_", make_descriptor(t_AbstractSolarActivityDataLoader$LineParameters::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractSolarActivityDataLoader$LineParameters), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_AbstractSolarActivityDataLoader$LineParameters_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, AbstractSolarActivityDataLoader$LineParameters::initializeClass, 1)))
                return NULL;
              return t_AbstractSolarActivityDataLoader$LineParameters::wrap_Object(AbstractSolarActivityDataLoader$LineParameters(((t_AbstractSolarActivityDataLoader$LineParameters *) arg)->object.this$));
            }
            static PyObject *t_AbstractSolarActivityDataLoader$LineParameters_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, AbstractSolarActivityDataLoader$LineParameters::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_AbstractSolarActivityDataLoader$LineParameters_of_(t_AbstractSolarActivityDataLoader$LineParameters *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_AbstractSolarActivityDataLoader$LineParameters_compareTo(t_AbstractSolarActivityDataLoader$LineParameters *self, PyObject *arg)
            {
              AbstractSolarActivityDataLoader$LineParameters a0((jobject) NULL);
              PyTypeObject **p0;
              jint result;

              if (!parseArg(arg, "K", AbstractSolarActivityDataLoader$LineParameters::initializeClass, &a0, &p0, t_AbstractSolarActivityDataLoader$LineParameters::parameters_))
              {
                OBJ_CALL(result = self->object.compareTo(a0));
                return PyLong_FromLong((long) result);
              }

              PyErr_SetArgsError((PyObject *) self, "compareTo", arg);
              return NULL;
            }

            static PyObject *t_AbstractSolarActivityDataLoader$LineParameters_equals(t_AbstractSolarActivityDataLoader$LineParameters *self, PyObject *args)
            {
              ::java::lang::Object a0((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "o", &a0))
              {
                OBJ_CALL(result = self->object.equals(a0));
                Py_RETURN_BOOL(result);
              }

              return callSuper(PY_TYPE(AbstractSolarActivityDataLoader$LineParameters), (PyObject *) self, "equals", args, 2);
            }

            static PyObject *t_AbstractSolarActivityDataLoader$LineParameters_getDate(t_AbstractSolarActivityDataLoader$LineParameters *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_AbstractSolarActivityDataLoader$LineParameters_hashCode(t_AbstractSolarActivityDataLoader$LineParameters *self, PyObject *args)
            {
              jint result;

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.hashCode());
                return PyLong_FromLong((long) result);
              }

              return callSuper(PY_TYPE(AbstractSolarActivityDataLoader$LineParameters), (PyObject *) self, "hashCode", args, 2);
            }
            static PyObject *t_AbstractSolarActivityDataLoader$LineParameters_get__parameters_(t_AbstractSolarActivityDataLoader$LineParameters *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }

            static PyObject *t_AbstractSolarActivityDataLoader$LineParameters_get__date(t_AbstractSolarActivityDataLoader$LineParameters *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/PythonAbstractAlfriend1999.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType.h"
#include "java/lang/Throwable.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace ssa {
      namespace collision {
        namespace shorttermencounter {
          namespace probability {
            namespace twod {

              ::java::lang::Class *PythonAbstractAlfriend1999::class$ = NULL;
              jmethodID *PythonAbstractAlfriend1999::mids$ = NULL;
              bool PythonAbstractAlfriend1999::live$ = false;

              jclass PythonAbstractAlfriend1999::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/ssa/collision/shorttermencounter/probability/twod/PythonAbstractAlfriend1999");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_734b91ac30d5f9b4] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
                  mids$[mid_computeValue_f804f816b79164cb] = env->getMethodID(cls, "computeValue", "(DDD)D");
                  mids$[mid_computeValue_8a93710b1b1536a6] = env->getMethodID(cls, "computeValue", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
                  mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
                  mids$[mid_getType_8397a286d982b383] = env->getMethodID(cls, "getType", "()Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType;");
                  mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
                  mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
                  mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              PythonAbstractAlfriend1999::PythonAbstractAlfriend1999(const ::java::lang::String & a0) : ::org::orekit::ssa::collision::shorttermencounter::probability::twod::AbstractAlfriend1999(env->newObject(initializeClass, &mids$, mid_init$_734b91ac30d5f9b4, a0.this$)) {}

              void PythonAbstractAlfriend1999::finalize() const
              {
                env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
              }

              jlong PythonAbstractAlfriend1999::pythonExtension() const
              {
                return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
              }

              void PythonAbstractAlfriend1999::pythonExtension(jlong a0) const
              {
                env->callVoidMethod(this$, mids$[mid_pythonExtension_3d7dd2314a0dd456], a0);
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
              static PyObject *t_PythonAbstractAlfriend1999_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_PythonAbstractAlfriend1999_instance_(PyTypeObject *type, PyObject *arg);
              static int t_PythonAbstractAlfriend1999_init_(t_PythonAbstractAlfriend1999 *self, PyObject *args, PyObject *kwds);
              static PyObject *t_PythonAbstractAlfriend1999_finalize(t_PythonAbstractAlfriend1999 *self);
              static PyObject *t_PythonAbstractAlfriend1999_pythonExtension(t_PythonAbstractAlfriend1999 *self, PyObject *args);
              static jdouble JNICALL t_PythonAbstractAlfriend1999_computeValue0(JNIEnv *jenv, jobject jobj, jdouble a0, jdouble a1, jdouble a2);
              static jobject JNICALL t_PythonAbstractAlfriend1999_computeValue1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
              static jobject JNICALL t_PythonAbstractAlfriend1999_getType2(JNIEnv *jenv, jobject jobj);
              static void JNICALL t_PythonAbstractAlfriend1999_pythonDecRef3(JNIEnv *jenv, jobject jobj);
              static PyObject *t_PythonAbstractAlfriend1999_get__self(t_PythonAbstractAlfriend1999 *self, void *data);
              static PyGetSetDef t_PythonAbstractAlfriend1999__fields_[] = {
                DECLARE_GET_FIELD(t_PythonAbstractAlfriend1999, self),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_PythonAbstractAlfriend1999__methods_[] = {
                DECLARE_METHOD(t_PythonAbstractAlfriend1999, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_PythonAbstractAlfriend1999, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_PythonAbstractAlfriend1999, finalize, METH_NOARGS),
                DECLARE_METHOD(t_PythonAbstractAlfriend1999, pythonExtension, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(PythonAbstractAlfriend1999)[] = {
                { Py_tp_methods, t_PythonAbstractAlfriend1999__methods_ },
                { Py_tp_init, (void *) t_PythonAbstractAlfriend1999_init_ },
                { Py_tp_getset, t_PythonAbstractAlfriend1999__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(PythonAbstractAlfriend1999)[] = {
                &PY_TYPE_DEF(::org::orekit::ssa::collision::shorttermencounter::probability::twod::AbstractAlfriend1999),
                NULL
              };

              DEFINE_TYPE(PythonAbstractAlfriend1999, t_PythonAbstractAlfriend1999, PythonAbstractAlfriend1999);

              void t_PythonAbstractAlfriend1999::install(PyObject *module)
              {
                installType(&PY_TYPE(PythonAbstractAlfriend1999), &PY_TYPE_DEF(PythonAbstractAlfriend1999), module, "PythonAbstractAlfriend1999", 1);
              }

              void t_PythonAbstractAlfriend1999::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractAlfriend1999), "class_", make_descriptor(PythonAbstractAlfriend1999::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractAlfriend1999), "wrapfn_", make_descriptor(t_PythonAbstractAlfriend1999::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractAlfriend1999), "boxfn_", make_descriptor(boxObject));
                jclass cls = env->getClass(PythonAbstractAlfriend1999::initializeClass);
                JNINativeMethod methods[] = {
                  { "computeValue", "(DDD)D", (void *) t_PythonAbstractAlfriend1999_computeValue0 },
                  { "computeValue", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;", (void *) t_PythonAbstractAlfriend1999_computeValue1 },
                  { "getType", "()Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType;", (void *) t_PythonAbstractAlfriend1999_getType2 },
                  { "pythonDecRef", "()V", (void *) t_PythonAbstractAlfriend1999_pythonDecRef3 },
                };
                env->registerNatives(cls, methods, 4);
              }

              static PyObject *t_PythonAbstractAlfriend1999_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, PythonAbstractAlfriend1999::initializeClass, 1)))
                  return NULL;
                return t_PythonAbstractAlfriend1999::wrap_Object(PythonAbstractAlfriend1999(((t_PythonAbstractAlfriend1999 *) arg)->object.this$));
              }
              static PyObject *t_PythonAbstractAlfriend1999_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, PythonAbstractAlfriend1999::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_PythonAbstractAlfriend1999_init_(t_PythonAbstractAlfriend1999 *self, PyObject *args, PyObject *kwds)
              {
                ::java::lang::String a0((jobject) NULL);
                PythonAbstractAlfriend1999 object((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  INT_CALL(object = PythonAbstractAlfriend1999(a0));
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

              static PyObject *t_PythonAbstractAlfriend1999_finalize(t_PythonAbstractAlfriend1999 *self)
              {
                OBJ_CALL(self->object.finalize());
                Py_RETURN_NONE;
              }

              static PyObject *t_PythonAbstractAlfriend1999_pythonExtension(t_PythonAbstractAlfriend1999 *self, PyObject *args)
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

              static jdouble JNICALL t_PythonAbstractAlfriend1999_computeValue0(JNIEnv *jenv, jobject jobj, jdouble a0, jdouble a1, jdouble a2)
              {
                jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractAlfriend1999::mids$[PythonAbstractAlfriend1999::mid_pythonExtension_6c0ce7e438e5ded4]);
                PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
                PythonGIL gil(jenv);
                jdouble value;
                PyObject *result = PyObject_CallMethod(obj, "computeValue", "ddd", (double) a0, (double) a1, (double) a2);
                if (!result)
                  throwPythonError();
                else if (parseArg(result, "D", &value))
                {
                  throwTypeError("computeValue", result);
                  Py_DECREF(result);
                }
                else
                {
                  Py_DECREF(result);
                  return value;
                }

                return (jdouble) 0;
              }

              static jobject JNICALL t_PythonAbstractAlfriend1999_computeValue1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
              {
                jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractAlfriend1999::mids$[PythonAbstractAlfriend1999::mid_pythonExtension_6c0ce7e438e5ded4]);
                PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
                PythonGIL gil(jenv);
                ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
                PyObject *o0 = ::org::hipparchus::t_CalculusFieldElement::wrap_Object(::org::hipparchus::CalculusFieldElement(a0));
                PyObject *o1 = ::org::hipparchus::t_CalculusFieldElement::wrap_Object(::org::hipparchus::CalculusFieldElement(a1));
                PyObject *o2 = ::org::hipparchus::t_CalculusFieldElement::wrap_Object(::org::hipparchus::CalculusFieldElement(a2));
                PyObject *result = PyObject_CallMethod(obj, "computeValue", "OOO", o0, o1, o2);
                Py_DECREF(o0);
                Py_DECREF(o1);
                Py_DECREF(o2);
                if (!result)
                  throwPythonError();
                else if (parseArg(result, "k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
                {
                  throwTypeError("computeValue", result);
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

              static jobject JNICALL t_PythonAbstractAlfriend1999_getType2(JNIEnv *jenv, jobject jobj)
              {
                jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractAlfriend1999::mids$[PythonAbstractAlfriend1999::mid_pythonExtension_6c0ce7e438e5ded4]);
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

              static void JNICALL t_PythonAbstractAlfriend1999_pythonDecRef3(JNIEnv *jenv, jobject jobj)
              {
                jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractAlfriend1999::mids$[PythonAbstractAlfriend1999::mid_pythonExtension_6c0ce7e438e5ded4]);
                PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

                if (obj != NULL)
                {
                  jenv->CallVoidMethod(jobj, PythonAbstractAlfriend1999::mids$[PythonAbstractAlfriend1999::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
                  env->finalizeObject(jenv, obj);
                }
              }

              static PyObject *t_PythonAbstractAlfriend1999_get__self(t_PythonAbstractAlfriend1999 *self, void *data)
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
#include "org/orekit/files/sp3/SP3Coordinate.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/files/sp3/SP3Coordinate.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace sp3 {

        ::java::lang::Class *SP3Coordinate::class$ = NULL;
        jmethodID *SP3Coordinate::mids$ = NULL;
        bool SP3Coordinate::live$ = false;
        SP3Coordinate *SP3Coordinate::DUMMY = NULL;

        jclass SP3Coordinate::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/sp3/SP3Coordinate");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ad58f8869eeeecbb] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;DDDDZZZZ)V");
            mids$[mid_getClockAccuracy_b74f83833fdad017] = env->getMethodID(cls, "getClockAccuracy", "()D");
            mids$[mid_getClockCorrection_b74f83833fdad017] = env->getMethodID(cls, "getClockCorrection", "()D");
            mids$[mid_getClockRateAccuracy_b74f83833fdad017] = env->getMethodID(cls, "getClockRateAccuracy", "()D");
            mids$[mid_getClockRateChange_b74f83833fdad017] = env->getMethodID(cls, "getClockRateChange", "()D");
            mids$[mid_getPositionAccuracy_8b724f8b4fdad1a2] = env->getMethodID(cls, "getPositionAccuracy", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_getVelocityAccuracy_8b724f8b4fdad1a2] = env->getMethodID(cls, "getVelocityAccuracy", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_hasClockEvent_9ab94ac1dc23b105] = env->getMethodID(cls, "hasClockEvent", "()Z");
            mids$[mid_hasClockPrediction_9ab94ac1dc23b105] = env->getMethodID(cls, "hasClockPrediction", "()Z");
            mids$[mid_hasOrbitManeuverEvent_9ab94ac1dc23b105] = env->getMethodID(cls, "hasOrbitManeuverEvent", "()Z");
            mids$[mid_hasOrbitPrediction_9ab94ac1dc23b105] = env->getMethodID(cls, "hasOrbitPrediction", "()Z");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            DUMMY = new SP3Coordinate(env->getStaticObjectField(cls, "DUMMY", "Lorg/orekit/files/sp3/SP3Coordinate;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SP3Coordinate::SP3Coordinate(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a3, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8, jboolean a9, jboolean a10, jboolean a11, jboolean a12) : ::org::orekit::utils::TimeStampedPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_ad58f8869eeeecbb, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5, a6, a7, a8, a9, a10, a11, a12)) {}

        jdouble SP3Coordinate::getClockAccuracy() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getClockAccuracy_b74f83833fdad017]);
        }

        jdouble SP3Coordinate::getClockCorrection() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getClockCorrection_b74f83833fdad017]);
        }

        jdouble SP3Coordinate::getClockRateAccuracy() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getClockRateAccuracy_b74f83833fdad017]);
        }

        jdouble SP3Coordinate::getClockRateChange() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getClockRateChange_b74f83833fdad017]);
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D SP3Coordinate::getPositionAccuracy() const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getPositionAccuracy_8b724f8b4fdad1a2]));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D SP3Coordinate::getVelocityAccuracy() const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getVelocityAccuracy_8b724f8b4fdad1a2]));
        }

        jboolean SP3Coordinate::hasClockEvent() const
        {
          return env->callBooleanMethod(this$, mids$[mid_hasClockEvent_9ab94ac1dc23b105]);
        }

        jboolean SP3Coordinate::hasClockPrediction() const
        {
          return env->callBooleanMethod(this$, mids$[mid_hasClockPrediction_9ab94ac1dc23b105]);
        }

        jboolean SP3Coordinate::hasOrbitManeuverEvent() const
        {
          return env->callBooleanMethod(this$, mids$[mid_hasOrbitManeuverEvent_9ab94ac1dc23b105]);
        }

        jboolean SP3Coordinate::hasOrbitPrediction() const
        {
          return env->callBooleanMethod(this$, mids$[mid_hasOrbitPrediction_9ab94ac1dc23b105]);
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
        static PyObject *t_SP3Coordinate_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SP3Coordinate_instance_(PyTypeObject *type, PyObject *arg);
        static int t_SP3Coordinate_init_(t_SP3Coordinate *self, PyObject *args, PyObject *kwds);
        static PyObject *t_SP3Coordinate_getClockAccuracy(t_SP3Coordinate *self);
        static PyObject *t_SP3Coordinate_getClockCorrection(t_SP3Coordinate *self);
        static PyObject *t_SP3Coordinate_getClockRateAccuracy(t_SP3Coordinate *self);
        static PyObject *t_SP3Coordinate_getClockRateChange(t_SP3Coordinate *self);
        static PyObject *t_SP3Coordinate_getPositionAccuracy(t_SP3Coordinate *self);
        static PyObject *t_SP3Coordinate_getVelocityAccuracy(t_SP3Coordinate *self);
        static PyObject *t_SP3Coordinate_hasClockEvent(t_SP3Coordinate *self);
        static PyObject *t_SP3Coordinate_hasClockPrediction(t_SP3Coordinate *self);
        static PyObject *t_SP3Coordinate_hasOrbitManeuverEvent(t_SP3Coordinate *self);
        static PyObject *t_SP3Coordinate_hasOrbitPrediction(t_SP3Coordinate *self);
        static PyObject *t_SP3Coordinate_get__clockAccuracy(t_SP3Coordinate *self, void *data);
        static PyObject *t_SP3Coordinate_get__clockCorrection(t_SP3Coordinate *self, void *data);
        static PyObject *t_SP3Coordinate_get__clockRateAccuracy(t_SP3Coordinate *self, void *data);
        static PyObject *t_SP3Coordinate_get__clockRateChange(t_SP3Coordinate *self, void *data);
        static PyObject *t_SP3Coordinate_get__positionAccuracy(t_SP3Coordinate *self, void *data);
        static PyObject *t_SP3Coordinate_get__velocityAccuracy(t_SP3Coordinate *self, void *data);
        static PyGetSetDef t_SP3Coordinate__fields_[] = {
          DECLARE_GET_FIELD(t_SP3Coordinate, clockAccuracy),
          DECLARE_GET_FIELD(t_SP3Coordinate, clockCorrection),
          DECLARE_GET_FIELD(t_SP3Coordinate, clockRateAccuracy),
          DECLARE_GET_FIELD(t_SP3Coordinate, clockRateChange),
          DECLARE_GET_FIELD(t_SP3Coordinate, positionAccuracy),
          DECLARE_GET_FIELD(t_SP3Coordinate, velocityAccuracy),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SP3Coordinate__methods_[] = {
          DECLARE_METHOD(t_SP3Coordinate, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SP3Coordinate, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SP3Coordinate, getClockAccuracy, METH_NOARGS),
          DECLARE_METHOD(t_SP3Coordinate, getClockCorrection, METH_NOARGS),
          DECLARE_METHOD(t_SP3Coordinate, getClockRateAccuracy, METH_NOARGS),
          DECLARE_METHOD(t_SP3Coordinate, getClockRateChange, METH_NOARGS),
          DECLARE_METHOD(t_SP3Coordinate, getPositionAccuracy, METH_NOARGS),
          DECLARE_METHOD(t_SP3Coordinate, getVelocityAccuracy, METH_NOARGS),
          DECLARE_METHOD(t_SP3Coordinate, hasClockEvent, METH_NOARGS),
          DECLARE_METHOD(t_SP3Coordinate, hasClockPrediction, METH_NOARGS),
          DECLARE_METHOD(t_SP3Coordinate, hasOrbitManeuverEvent, METH_NOARGS),
          DECLARE_METHOD(t_SP3Coordinate, hasOrbitPrediction, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SP3Coordinate)[] = {
          { Py_tp_methods, t_SP3Coordinate__methods_ },
          { Py_tp_init, (void *) t_SP3Coordinate_init_ },
          { Py_tp_getset, t_SP3Coordinate__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SP3Coordinate)[] = {
          &PY_TYPE_DEF(::org::orekit::utils::TimeStampedPVCoordinates),
          NULL
        };

        DEFINE_TYPE(SP3Coordinate, t_SP3Coordinate, SP3Coordinate);

        void t_SP3Coordinate::install(PyObject *module)
        {
          installType(&PY_TYPE(SP3Coordinate), &PY_TYPE_DEF(SP3Coordinate), module, "SP3Coordinate", 0);
        }

        void t_SP3Coordinate::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3Coordinate), "class_", make_descriptor(SP3Coordinate::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3Coordinate), "wrapfn_", make_descriptor(t_SP3Coordinate::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3Coordinate), "boxfn_", make_descriptor(boxObject));
          env->getClass(SP3Coordinate::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3Coordinate), "DUMMY", make_descriptor(t_SP3Coordinate::wrap_Object(*SP3Coordinate::DUMMY)));
        }

        static PyObject *t_SP3Coordinate_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SP3Coordinate::initializeClass, 1)))
            return NULL;
          return t_SP3Coordinate::wrap_Object(SP3Coordinate(((t_SP3Coordinate *) arg)->object.this$));
        }
        static PyObject *t_SP3Coordinate_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SP3Coordinate::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_SP3Coordinate_init_(t_SP3Coordinate *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a3((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a4((jobject) NULL);
          jdouble a5;
          jdouble a6;
          jdouble a7;
          jdouble a8;
          jboolean a9;
          jboolean a10;
          jboolean a11;
          jboolean a12;
          SP3Coordinate object((jobject) NULL);

          if (!parseArgs(args, "kkkkkDDDDZZZZ", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10, &a11, &a12))
          {
            INT_CALL(object = SP3Coordinate(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_SP3Coordinate_getClockAccuracy(t_SP3Coordinate *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getClockAccuracy());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SP3Coordinate_getClockCorrection(t_SP3Coordinate *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getClockCorrection());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SP3Coordinate_getClockRateAccuracy(t_SP3Coordinate *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getClockRateAccuracy());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SP3Coordinate_getClockRateChange(t_SP3Coordinate *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getClockRateChange());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SP3Coordinate_getPositionAccuracy(t_SP3Coordinate *self)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
          OBJ_CALL(result = self->object.getPositionAccuracy());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
        }

        static PyObject *t_SP3Coordinate_getVelocityAccuracy(t_SP3Coordinate *self)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
          OBJ_CALL(result = self->object.getVelocityAccuracy());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
        }

        static PyObject *t_SP3Coordinate_hasClockEvent(t_SP3Coordinate *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.hasClockEvent());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_SP3Coordinate_hasClockPrediction(t_SP3Coordinate *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.hasClockPrediction());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_SP3Coordinate_hasOrbitManeuverEvent(t_SP3Coordinate *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.hasOrbitManeuverEvent());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_SP3Coordinate_hasOrbitPrediction(t_SP3Coordinate *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.hasOrbitPrediction());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_SP3Coordinate_get__clockAccuracy(t_SP3Coordinate *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getClockAccuracy());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_SP3Coordinate_get__clockCorrection(t_SP3Coordinate *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getClockCorrection());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_SP3Coordinate_get__clockRateAccuracy(t_SP3Coordinate *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getClockRateAccuracy());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_SP3Coordinate_get__clockRateChange(t_SP3Coordinate *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getClockRateChange());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_SP3Coordinate_get__positionAccuracy(t_SP3Coordinate *self, void *data)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          OBJ_CALL(value = self->object.getPositionAccuracy());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
        }

        static PyObject *t_SP3Coordinate_get__velocityAccuracy(t_SP3Coordinate *self, void *data)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          OBJ_CALL(value = self->object.getVelocityAccuracy());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/atmosphere/SimpleExponentialAtmosphere.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/models/earth/atmosphere/Atmosphere.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/bodies/BodyShape.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace atmosphere {

          ::java::lang::Class *SimpleExponentialAtmosphere::class$ = NULL;
          jmethodID *SimpleExponentialAtmosphere::mids$ = NULL;
          bool SimpleExponentialAtmosphere::live$ = false;

          jclass SimpleExponentialAtmosphere::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/atmosphere/SimpleExponentialAtmosphere");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_91bcba8839b28255] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/BodyShape;DDD)V");
              mids$[mid_getDensity_58866e32a1c9318b] = env->getMethodID(cls, "getDensity", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/frames/Frame;)D");
              mids$[mid_getDensity_e9a4fc2340b58984] = env->getMethodID(cls, "getDensity", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/frames/Frame;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getFrame_2c51111cc6894ba1] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          SimpleExponentialAtmosphere::SimpleExponentialAtmosphere(const ::org::orekit::bodies::BodyShape & a0, jdouble a1, jdouble a2, jdouble a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_91bcba8839b28255, a0.this$, a1, a2, a3)) {}

          jdouble SimpleExponentialAtmosphere::getDensity(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::orekit::frames::Frame & a2) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getDensity_58866e32a1c9318b], a0.this$, a1.this$, a2.this$);
          }

          ::org::hipparchus::CalculusFieldElement SimpleExponentialAtmosphere::getDensity(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, const ::org::orekit::frames::Frame & a2) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getDensity_e9a4fc2340b58984], a0.this$, a1.this$, a2.this$));
          }

          ::org::orekit::frames::Frame SimpleExponentialAtmosphere::getFrame() const
          {
            return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_2c51111cc6894ba1]));
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
        namespace atmosphere {
          static PyObject *t_SimpleExponentialAtmosphere_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SimpleExponentialAtmosphere_instance_(PyTypeObject *type, PyObject *arg);
          static int t_SimpleExponentialAtmosphere_init_(t_SimpleExponentialAtmosphere *self, PyObject *args, PyObject *kwds);
          static PyObject *t_SimpleExponentialAtmosphere_getDensity(t_SimpleExponentialAtmosphere *self, PyObject *args);
          static PyObject *t_SimpleExponentialAtmosphere_getFrame(t_SimpleExponentialAtmosphere *self);
          static PyObject *t_SimpleExponentialAtmosphere_get__frame(t_SimpleExponentialAtmosphere *self, void *data);
          static PyGetSetDef t_SimpleExponentialAtmosphere__fields_[] = {
            DECLARE_GET_FIELD(t_SimpleExponentialAtmosphere, frame),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SimpleExponentialAtmosphere__methods_[] = {
            DECLARE_METHOD(t_SimpleExponentialAtmosphere, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SimpleExponentialAtmosphere, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SimpleExponentialAtmosphere, getDensity, METH_VARARGS),
            DECLARE_METHOD(t_SimpleExponentialAtmosphere, getFrame, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SimpleExponentialAtmosphere)[] = {
            { Py_tp_methods, t_SimpleExponentialAtmosphere__methods_ },
            { Py_tp_init, (void *) t_SimpleExponentialAtmosphere_init_ },
            { Py_tp_getset, t_SimpleExponentialAtmosphere__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SimpleExponentialAtmosphere)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(SimpleExponentialAtmosphere, t_SimpleExponentialAtmosphere, SimpleExponentialAtmosphere);

          void t_SimpleExponentialAtmosphere::install(PyObject *module)
          {
            installType(&PY_TYPE(SimpleExponentialAtmosphere), &PY_TYPE_DEF(SimpleExponentialAtmosphere), module, "SimpleExponentialAtmosphere", 0);
          }

          void t_SimpleExponentialAtmosphere::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleExponentialAtmosphere), "class_", make_descriptor(SimpleExponentialAtmosphere::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleExponentialAtmosphere), "wrapfn_", make_descriptor(t_SimpleExponentialAtmosphere::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleExponentialAtmosphere), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SimpleExponentialAtmosphere_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SimpleExponentialAtmosphere::initializeClass, 1)))
              return NULL;
            return t_SimpleExponentialAtmosphere::wrap_Object(SimpleExponentialAtmosphere(((t_SimpleExponentialAtmosphere *) arg)->object.this$));
          }
          static PyObject *t_SimpleExponentialAtmosphere_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SimpleExponentialAtmosphere::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_SimpleExponentialAtmosphere_init_(t_SimpleExponentialAtmosphere *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::bodies::BodyShape a0((jobject) NULL);
            jdouble a1;
            jdouble a2;
            jdouble a3;
            SimpleExponentialAtmosphere object((jobject) NULL);

            if (!parseArgs(args, "kDDD", ::org::orekit::bodies::BodyShape::initializeClass, &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = SimpleExponentialAtmosphere(a0, a1, a2, a3));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_SimpleExponentialAtmosphere_getDensity(t_SimpleExponentialAtmosphere *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
              {
                ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::frames::Frame a2((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KKk", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a2))
                {
                  OBJ_CALL(result = self->object.getDensity(a0, a1, a2));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
                ::org::orekit::frames::Frame a2((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "kkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.getDensity(a0, a1, a2));
                  return PyFloat_FromDouble((double) result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getDensity", args);
            return NULL;
          }

          static PyObject *t_SimpleExponentialAtmosphere_getFrame(t_SimpleExponentialAtmosphere *self)
          {
            ::org::orekit::frames::Frame result((jobject) NULL);
            OBJ_CALL(result = self->object.getFrame());
            return ::org::orekit::frames::t_Frame::wrap_Object(result);
          }

          static PyObject *t_SimpleExponentialAtmosphere_get__frame(t_SimpleExponentialAtmosphere *self, void *data)
          {
            ::org::orekit::frames::Frame value((jobject) NULL);
            OBJ_CALL(value = self->object.getFrame());
            return ::org::orekit::frames::t_Frame::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/util/Arrays.h"
#include "java/util/Spliterator$OfInt.h"
#include "java/util/Spliterator$OfDouble.h"
#include "java/util/Comparator.h"
#include "java/util/Spliterator.h"
#include "java/util/List.h"
#include "java/util/Spliterator$OfLong.h"
#include "java/lang/Class.h"
#include "java/util/stream/Stream.h"
#include "java/util/stream/DoubleStream.h"
#include "java/lang/String.h"
#include "java/lang/Comparable.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *Arrays::class$ = NULL;
    jmethodID *Arrays::mids$ = NULL;
    bool Arrays::live$ = false;

    jclass Arrays::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/Arrays");

        mids$ = new jmethodID[max_mid];
        mids$[mid_asList_e800446ce338cd30] = env->getStaticMethodID(cls, "asList", "([Ljava/lang/Object;)Ljava/util/List;");
        mids$[mid_binarySearch_8826a64d4f7933b4] = env->getStaticMethodID(cls, "binarySearch", "([BB)I");
        mids$[mid_binarySearch_840aa18798d2d0fb] = env->getStaticMethodID(cls, "binarySearch", "([CC)I");
        mids$[mid_binarySearch_da9b0125e67845c3] = env->getStaticMethodID(cls, "binarySearch", "([DD)I");
        mids$[mid_binarySearch_193208c89a2f8e03] = env->getStaticMethodID(cls, "binarySearch", "([FF)I");
        mids$[mid_binarySearch_9b6b5ac0e8dd7464] = env->getStaticMethodID(cls, "binarySearch", "([II)I");
        mids$[mid_binarySearch_dbabb6aec1d2c6dd] = env->getStaticMethodID(cls, "binarySearch", "([JJ)I");
        mids$[mid_binarySearch_8c1659d0698f20a3] = env->getStaticMethodID(cls, "binarySearch", "([Ljava/lang/Object;Ljava/lang/Object;)I");
        mids$[mid_binarySearch_8c344941b0207b39] = env->getStaticMethodID(cls, "binarySearch", "([SS)I");
        mids$[mid_binarySearch_cf86e8bd940f4db2] = env->getStaticMethodID(cls, "binarySearch", "([Ljava/lang/Object;Ljava/lang/Object;Ljava/util/Comparator;)I");
        mids$[mid_binarySearch_38ea0387b2137beb] = env->getStaticMethodID(cls, "binarySearch", "([BIIB)I");
        mids$[mid_binarySearch_165fcdb0c2a184ec] = env->getStaticMethodID(cls, "binarySearch", "([CIIC)I");
        mids$[mid_binarySearch_fce481e087b3e63a] = env->getStaticMethodID(cls, "binarySearch", "([DIID)I");
        mids$[mid_binarySearch_2c41b6ad25965df2] = env->getStaticMethodID(cls, "binarySearch", "([FIIF)I");
        mids$[mid_binarySearch_ddf1fbdff1b1abb3] = env->getStaticMethodID(cls, "binarySearch", "([IIII)I");
        mids$[mid_binarySearch_bb607a4f84848d13] = env->getStaticMethodID(cls, "binarySearch", "([JIIJ)I");
        mids$[mid_binarySearch_7c404dde48fe3115] = env->getStaticMethodID(cls, "binarySearch", "([Ljava/lang/Object;IILjava/lang/Object;)I");
        mids$[mid_binarySearch_56e0aa2b1b849eb5] = env->getStaticMethodID(cls, "binarySearch", "([SIIS)I");
        mids$[mid_binarySearch_28df2fd39db19266] = env->getStaticMethodID(cls, "binarySearch", "([Ljava/lang/Object;IILjava/lang/Object;Ljava/util/Comparator;)I");
        mids$[mid_compare_72b6c023c4adef42] = env->getStaticMethodID(cls, "compare", "([B[B)I");
        mids$[mid_compare_c005ee51dee835ea] = env->getStaticMethodID(cls, "compare", "([C[C)I");
        mids$[mid_compare_7e69791ee61bcc76] = env->getStaticMethodID(cls, "compare", "([D[D)I");
        mids$[mid_compare_d617f8f8922e84c1] = env->getStaticMethodID(cls, "compare", "([F[F)I");
        mids$[mid_compare_f95aa64a2259804a] = env->getStaticMethodID(cls, "compare", "([I[I)I");
        mids$[mid_compare_eeb06e42cd299736] = env->getStaticMethodID(cls, "compare", "([J[J)I");
        mids$[mid_compare_2e19feab5f7140de] = env->getStaticMethodID(cls, "compare", "([Ljava/lang/Comparable;[Ljava/lang/Comparable;)I");
        mids$[mid_compare_3e0ca18d533e0a4f] = env->getStaticMethodID(cls, "compare", "([S[S)I");
        mids$[mid_compare_ea5ab179056ac266] = env->getStaticMethodID(cls, "compare", "([Z[Z)I");
        mids$[mid_compare_2bb9774dc70eeed0] = env->getStaticMethodID(cls, "compare", "([Ljava/lang/Object;[Ljava/lang/Object;Ljava/util/Comparator;)I");
        mids$[mid_compare_6f57a02e3de68ea8] = env->getStaticMethodID(cls, "compare", "([BII[BII)I");
        mids$[mid_compare_745c5fa6920ca05b] = env->getStaticMethodID(cls, "compare", "([CII[CII)I");
        mids$[mid_compare_69ff11ea2a25556f] = env->getStaticMethodID(cls, "compare", "([DII[DII)I");
        mids$[mid_compare_0f67c874b33f924f] = env->getStaticMethodID(cls, "compare", "([FII[FII)I");
        mids$[mid_compare_5076f667ad4c15c9] = env->getStaticMethodID(cls, "compare", "([III[III)I");
        mids$[mid_compare_468df83a8d0baa97] = env->getStaticMethodID(cls, "compare", "([JII[JII)I");
        mids$[mid_compare_ebeec0c6897c9d04] = env->getStaticMethodID(cls, "compare", "([Ljava/lang/Comparable;II[Ljava/lang/Comparable;II)I");
        mids$[mid_compare_2ee56780dd674354] = env->getStaticMethodID(cls, "compare", "([SII[SII)I");
        mids$[mid_compare_9aac3703cb360621] = env->getStaticMethodID(cls, "compare", "([ZII[ZII)I");
        mids$[mid_compare_8c8020e98abdc1fe] = env->getStaticMethodID(cls, "compare", "([Ljava/lang/Object;II[Ljava/lang/Object;IILjava/util/Comparator;)I");
        mids$[mid_compareUnsigned_72b6c023c4adef42] = env->getStaticMethodID(cls, "compareUnsigned", "([B[B)I");
        mids$[mid_compareUnsigned_f95aa64a2259804a] = env->getStaticMethodID(cls, "compareUnsigned", "([I[I)I");
        mids$[mid_compareUnsigned_eeb06e42cd299736] = env->getStaticMethodID(cls, "compareUnsigned", "([J[J)I");
        mids$[mid_compareUnsigned_3e0ca18d533e0a4f] = env->getStaticMethodID(cls, "compareUnsigned", "([S[S)I");
        mids$[mid_compareUnsigned_6f57a02e3de68ea8] = env->getStaticMethodID(cls, "compareUnsigned", "([BII[BII)I");
        mids$[mid_compareUnsigned_5076f667ad4c15c9] = env->getStaticMethodID(cls, "compareUnsigned", "([III[III)I");
        mids$[mid_compareUnsigned_468df83a8d0baa97] = env->getStaticMethodID(cls, "compareUnsigned", "([JII[JII)I");
        mids$[mid_compareUnsigned_2ee56780dd674354] = env->getStaticMethodID(cls, "compareUnsigned", "([SII[SII)I");
        mids$[mid_copyOf_ea6851a0a3558ec4] = env->getStaticMethodID(cls, "copyOf", "([BI)[B");
        mids$[mid_copyOf_c60846d6fe229592] = env->getStaticMethodID(cls, "copyOf", "([CI)[C");
        mids$[mid_copyOf_fdbebc837979003b] = env->getStaticMethodID(cls, "copyOf", "([DI)[D");
        mids$[mid_copyOf_fcda3eaf0024c89d] = env->getStaticMethodID(cls, "copyOf", "([FI)[F");
        mids$[mid_copyOf_779b1b6dd44ceb08] = env->getStaticMethodID(cls, "copyOf", "([II)[I");
        mids$[mid_copyOf_9db791005dbe6856] = env->getStaticMethodID(cls, "copyOf", "([JI)[J");
        mids$[mid_copyOf_850715a83f350d92] = env->getStaticMethodID(cls, "copyOf", "([Ljava/lang/Object;I)[Ljava/lang/Object;");
        mids$[mid_copyOf_49f22624d460f6f6] = env->getStaticMethodID(cls, "copyOf", "([SI)[S");
        mids$[mid_copyOf_2ea7b38db2e02f67] = env->getStaticMethodID(cls, "copyOf", "([ZI)[Z");
        mids$[mid_copyOf_91b267a3846372ee] = env->getStaticMethodID(cls, "copyOf", "([Ljava/lang/Object;ILjava/lang/Class;)[Ljava/lang/Object;");
        mids$[mid_copyOfRange_c0c20b37071f4261] = env->getStaticMethodID(cls, "copyOfRange", "([BII)[B");
        mids$[mid_copyOfRange_2ba70fc252cf98b1] = env->getStaticMethodID(cls, "copyOfRange", "([CII)[C");
        mids$[mid_copyOfRange_4ab5393b410e04fc] = env->getStaticMethodID(cls, "copyOfRange", "([DII)[D");
        mids$[mid_copyOfRange_1b033e31d9b2e8c1] = env->getStaticMethodID(cls, "copyOfRange", "([FII)[F");
        mids$[mid_copyOfRange_a7a078e5da9aeb97] = env->getStaticMethodID(cls, "copyOfRange", "([III)[I");
        mids$[mid_copyOfRange_4bc3281a78f20a53] = env->getStaticMethodID(cls, "copyOfRange", "([JII)[J");
        mids$[mid_copyOfRange_bd35d76b7282fa0e] = env->getStaticMethodID(cls, "copyOfRange", "([Ljava/lang/Object;II)[Ljava/lang/Object;");
        mids$[mid_copyOfRange_5440825cfb17dbb7] = env->getStaticMethodID(cls, "copyOfRange", "([SII)[S");
        mids$[mid_copyOfRange_9f2d06efc7a5ff96] = env->getStaticMethodID(cls, "copyOfRange", "([ZII)[Z");
        mids$[mid_copyOfRange_4898f5c002a886f7] = env->getStaticMethodID(cls, "copyOfRange", "([Ljava/lang/Object;IILjava/lang/Class;)[Ljava/lang/Object;");
        mids$[mid_deepEquals_168b48c4c707ce32] = env->getStaticMethodID(cls, "deepEquals", "([Ljava/lang/Object;[Ljava/lang/Object;)Z");
        mids$[mid_deepHashCode_0051854591608e5f] = env->getStaticMethodID(cls, "deepHashCode", "([Ljava/lang/Object;)I");
        mids$[mid_deepToString_5d9b025c020bd4e2] = env->getStaticMethodID(cls, "deepToString", "([Ljava/lang/Object;)Ljava/lang/String;");
        mids$[mid_equals_647cf52483fdbbfb] = env->getStaticMethodID(cls, "equals", "([B[B)Z");
        mids$[mid_equals_f203c6163025f1a4] = env->getStaticMethodID(cls, "equals", "([C[C)Z");
        mids$[mid_equals_e686b66104c2bcdb] = env->getStaticMethodID(cls, "equals", "([D[D)Z");
        mids$[mid_equals_ae971d88c358a487] = env->getStaticMethodID(cls, "equals", "([F[F)Z");
        mids$[mid_equals_a3d1d51d22e4faac] = env->getStaticMethodID(cls, "equals", "([I[I)Z");
        mids$[mid_equals_00519a977ecc68a6] = env->getStaticMethodID(cls, "equals", "([J[J)Z");
        mids$[mid_equals_168b48c4c707ce32] = env->getStaticMethodID(cls, "equals", "([Ljava/lang/Object;[Ljava/lang/Object;)Z");
        mids$[mid_equals_264d1cfb985cead2] = env->getStaticMethodID(cls, "equals", "([S[S)Z");
        mids$[mid_equals_a4d0a8c0f2dd71a3] = env->getStaticMethodID(cls, "equals", "([Z[Z)Z");
        mids$[mid_equals_d3b8c63008199561] = env->getStaticMethodID(cls, "equals", "([Ljava/lang/Object;[Ljava/lang/Object;Ljava/util/Comparator;)Z");
        mids$[mid_equals_e4d55af07285c711] = env->getStaticMethodID(cls, "equals", "([BII[BII)Z");
        mids$[mid_equals_44cd765cf0743836] = env->getStaticMethodID(cls, "equals", "([CII[CII)Z");
        mids$[mid_equals_d97f40c6ed9dc5ef] = env->getStaticMethodID(cls, "equals", "([DII[DII)Z");
        mids$[mid_equals_ccda7378396bd1a0] = env->getStaticMethodID(cls, "equals", "([FII[FII)Z");
        mids$[mid_equals_b69aa21af786478b] = env->getStaticMethodID(cls, "equals", "([III[III)Z");
        mids$[mid_equals_7b15564b8663be44] = env->getStaticMethodID(cls, "equals", "([JII[JII)Z");
        mids$[mid_equals_a1d158b49a7a9588] = env->getStaticMethodID(cls, "equals", "([Ljava/lang/Object;II[Ljava/lang/Object;II)Z");
        mids$[mid_equals_9f805b88d0c1fe90] = env->getStaticMethodID(cls, "equals", "([SII[SII)Z");
        mids$[mid_equals_69ddd0a84afda0f3] = env->getStaticMethodID(cls, "equals", "([ZII[ZII)Z");
        mids$[mid_equals_831c29a9cbaf363d] = env->getStaticMethodID(cls, "equals", "([Ljava/lang/Object;II[Ljava/lang/Object;IILjava/util/Comparator;)Z");
        mids$[mid_fill_4243676c5ff6b6bb] = env->getStaticMethodID(cls, "fill", "([ZZ)V");
        mids$[mid_fill_8f35067e8ea31e52] = env->getStaticMethodID(cls, "fill", "([BB)V");
        mids$[mid_fill_67067468446516fe] = env->getStaticMethodID(cls, "fill", "([CC)V");
        mids$[mid_fill_334f245ec9cee46b] = env->getStaticMethodID(cls, "fill", "([DD)V");
        mids$[mid_fill_b6aa2f48bc0976bb] = env->getStaticMethodID(cls, "fill", "([FF)V");
        mids$[mid_fill_bb84519dea62b6cb] = env->getStaticMethodID(cls, "fill", "([II)V");
        mids$[mid_fill_f633c6efbb3d3386] = env->getStaticMethodID(cls, "fill", "([Ljava/lang/Object;Ljava/lang/Object;)V");
        mids$[mid_fill_d77b9656779c558d] = env->getStaticMethodID(cls, "fill", "([JJ)V");
        mids$[mid_fill_f877a27fd99c2dc8] = env->getStaticMethodID(cls, "fill", "([SS)V");
        mids$[mid_fill_6c5a648604ee6c48] = env->getStaticMethodID(cls, "fill", "([ZIIZ)V");
        mids$[mid_fill_dfa0581930a374f0] = env->getStaticMethodID(cls, "fill", "([BIIB)V");
        mids$[mid_fill_e7f365a3da5f81d0] = env->getStaticMethodID(cls, "fill", "([CIIC)V");
        mids$[mid_fill_ce68cc77c7b35f1a] = env->getStaticMethodID(cls, "fill", "([DIID)V");
        mids$[mid_fill_4ea37a49d8303ab9] = env->getStaticMethodID(cls, "fill", "([FIIF)V");
        mids$[mid_fill_5218ef3dd56e76c0] = env->getStaticMethodID(cls, "fill", "([IIII)V");
        mids$[mid_fill_d4a9414876c6e104] = env->getStaticMethodID(cls, "fill", "([Ljava/lang/Object;IILjava/lang/Object;)V");
        mids$[mid_fill_6dba15581df9e961] = env->getStaticMethodID(cls, "fill", "([JIIJ)V");
        mids$[mid_fill_81c122234befdd96] = env->getStaticMethodID(cls, "fill", "([SIIS)V");
        mids$[mid_hashCode_53324f422c2c7f64] = env->getStaticMethodID(cls, "hashCode", "([B)I");
        mids$[mid_hashCode_cedc4c6898e22fb4] = env->getStaticMethodID(cls, "hashCode", "([C)I");
        mids$[mid_hashCode_f4eedf29a683816e] = env->getStaticMethodID(cls, "hashCode", "([D)I");
        mids$[mid_hashCode_3ad30757a4753630] = env->getStaticMethodID(cls, "hashCode", "([F)I");
        mids$[mid_hashCode_d57a86117ebc55bd] = env->getStaticMethodID(cls, "hashCode", "([I)I");
        mids$[mid_hashCode_8f818692fd2bf53f] = env->getStaticMethodID(cls, "hashCode", "([J)I");
        mids$[mid_hashCode_0051854591608e5f] = env->getStaticMethodID(cls, "hashCode", "([Ljava/lang/Object;)I");
        mids$[mid_hashCode_ffad442d43f3186b] = env->getStaticMethodID(cls, "hashCode", "([S)I");
        mids$[mid_hashCode_6ed9df6bafe24c89] = env->getStaticMethodID(cls, "hashCode", "([Z)I");
        mids$[mid_mismatch_72b6c023c4adef42] = env->getStaticMethodID(cls, "mismatch", "([B[B)I");
        mids$[mid_mismatch_c005ee51dee835ea] = env->getStaticMethodID(cls, "mismatch", "([C[C)I");
        mids$[mid_mismatch_7e69791ee61bcc76] = env->getStaticMethodID(cls, "mismatch", "([D[D)I");
        mids$[mid_mismatch_d617f8f8922e84c1] = env->getStaticMethodID(cls, "mismatch", "([F[F)I");
        mids$[mid_mismatch_f95aa64a2259804a] = env->getStaticMethodID(cls, "mismatch", "([I[I)I");
        mids$[mid_mismatch_eeb06e42cd299736] = env->getStaticMethodID(cls, "mismatch", "([J[J)I");
        mids$[mid_mismatch_ff3dc61ebcc565b1] = env->getStaticMethodID(cls, "mismatch", "([Ljava/lang/Object;[Ljava/lang/Object;)I");
        mids$[mid_mismatch_3e0ca18d533e0a4f] = env->getStaticMethodID(cls, "mismatch", "([S[S)I");
        mids$[mid_mismatch_ea5ab179056ac266] = env->getStaticMethodID(cls, "mismatch", "([Z[Z)I");
        mids$[mid_mismatch_2bb9774dc70eeed0] = env->getStaticMethodID(cls, "mismatch", "([Ljava/lang/Object;[Ljava/lang/Object;Ljava/util/Comparator;)I");
        mids$[mid_mismatch_6f57a02e3de68ea8] = env->getStaticMethodID(cls, "mismatch", "([BII[BII)I");
        mids$[mid_mismatch_745c5fa6920ca05b] = env->getStaticMethodID(cls, "mismatch", "([CII[CII)I");
        mids$[mid_mismatch_69ff11ea2a25556f] = env->getStaticMethodID(cls, "mismatch", "([DII[DII)I");
        mids$[mid_mismatch_0f67c874b33f924f] = env->getStaticMethodID(cls, "mismatch", "([FII[FII)I");
        mids$[mid_mismatch_5076f667ad4c15c9] = env->getStaticMethodID(cls, "mismatch", "([III[III)I");
        mids$[mid_mismatch_468df83a8d0baa97] = env->getStaticMethodID(cls, "mismatch", "([JII[JII)I");
        mids$[mid_mismatch_d17e2bacabbfd032] = env->getStaticMethodID(cls, "mismatch", "([Ljava/lang/Object;II[Ljava/lang/Object;II)I");
        mids$[mid_mismatch_2ee56780dd674354] = env->getStaticMethodID(cls, "mismatch", "([SII[SII)I");
        mids$[mid_mismatch_9aac3703cb360621] = env->getStaticMethodID(cls, "mismatch", "([ZII[ZII)I");
        mids$[mid_mismatch_8c8020e98abdc1fe] = env->getStaticMethodID(cls, "mismatch", "([Ljava/lang/Object;II[Ljava/lang/Object;IILjava/util/Comparator;)I");
        mids$[mid_parallelSort_459771b03534868e] = env->getStaticMethodID(cls, "parallelSort", "([B)V");
        mids$[mid_parallelSort_dd3f254991df5d48] = env->getStaticMethodID(cls, "parallelSort", "([C)V");
        mids$[mid_parallelSort_ab69da052b88f50c] = env->getStaticMethodID(cls, "parallelSort", "([D)V");
        mids$[mid_parallelSort_e6f9f198cf241cf1] = env->getStaticMethodID(cls, "parallelSort", "([F)V");
        mids$[mid_parallelSort_86a2769cb881d388] = env->getStaticMethodID(cls, "parallelSort", "([I)V");
        mids$[mid_parallelSort_17fd280b39a6ae4b] = env->getStaticMethodID(cls, "parallelSort", "([J)V");
        mids$[mid_parallelSort_68d8ddb3d76fd9fe] = env->getStaticMethodID(cls, "parallelSort", "([Ljava/lang/Comparable;)V");
        mids$[mid_parallelSort_7bcc20f47157c2e9] = env->getStaticMethodID(cls, "parallelSort", "([S)V");
        mids$[mid_parallelSort_d38aeeedac9eb92a] = env->getStaticMethodID(cls, "parallelSort", "([Ljava/lang/Object;Ljava/util/Comparator;)V");
        mids$[mid_parallelSort_a9fddc59b07ce512] = env->getStaticMethodID(cls, "parallelSort", "([BII)V");
        mids$[mid_parallelSort_d23ba6c655e17478] = env->getStaticMethodID(cls, "parallelSort", "([CII)V");
        mids$[mid_parallelSort_4484ad1f15b73c7a] = env->getStaticMethodID(cls, "parallelSort", "([DII)V");
        mids$[mid_parallelSort_6a110138522415ed] = env->getStaticMethodID(cls, "parallelSort", "([FII)V");
        mids$[mid_parallelSort_a811d6c26b223197] = env->getStaticMethodID(cls, "parallelSort", "([III)V");
        mids$[mid_parallelSort_2d042ca5a5866231] = env->getStaticMethodID(cls, "parallelSort", "([JII)V");
        mids$[mid_parallelSort_d2110105a458b1d3] = env->getStaticMethodID(cls, "parallelSort", "([Ljava/lang/Comparable;II)V");
        mids$[mid_parallelSort_274e52486ae08586] = env->getStaticMethodID(cls, "parallelSort", "([SII)V");
        mids$[mid_parallelSort_d57c7b6662e4be38] = env->getStaticMethodID(cls, "parallelSort", "([Ljava/lang/Object;IILjava/util/Comparator;)V");
        mids$[mid_sort_459771b03534868e] = env->getStaticMethodID(cls, "sort", "([B)V");
        mids$[mid_sort_dd3f254991df5d48] = env->getStaticMethodID(cls, "sort", "([C)V");
        mids$[mid_sort_ab69da052b88f50c] = env->getStaticMethodID(cls, "sort", "([D)V");
        mids$[mid_sort_e6f9f198cf241cf1] = env->getStaticMethodID(cls, "sort", "([F)V");
        mids$[mid_sort_86a2769cb881d388] = env->getStaticMethodID(cls, "sort", "([I)V");
        mids$[mid_sort_17fd280b39a6ae4b] = env->getStaticMethodID(cls, "sort", "([J)V");
        mids$[mid_sort_55e8d43de8149236] = env->getStaticMethodID(cls, "sort", "([Ljava/lang/Object;)V");
        mids$[mid_sort_7bcc20f47157c2e9] = env->getStaticMethodID(cls, "sort", "([S)V");
        mids$[mid_sort_d38aeeedac9eb92a] = env->getStaticMethodID(cls, "sort", "([Ljava/lang/Object;Ljava/util/Comparator;)V");
        mids$[mid_sort_a9fddc59b07ce512] = env->getStaticMethodID(cls, "sort", "([BII)V");
        mids$[mid_sort_d23ba6c655e17478] = env->getStaticMethodID(cls, "sort", "([CII)V");
        mids$[mid_sort_4484ad1f15b73c7a] = env->getStaticMethodID(cls, "sort", "([DII)V");
        mids$[mid_sort_6a110138522415ed] = env->getStaticMethodID(cls, "sort", "([FII)V");
        mids$[mid_sort_a811d6c26b223197] = env->getStaticMethodID(cls, "sort", "([III)V");
        mids$[mid_sort_2d042ca5a5866231] = env->getStaticMethodID(cls, "sort", "([JII)V");
        mids$[mid_sort_ebe0a7cade3ee163] = env->getStaticMethodID(cls, "sort", "([Ljava/lang/Object;II)V");
        mids$[mid_sort_274e52486ae08586] = env->getStaticMethodID(cls, "sort", "([SII)V");
        mids$[mid_sort_d57c7b6662e4be38] = env->getStaticMethodID(cls, "sort", "([Ljava/lang/Object;IILjava/util/Comparator;)V");
        mids$[mid_spliterator_c0da06547ed3e1b6] = env->getStaticMethodID(cls, "spliterator", "([D)Ljava/util/Spliterator$OfDouble;");
        mids$[mid_spliterator_ef25bd37a5892aa9] = env->getStaticMethodID(cls, "spliterator", "([I)Ljava/util/Spliterator$OfInt;");
        mids$[mid_spliterator_72a6d1fb4aceda56] = env->getStaticMethodID(cls, "spliterator", "([J)Ljava/util/Spliterator$OfLong;");
        mids$[mid_spliterator_b620f6e2bc03dda6] = env->getStaticMethodID(cls, "spliterator", "([Ljava/lang/Object;)Ljava/util/Spliterator;");
        mids$[mid_spliterator_e4549ed6bbbc8984] = env->getStaticMethodID(cls, "spliterator", "([DII)Ljava/util/Spliterator$OfDouble;");
        mids$[mid_spliterator_bd95d283c5fdd8d1] = env->getStaticMethodID(cls, "spliterator", "([III)Ljava/util/Spliterator$OfInt;");
        mids$[mid_spliterator_fa8dab4710ea0f01] = env->getStaticMethodID(cls, "spliterator", "([JII)Ljava/util/Spliterator$OfLong;");
        mids$[mid_spliterator_ae44e314b15baf08] = env->getStaticMethodID(cls, "spliterator", "([Ljava/lang/Object;II)Ljava/util/Spliterator;");
        mids$[mid_stream_969b847f93a58e14] = env->getStaticMethodID(cls, "stream", "([D)Ljava/util/stream/DoubleStream;");
        mids$[mid_stream_f33e55a5742a331d] = env->getStaticMethodID(cls, "stream", "([Ljava/lang/Object;)Ljava/util/stream/Stream;");
        mids$[mid_stream_b82eab6a9b6c7505] = env->getStaticMethodID(cls, "stream", "([DII)Ljava/util/stream/DoubleStream;");
        mids$[mid_stream_5aade0d2cc81a461] = env->getStaticMethodID(cls, "stream", "([Ljava/lang/Object;II)Ljava/util/stream/Stream;");
        mids$[mid_toString_69e6a7d6acbf30b1] = env->getStaticMethodID(cls, "toString", "([B)Ljava/lang/String;");
        mids$[mid_toString_9a53c61542f295a1] = env->getStaticMethodID(cls, "toString", "([C)Ljava/lang/String;");
        mids$[mid_toString_183ce039f033866f] = env->getStaticMethodID(cls, "toString", "([D)Ljava/lang/String;");
        mids$[mid_toString_59ce57b0e0d1ffdc] = env->getStaticMethodID(cls, "toString", "([F)Ljava/lang/String;");
        mids$[mid_toString_e06025bc23ba70af] = env->getStaticMethodID(cls, "toString", "([I)Ljava/lang/String;");
        mids$[mid_toString_63dc073785b880ee] = env->getStaticMethodID(cls, "toString", "([J)Ljava/lang/String;");
        mids$[mid_toString_5d9b025c020bd4e2] = env->getStaticMethodID(cls, "toString", "([Ljava/lang/Object;)Ljava/lang/String;");
        mids$[mid_toString_dc71f0c11b947401] = env->getStaticMethodID(cls, "toString", "([S)Ljava/lang/String;");
        mids$[mid_toString_df599a3b7a997477] = env->getStaticMethodID(cls, "toString", "([Z)Ljava/lang/String;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ::java::util::List Arrays::asList(const JArray< ::java::lang::Object > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::List(env->callStaticObjectMethod(cls, mids$[mid_asList_e800446ce338cd30], a0.this$));
    }

    jint Arrays::binarySearch(const JArray< jbyte > & a0, jbyte a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_binarySearch_8826a64d4f7933b4], a0.this$, a1);
    }

    jint Arrays::binarySearch(const JArray< jchar > & a0, jchar a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_binarySearch_840aa18798d2d0fb], a0.this$, a1);
    }

    jint Arrays::binarySearch(const JArray< jdouble > & a0, jdouble a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_binarySearch_da9b0125e67845c3], a0.this$, a1);
    }

    jint Arrays::binarySearch(const JArray< jfloat > & a0, jfloat a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_binarySearch_193208c89a2f8e03], a0.this$, a1);
    }

    jint Arrays::binarySearch(const JArray< jint > & a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_binarySearch_9b6b5ac0e8dd7464], a0.this$, a1);
    }

    jint Arrays::binarySearch(const JArray< jlong > & a0, jlong a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_binarySearch_dbabb6aec1d2c6dd], a0.this$, a1);
    }

    jint Arrays::binarySearch(const JArray< ::java::lang::Object > & a0, const ::java::lang::Object & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_binarySearch_8c1659d0698f20a3], a0.this$, a1.this$);
    }

    jint Arrays::binarySearch(const JArray< jshort > & a0, jshort a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_binarySearch_8c344941b0207b39], a0.this$, a1);
    }

    jint Arrays::binarySearch(const JArray< ::java::lang::Object > & a0, const ::java::lang::Object & a1, const ::java::util::Comparator & a2)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_binarySearch_cf86e8bd940f4db2], a0.this$, a1.this$, a2.this$);
    }

    jint Arrays::binarySearch(const JArray< jbyte > & a0, jint a1, jint a2, jbyte a3)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_binarySearch_38ea0387b2137beb], a0.this$, a1, a2, a3);
    }

    jint Arrays::binarySearch(const JArray< jchar > & a0, jint a1, jint a2, jchar a3)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_binarySearch_165fcdb0c2a184ec], a0.this$, a1, a2, a3);
    }

    jint Arrays::binarySearch(const JArray< jdouble > & a0, jint a1, jint a2, jdouble a3)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_binarySearch_fce481e087b3e63a], a0.this$, a1, a2, a3);
    }

    jint Arrays::binarySearch(const JArray< jfloat > & a0, jint a1, jint a2, jfloat a3)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_binarySearch_2c41b6ad25965df2], a0.this$, a1, a2, a3);
    }

    jint Arrays::binarySearch(const JArray< jint > & a0, jint a1, jint a2, jint a3)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_binarySearch_ddf1fbdff1b1abb3], a0.this$, a1, a2, a3);
    }

    jint Arrays::binarySearch(const JArray< jlong > & a0, jint a1, jint a2, jlong a3)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_binarySearch_bb607a4f84848d13], a0.this$, a1, a2, a3);
    }

    jint Arrays::binarySearch(const JArray< ::java::lang::Object > & a0, jint a1, jint a2, const ::java::lang::Object & a3)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_binarySearch_7c404dde48fe3115], a0.this$, a1, a2, a3.this$);
    }

    jint Arrays::binarySearch(const JArray< jshort > & a0, jint a1, jint a2, jshort a3)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_binarySearch_56e0aa2b1b849eb5], a0.this$, a1, a2, a3);
    }

    jint Arrays::binarySearch(const JArray< ::java::lang::Object > & a0, jint a1, jint a2, const ::java::lang::Object & a3, const ::java::util::Comparator & a4)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_binarySearch_28df2fd39db19266], a0.this$, a1, a2, a3.this$, a4.this$);
    }

    jint Arrays::compare(const JArray< jbyte > & a0, const JArray< jbyte > & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compare_72b6c023c4adef42], a0.this$, a1.this$);
    }

    jint Arrays::compare(const JArray< jchar > & a0, const JArray< jchar > & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compare_c005ee51dee835ea], a0.this$, a1.this$);
    }

    jint Arrays::compare(const JArray< jdouble > & a0, const JArray< jdouble > & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compare_7e69791ee61bcc76], a0.this$, a1.this$);
    }

    jint Arrays::compare(const JArray< jfloat > & a0, const JArray< jfloat > & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compare_d617f8f8922e84c1], a0.this$, a1.this$);
    }

    jint Arrays::compare(const JArray< jint > & a0, const JArray< jint > & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compare_f95aa64a2259804a], a0.this$, a1.this$);
    }

    jint Arrays::compare(const JArray< jlong > & a0, const JArray< jlong > & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compare_eeb06e42cd299736], a0.this$, a1.this$);
    }

    jint Arrays::compare(const JArray< ::java::lang::Comparable > & a0, const JArray< ::java::lang::Comparable > & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compare_2e19feab5f7140de], a0.this$, a1.this$);
    }

    jint Arrays::compare(const JArray< jshort > & a0, const JArray< jshort > & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compare_3e0ca18d533e0a4f], a0.this$, a1.this$);
    }

    jint Arrays::compare(const JArray< jboolean > & a0, const JArray< jboolean > & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compare_ea5ab179056ac266], a0.this$, a1.this$);
    }

    jint Arrays::compare(const JArray< ::java::lang::Object > & a0, const JArray< ::java::lang::Object > & a1, const ::java::util::Comparator & a2)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compare_2bb9774dc70eeed0], a0.this$, a1.this$, a2.this$);
    }

    jint Arrays::compare(const JArray< jbyte > & a0, jint a1, jint a2, const JArray< jbyte > & a3, jint a4, jint a5)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compare_6f57a02e3de68ea8], a0.this$, a1, a2, a3.this$, a4, a5);
    }

    jint Arrays::compare(const JArray< jchar > & a0, jint a1, jint a2, const JArray< jchar > & a3, jint a4, jint a5)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compare_745c5fa6920ca05b], a0.this$, a1, a2, a3.this$, a4, a5);
    }

    jint Arrays::compare(const JArray< jdouble > & a0, jint a1, jint a2, const JArray< jdouble > & a3, jint a4, jint a5)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compare_69ff11ea2a25556f], a0.this$, a1, a2, a3.this$, a4, a5);
    }

    jint Arrays::compare(const JArray< jfloat > & a0, jint a1, jint a2, const JArray< jfloat > & a3, jint a4, jint a5)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compare_0f67c874b33f924f], a0.this$, a1, a2, a3.this$, a4, a5);
    }

    jint Arrays::compare(const JArray< jint > & a0, jint a1, jint a2, const JArray< jint > & a3, jint a4, jint a5)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compare_5076f667ad4c15c9], a0.this$, a1, a2, a3.this$, a4, a5);
    }

    jint Arrays::compare(const JArray< jlong > & a0, jint a1, jint a2, const JArray< jlong > & a3, jint a4, jint a5)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compare_468df83a8d0baa97], a0.this$, a1, a2, a3.this$, a4, a5);
    }

    jint Arrays::compare(const JArray< ::java::lang::Comparable > & a0, jint a1, jint a2, const JArray< ::java::lang::Comparable > & a3, jint a4, jint a5)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compare_ebeec0c6897c9d04], a0.this$, a1, a2, a3.this$, a4, a5);
    }

    jint Arrays::compare(const JArray< jshort > & a0, jint a1, jint a2, const JArray< jshort > & a3, jint a4, jint a5)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compare_2ee56780dd674354], a0.this$, a1, a2, a3.this$, a4, a5);
    }

    jint Arrays::compare(const JArray< jboolean > & a0, jint a1, jint a2, const JArray< jboolean > & a3, jint a4, jint a5)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compare_9aac3703cb360621], a0.this$, a1, a2, a3.this$, a4, a5);
    }

    jint Arrays::compare(const JArray< ::java::lang::Object > & a0, jint a1, jint a2, const JArray< ::java::lang::Object > & a3, jint a4, jint a5, const ::java::util::Comparator & a6)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compare_8c8020e98abdc1fe], a0.this$, a1, a2, a3.this$, a4, a5, a6.this$);
    }

    jint Arrays::compareUnsigned(const JArray< jbyte > & a0, const JArray< jbyte > & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compareUnsigned_72b6c023c4adef42], a0.this$, a1.this$);
    }

    jint Arrays::compareUnsigned(const JArray< jint > & a0, const JArray< jint > & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compareUnsigned_f95aa64a2259804a], a0.this$, a1.this$);
    }

    jint Arrays::compareUnsigned(const JArray< jlong > & a0, const JArray< jlong > & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compareUnsigned_eeb06e42cd299736], a0.this$, a1.this$);
    }

    jint Arrays::compareUnsigned(const JArray< jshort > & a0, const JArray< jshort > & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compareUnsigned_3e0ca18d533e0a4f], a0.this$, a1.this$);
    }

    jint Arrays::compareUnsigned(const JArray< jbyte > & a0, jint a1, jint a2, const JArray< jbyte > & a3, jint a4, jint a5)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compareUnsigned_6f57a02e3de68ea8], a0.this$, a1, a2, a3.this$, a4, a5);
    }

    jint Arrays::compareUnsigned(const JArray< jint > & a0, jint a1, jint a2, const JArray< jint > & a3, jint a4, jint a5)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compareUnsigned_5076f667ad4c15c9], a0.this$, a1, a2, a3.this$, a4, a5);
    }

    jint Arrays::compareUnsigned(const JArray< jlong > & a0, jint a1, jint a2, const JArray< jlong > & a3, jint a4, jint a5)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compareUnsigned_468df83a8d0baa97], a0.this$, a1, a2, a3.this$, a4, a5);
    }

    jint Arrays::compareUnsigned(const JArray< jshort > & a0, jint a1, jint a2, const JArray< jshort > & a3, jint a4, jint a5)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compareUnsigned_2ee56780dd674354], a0.this$, a1, a2, a3.this$, a4, a5);
    }

    JArray< jbyte > Arrays::copyOf(const JArray< jbyte > & a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< jbyte >(env->callStaticObjectMethod(cls, mids$[mid_copyOf_ea6851a0a3558ec4], a0.this$, a1));
    }

    JArray< jchar > Arrays::copyOf(const JArray< jchar > & a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< jchar >(env->callStaticObjectMethod(cls, mids$[mid_copyOf_c60846d6fe229592], a0.this$, a1));
    }

    JArray< jdouble > Arrays::copyOf(const JArray< jdouble > & a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< jdouble >(env->callStaticObjectMethod(cls, mids$[mid_copyOf_fdbebc837979003b], a0.this$, a1));
    }

    JArray< jfloat > Arrays::copyOf(const JArray< jfloat > & a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< jfloat >(env->callStaticObjectMethod(cls, mids$[mid_copyOf_fcda3eaf0024c89d], a0.this$, a1));
    }

    JArray< jint > Arrays::copyOf(const JArray< jint > & a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< jint >(env->callStaticObjectMethod(cls, mids$[mid_copyOf_779b1b6dd44ceb08], a0.this$, a1));
    }

    JArray< jlong > Arrays::copyOf(const JArray< jlong > & a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< jlong >(env->callStaticObjectMethod(cls, mids$[mid_copyOf_9db791005dbe6856], a0.this$, a1));
    }

    JArray< ::java::lang::Object > Arrays::copyOf(const JArray< ::java::lang::Object > & a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< ::java::lang::Object >(env->callStaticObjectMethod(cls, mids$[mid_copyOf_850715a83f350d92], a0.this$, a1));
    }

    JArray< jshort > Arrays::copyOf(const JArray< jshort > & a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< jshort >(env->callStaticObjectMethod(cls, mids$[mid_copyOf_49f22624d460f6f6], a0.this$, a1));
    }

    JArray< jboolean > Arrays::copyOf(const JArray< jboolean > & a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< jboolean >(env->callStaticObjectMethod(cls, mids$[mid_copyOf_2ea7b38db2e02f67], a0.this$, a1));
    }

    JArray< ::java::lang::Object > Arrays::copyOf(const JArray< ::java::lang::Object > & a0, jint a1, const ::java::lang::Class & a2)
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< ::java::lang::Object >(env->callStaticObjectMethod(cls, mids$[mid_copyOf_91b267a3846372ee], a0.this$, a1, a2.this$));
    }

    JArray< jbyte > Arrays::copyOfRange(const JArray< jbyte > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< jbyte >(env->callStaticObjectMethod(cls, mids$[mid_copyOfRange_c0c20b37071f4261], a0.this$, a1, a2));
    }

    JArray< jchar > Arrays::copyOfRange(const JArray< jchar > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< jchar >(env->callStaticObjectMethod(cls, mids$[mid_copyOfRange_2ba70fc252cf98b1], a0.this$, a1, a2));
    }

    JArray< jdouble > Arrays::copyOfRange(const JArray< jdouble > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< jdouble >(env->callStaticObjectMethod(cls, mids$[mid_copyOfRange_4ab5393b410e04fc], a0.this$, a1, a2));
    }

    JArray< jfloat > Arrays::copyOfRange(const JArray< jfloat > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< jfloat >(env->callStaticObjectMethod(cls, mids$[mid_copyOfRange_1b033e31d9b2e8c1], a0.this$, a1, a2));
    }

    JArray< jint > Arrays::copyOfRange(const JArray< jint > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< jint >(env->callStaticObjectMethod(cls, mids$[mid_copyOfRange_a7a078e5da9aeb97], a0.this$, a1, a2));
    }

    JArray< jlong > Arrays::copyOfRange(const JArray< jlong > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< jlong >(env->callStaticObjectMethod(cls, mids$[mid_copyOfRange_4bc3281a78f20a53], a0.this$, a1, a2));
    }

    JArray< ::java::lang::Object > Arrays::copyOfRange(const JArray< ::java::lang::Object > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< ::java::lang::Object >(env->callStaticObjectMethod(cls, mids$[mid_copyOfRange_bd35d76b7282fa0e], a0.this$, a1, a2));
    }

    JArray< jshort > Arrays::copyOfRange(const JArray< jshort > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< jshort >(env->callStaticObjectMethod(cls, mids$[mid_copyOfRange_5440825cfb17dbb7], a0.this$, a1, a2));
    }

    JArray< jboolean > Arrays::copyOfRange(const JArray< jboolean > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< jboolean >(env->callStaticObjectMethod(cls, mids$[mid_copyOfRange_9f2d06efc7a5ff96], a0.this$, a1, a2));
    }

    JArray< ::java::lang::Object > Arrays::copyOfRange(const JArray< ::java::lang::Object > & a0, jint a1, jint a2, const ::java::lang::Class & a3)
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< ::java::lang::Object >(env->callStaticObjectMethod(cls, mids$[mid_copyOfRange_4898f5c002a886f7], a0.this$, a1, a2, a3.this$));
    }

    jboolean Arrays::deepEquals(const JArray< ::java::lang::Object > & a0, const JArray< ::java::lang::Object > & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_deepEquals_168b48c4c707ce32], a0.this$, a1.this$);
    }

    jint Arrays::deepHashCode(const JArray< ::java::lang::Object > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_deepHashCode_0051854591608e5f], a0.this$);
    }

    ::java::lang::String Arrays::deepToString(const JArray< ::java::lang::Object > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_deepToString_5d9b025c020bd4e2], a0.this$));
    }

    jboolean Arrays::equals(const JArray< jbyte > & a0, const JArray< jbyte > & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_equals_647cf52483fdbbfb], a0.this$, a1.this$);
    }

    jboolean Arrays::equals(const JArray< jchar > & a0, const JArray< jchar > & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_equals_f203c6163025f1a4], a0.this$, a1.this$);
    }

    jboolean Arrays::equals(const JArray< jdouble > & a0, const JArray< jdouble > & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_equals_e686b66104c2bcdb], a0.this$, a1.this$);
    }

    jboolean Arrays::equals(const JArray< jfloat > & a0, const JArray< jfloat > & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_equals_ae971d88c358a487], a0.this$, a1.this$);
    }

    jboolean Arrays::equals(const JArray< jint > & a0, const JArray< jint > & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_equals_a3d1d51d22e4faac], a0.this$, a1.this$);
    }

    jboolean Arrays::equals(const JArray< jlong > & a0, const JArray< jlong > & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_equals_00519a977ecc68a6], a0.this$, a1.this$);
    }

    jboolean Arrays::equals(const JArray< ::java::lang::Object > & a0, const JArray< ::java::lang::Object > & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_equals_168b48c4c707ce32], a0.this$, a1.this$);
    }

    jboolean Arrays::equals(const JArray< jshort > & a0, const JArray< jshort > & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_equals_264d1cfb985cead2], a0.this$, a1.this$);
    }

    jboolean Arrays::equals(const JArray< jboolean > & a0, const JArray< jboolean > & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_equals_a4d0a8c0f2dd71a3], a0.this$, a1.this$);
    }

    jboolean Arrays::equals(const JArray< ::java::lang::Object > & a0, const JArray< ::java::lang::Object > & a1, const ::java::util::Comparator & a2)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_equals_d3b8c63008199561], a0.this$, a1.this$, a2.this$);
    }

    jboolean Arrays::equals(const JArray< jbyte > & a0, jint a1, jint a2, const JArray< jbyte > & a3, jint a4, jint a5)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_equals_e4d55af07285c711], a0.this$, a1, a2, a3.this$, a4, a5);
    }

    jboolean Arrays::equals(const JArray< jchar > & a0, jint a1, jint a2, const JArray< jchar > & a3, jint a4, jint a5)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_equals_44cd765cf0743836], a0.this$, a1, a2, a3.this$, a4, a5);
    }

    jboolean Arrays::equals(const JArray< jdouble > & a0, jint a1, jint a2, const JArray< jdouble > & a3, jint a4, jint a5)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_equals_d97f40c6ed9dc5ef], a0.this$, a1, a2, a3.this$, a4, a5);
    }

    jboolean Arrays::equals(const JArray< jfloat > & a0, jint a1, jint a2, const JArray< jfloat > & a3, jint a4, jint a5)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_equals_ccda7378396bd1a0], a0.this$, a1, a2, a3.this$, a4, a5);
    }

    jboolean Arrays::equals(const JArray< jint > & a0, jint a1, jint a2, const JArray< jint > & a3, jint a4, jint a5)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_equals_b69aa21af786478b], a0.this$, a1, a2, a3.this$, a4, a5);
    }

    jboolean Arrays::equals(const JArray< jlong > & a0, jint a1, jint a2, const JArray< jlong > & a3, jint a4, jint a5)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_equals_7b15564b8663be44], a0.this$, a1, a2, a3.this$, a4, a5);
    }

    jboolean Arrays::equals(const JArray< ::java::lang::Object > & a0, jint a1, jint a2, const JArray< ::java::lang::Object > & a3, jint a4, jint a5)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_equals_a1d158b49a7a9588], a0.this$, a1, a2, a3.this$, a4, a5);
    }

    jboolean Arrays::equals(const JArray< jshort > & a0, jint a1, jint a2, const JArray< jshort > & a3, jint a4, jint a5)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_equals_9f805b88d0c1fe90], a0.this$, a1, a2, a3.this$, a4, a5);
    }

    jboolean Arrays::equals(const JArray< jboolean > & a0, jint a1, jint a2, const JArray< jboolean > & a3, jint a4, jint a5)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_equals_69ddd0a84afda0f3], a0.this$, a1, a2, a3.this$, a4, a5);
    }

    jboolean Arrays::equals(const JArray< ::java::lang::Object > & a0, jint a1, jint a2, const JArray< ::java::lang::Object > & a3, jint a4, jint a5, const ::java::util::Comparator & a6)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_equals_831c29a9cbaf363d], a0.this$, a1, a2, a3.this$, a4, a5, a6.this$);
    }

    void Arrays::fill(const JArray< jboolean > & a0, jboolean a1)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_fill_4243676c5ff6b6bb], a0.this$, a1);
    }

    void Arrays::fill(const JArray< jbyte > & a0, jbyte a1)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_fill_8f35067e8ea31e52], a0.this$, a1);
    }

    void Arrays::fill(const JArray< jchar > & a0, jchar a1)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_fill_67067468446516fe], a0.this$, a1);
    }

    void Arrays::fill(const JArray< jdouble > & a0, jdouble a1)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_fill_334f245ec9cee46b], a0.this$, a1);
    }

    void Arrays::fill(const JArray< jfloat > & a0, jfloat a1)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_fill_b6aa2f48bc0976bb], a0.this$, a1);
    }

    void Arrays::fill(const JArray< jint > & a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_fill_bb84519dea62b6cb], a0.this$, a1);
    }

    void Arrays::fill(const JArray< ::java::lang::Object > & a0, const ::java::lang::Object & a1)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_fill_f633c6efbb3d3386], a0.this$, a1.this$);
    }

    void Arrays::fill(const JArray< jlong > & a0, jlong a1)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_fill_d77b9656779c558d], a0.this$, a1);
    }

    void Arrays::fill(const JArray< jshort > & a0, jshort a1)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_fill_f877a27fd99c2dc8], a0.this$, a1);
    }

    void Arrays::fill(const JArray< jboolean > & a0, jint a1, jint a2, jboolean a3)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_fill_6c5a648604ee6c48], a0.this$, a1, a2, a3);
    }

    void Arrays::fill(const JArray< jbyte > & a0, jint a1, jint a2, jbyte a3)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_fill_dfa0581930a374f0], a0.this$, a1, a2, a3);
    }

    void Arrays::fill(const JArray< jchar > & a0, jint a1, jint a2, jchar a3)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_fill_e7f365a3da5f81d0], a0.this$, a1, a2, a3);
    }

    void Arrays::fill(const JArray< jdouble > & a0, jint a1, jint a2, jdouble a3)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_fill_ce68cc77c7b35f1a], a0.this$, a1, a2, a3);
    }

    void Arrays::fill(const JArray< jfloat > & a0, jint a1, jint a2, jfloat a3)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_fill_4ea37a49d8303ab9], a0.this$, a1, a2, a3);
    }

    void Arrays::fill(const JArray< jint > & a0, jint a1, jint a2, jint a3)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_fill_5218ef3dd56e76c0], a0.this$, a1, a2, a3);
    }

    void Arrays::fill(const JArray< ::java::lang::Object > & a0, jint a1, jint a2, const ::java::lang::Object & a3)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_fill_d4a9414876c6e104], a0.this$, a1, a2, a3.this$);
    }

    void Arrays::fill(const JArray< jlong > & a0, jint a1, jint a2, jlong a3)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_fill_6dba15581df9e961], a0.this$, a1, a2, a3);
    }

    void Arrays::fill(const JArray< jshort > & a0, jint a1, jint a2, jshort a3)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_fill_81c122234befdd96], a0.this$, a1, a2, a3);
    }

    jint Arrays::hashCode(const JArray< jbyte > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_hashCode_53324f422c2c7f64], a0.this$);
    }

    jint Arrays::hashCode(const JArray< jchar > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_hashCode_cedc4c6898e22fb4], a0.this$);
    }

    jint Arrays::hashCode(const JArray< jdouble > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_hashCode_f4eedf29a683816e], a0.this$);
    }

    jint Arrays::hashCode(const JArray< jfloat > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_hashCode_3ad30757a4753630], a0.this$);
    }

    jint Arrays::hashCode(const JArray< jint > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_hashCode_d57a86117ebc55bd], a0.this$);
    }

    jint Arrays::hashCode(const JArray< jlong > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_hashCode_8f818692fd2bf53f], a0.this$);
    }

    jint Arrays::hashCode(const JArray< ::java::lang::Object > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_hashCode_0051854591608e5f], a0.this$);
    }

    jint Arrays::hashCode(const JArray< jshort > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_hashCode_ffad442d43f3186b], a0.this$);
    }

    jint Arrays::hashCode(const JArray< jboolean > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_hashCode_6ed9df6bafe24c89], a0.this$);
    }

    jint Arrays::mismatch(const JArray< jbyte > & a0, const JArray< jbyte > & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_mismatch_72b6c023c4adef42], a0.this$, a1.this$);
    }

    jint Arrays::mismatch(const JArray< jchar > & a0, const JArray< jchar > & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_mismatch_c005ee51dee835ea], a0.this$, a1.this$);
    }

    jint Arrays::mismatch(const JArray< jdouble > & a0, const JArray< jdouble > & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_mismatch_7e69791ee61bcc76], a0.this$, a1.this$);
    }

    jint Arrays::mismatch(const JArray< jfloat > & a0, const JArray< jfloat > & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_mismatch_d617f8f8922e84c1], a0.this$, a1.this$);
    }

    jint Arrays::mismatch(const JArray< jint > & a0, const JArray< jint > & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_mismatch_f95aa64a2259804a], a0.this$, a1.this$);
    }

    jint Arrays::mismatch(const JArray< jlong > & a0, const JArray< jlong > & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_mismatch_eeb06e42cd299736], a0.this$, a1.this$);
    }

    jint Arrays::mismatch(const JArray< ::java::lang::Object > & a0, const JArray< ::java::lang::Object > & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_mismatch_ff3dc61ebcc565b1], a0.this$, a1.this$);
    }

    jint Arrays::mismatch(const JArray< jshort > & a0, const JArray< jshort > & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_mismatch_3e0ca18d533e0a4f], a0.this$, a1.this$);
    }

    jint Arrays::mismatch(const JArray< jboolean > & a0, const JArray< jboolean > & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_mismatch_ea5ab179056ac266], a0.this$, a1.this$);
    }

    jint Arrays::mismatch(const JArray< ::java::lang::Object > & a0, const JArray< ::java::lang::Object > & a1, const ::java::util::Comparator & a2)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_mismatch_2bb9774dc70eeed0], a0.this$, a1.this$, a2.this$);
    }

    jint Arrays::mismatch(const JArray< jbyte > & a0, jint a1, jint a2, const JArray< jbyte > & a3, jint a4, jint a5)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_mismatch_6f57a02e3de68ea8], a0.this$, a1, a2, a3.this$, a4, a5);
    }

    jint Arrays::mismatch(const JArray< jchar > & a0, jint a1, jint a2, const JArray< jchar > & a3, jint a4, jint a5)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_mismatch_745c5fa6920ca05b], a0.this$, a1, a2, a3.this$, a4, a5);
    }

    jint Arrays::mismatch(const JArray< jdouble > & a0, jint a1, jint a2, const JArray< jdouble > & a3, jint a4, jint a5)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_mismatch_69ff11ea2a25556f], a0.this$, a1, a2, a3.this$, a4, a5);
    }

    jint Arrays::mismatch(const JArray< jfloat > & a0, jint a1, jint a2, const JArray< jfloat > & a3, jint a4, jint a5)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_mismatch_0f67c874b33f924f], a0.this$, a1, a2, a3.this$, a4, a5);
    }

    jint Arrays::mismatch(const JArray< jint > & a0, jint a1, jint a2, const JArray< jint > & a3, jint a4, jint a5)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_mismatch_5076f667ad4c15c9], a0.this$, a1, a2, a3.this$, a4, a5);
    }

    jint Arrays::mismatch(const JArray< jlong > & a0, jint a1, jint a2, const JArray< jlong > & a3, jint a4, jint a5)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_mismatch_468df83a8d0baa97], a0.this$, a1, a2, a3.this$, a4, a5);
    }

    jint Arrays::mismatch(const JArray< ::java::lang::Object > & a0, jint a1, jint a2, const JArray< ::java::lang::Object > & a3, jint a4, jint a5)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_mismatch_d17e2bacabbfd032], a0.this$, a1, a2, a3.this$, a4, a5);
    }

    jint Arrays::mismatch(const JArray< jshort > & a0, jint a1, jint a2, const JArray< jshort > & a3, jint a4, jint a5)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_mismatch_2ee56780dd674354], a0.this$, a1, a2, a3.this$, a4, a5);
    }

    jint Arrays::mismatch(const JArray< jboolean > & a0, jint a1, jint a2, const JArray< jboolean > & a3, jint a4, jint a5)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_mismatch_9aac3703cb360621], a0.this$, a1, a2, a3.this$, a4, a5);
    }

    jint Arrays::mismatch(const JArray< ::java::lang::Object > & a0, jint a1, jint a2, const JArray< ::java::lang::Object > & a3, jint a4, jint a5, const ::java::util::Comparator & a6)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_mismatch_8c8020e98abdc1fe], a0.this$, a1, a2, a3.this$, a4, a5, a6.this$);
    }

    void Arrays::parallelSort(const JArray< jbyte > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_parallelSort_459771b03534868e], a0.this$);
    }

    void Arrays::parallelSort(const JArray< jchar > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_parallelSort_dd3f254991df5d48], a0.this$);
    }

    void Arrays::parallelSort(const JArray< jdouble > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_parallelSort_ab69da052b88f50c], a0.this$);
    }

    void Arrays::parallelSort(const JArray< jfloat > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_parallelSort_e6f9f198cf241cf1], a0.this$);
    }

    void Arrays::parallelSort(const JArray< jint > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_parallelSort_86a2769cb881d388], a0.this$);
    }

    void Arrays::parallelSort(const JArray< jlong > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_parallelSort_17fd280b39a6ae4b], a0.this$);
    }

    void Arrays::parallelSort(const JArray< ::java::lang::Comparable > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_parallelSort_68d8ddb3d76fd9fe], a0.this$);
    }

    void Arrays::parallelSort(const JArray< jshort > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_parallelSort_7bcc20f47157c2e9], a0.this$);
    }

    void Arrays::parallelSort(const JArray< ::java::lang::Object > & a0, const ::java::util::Comparator & a1)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_parallelSort_d38aeeedac9eb92a], a0.this$, a1.this$);
    }

    void Arrays::parallelSort(const JArray< jbyte > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_parallelSort_a9fddc59b07ce512], a0.this$, a1, a2);
    }

    void Arrays::parallelSort(const JArray< jchar > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_parallelSort_d23ba6c655e17478], a0.this$, a1, a2);
    }

    void Arrays::parallelSort(const JArray< jdouble > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_parallelSort_4484ad1f15b73c7a], a0.this$, a1, a2);
    }

    void Arrays::parallelSort(const JArray< jfloat > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_parallelSort_6a110138522415ed], a0.this$, a1, a2);
    }

    void Arrays::parallelSort(const JArray< jint > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_parallelSort_a811d6c26b223197], a0.this$, a1, a2);
    }

    void Arrays::parallelSort(const JArray< jlong > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_parallelSort_2d042ca5a5866231], a0.this$, a1, a2);
    }

    void Arrays::parallelSort(const JArray< ::java::lang::Comparable > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_parallelSort_d2110105a458b1d3], a0.this$, a1, a2);
    }

    void Arrays::parallelSort(const JArray< jshort > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_parallelSort_274e52486ae08586], a0.this$, a1, a2);
    }

    void Arrays::parallelSort(const JArray< ::java::lang::Object > & a0, jint a1, jint a2, const ::java::util::Comparator & a3)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_parallelSort_d57c7b6662e4be38], a0.this$, a1, a2, a3.this$);
    }

    void Arrays::sort(const JArray< jbyte > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_sort_459771b03534868e], a0.this$);
    }

    void Arrays::sort(const JArray< jchar > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_sort_dd3f254991df5d48], a0.this$);
    }

    void Arrays::sort(const JArray< jdouble > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_sort_ab69da052b88f50c], a0.this$);
    }

    void Arrays::sort(const JArray< jfloat > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_sort_e6f9f198cf241cf1], a0.this$);
    }

    void Arrays::sort(const JArray< jint > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_sort_86a2769cb881d388], a0.this$);
    }

    void Arrays::sort(const JArray< jlong > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_sort_17fd280b39a6ae4b], a0.this$);
    }

    void Arrays::sort(const JArray< ::java::lang::Object > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_sort_55e8d43de8149236], a0.this$);
    }

    void Arrays::sort(const JArray< jshort > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_sort_7bcc20f47157c2e9], a0.this$);
    }

    void Arrays::sort(const JArray< ::java::lang::Object > & a0, const ::java::util::Comparator & a1)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_sort_d38aeeedac9eb92a], a0.this$, a1.this$);
    }

    void Arrays::sort(const JArray< jbyte > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_sort_a9fddc59b07ce512], a0.this$, a1, a2);
    }

    void Arrays::sort(const JArray< jchar > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_sort_d23ba6c655e17478], a0.this$, a1, a2);
    }

    void Arrays::sort(const JArray< jdouble > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_sort_4484ad1f15b73c7a], a0.this$, a1, a2);
    }

    void Arrays::sort(const JArray< jfloat > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_sort_6a110138522415ed], a0.this$, a1, a2);
    }

    void Arrays::sort(const JArray< jint > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_sort_a811d6c26b223197], a0.this$, a1, a2);
    }

    void Arrays::sort(const JArray< jlong > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_sort_2d042ca5a5866231], a0.this$, a1, a2);
    }

    void Arrays::sort(const JArray< ::java::lang::Object > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_sort_ebe0a7cade3ee163], a0.this$, a1, a2);
    }

    void Arrays::sort(const JArray< jshort > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_sort_274e52486ae08586], a0.this$, a1, a2);
    }

    void Arrays::sort(const JArray< ::java::lang::Object > & a0, jint a1, jint a2, const ::java::util::Comparator & a3)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_sort_d57c7b6662e4be38], a0.this$, a1, a2, a3.this$);
    }

    ::java::util::Spliterator$OfDouble Arrays::spliterator(const JArray< jdouble > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Spliterator$OfDouble(env->callStaticObjectMethod(cls, mids$[mid_spliterator_c0da06547ed3e1b6], a0.this$));
    }

    ::java::util::Spliterator$OfInt Arrays::spliterator(const JArray< jint > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Spliterator$OfInt(env->callStaticObjectMethod(cls, mids$[mid_spliterator_ef25bd37a5892aa9], a0.this$));
    }

    ::java::util::Spliterator$OfLong Arrays::spliterator(const JArray< jlong > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Spliterator$OfLong(env->callStaticObjectMethod(cls, mids$[mid_spliterator_72a6d1fb4aceda56], a0.this$));
    }

    ::java::util::Spliterator Arrays::spliterator(const JArray< ::java::lang::Object > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Spliterator(env->callStaticObjectMethod(cls, mids$[mid_spliterator_b620f6e2bc03dda6], a0.this$));
    }

    ::java::util::Spliterator$OfDouble Arrays::spliterator(const JArray< jdouble > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Spliterator$OfDouble(env->callStaticObjectMethod(cls, mids$[mid_spliterator_e4549ed6bbbc8984], a0.this$, a1, a2));
    }

    ::java::util::Spliterator$OfInt Arrays::spliterator(const JArray< jint > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Spliterator$OfInt(env->callStaticObjectMethod(cls, mids$[mid_spliterator_bd95d283c5fdd8d1], a0.this$, a1, a2));
    }

    ::java::util::Spliterator$OfLong Arrays::spliterator(const JArray< jlong > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Spliterator$OfLong(env->callStaticObjectMethod(cls, mids$[mid_spliterator_fa8dab4710ea0f01], a0.this$, a1, a2));
    }

    ::java::util::Spliterator Arrays::spliterator(const JArray< ::java::lang::Object > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Spliterator(env->callStaticObjectMethod(cls, mids$[mid_spliterator_ae44e314b15baf08], a0.this$, a1, a2));
    }

    ::java::util::stream::DoubleStream Arrays::stream(const JArray< jdouble > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::stream::DoubleStream(env->callStaticObjectMethod(cls, mids$[mid_stream_969b847f93a58e14], a0.this$));
    }

    ::java::util::stream::Stream Arrays::stream(const JArray< ::java::lang::Object > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::stream::Stream(env->callStaticObjectMethod(cls, mids$[mid_stream_f33e55a5742a331d], a0.this$));
    }

    ::java::util::stream::DoubleStream Arrays::stream(const JArray< jdouble > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::stream::DoubleStream(env->callStaticObjectMethod(cls, mids$[mid_stream_b82eab6a9b6c7505], a0.this$, a1, a2));
    }

    ::java::util::stream::Stream Arrays::stream(const JArray< ::java::lang::Object > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::stream::Stream(env->callStaticObjectMethod(cls, mids$[mid_stream_5aade0d2cc81a461], a0.this$, a1, a2));
    }

    ::java::lang::String Arrays::toString(const JArray< jbyte > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_toString_69e6a7d6acbf30b1], a0.this$));
    }

    ::java::lang::String Arrays::toString(const JArray< jchar > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_toString_9a53c61542f295a1], a0.this$));
    }

    ::java::lang::String Arrays::toString(const JArray< jdouble > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_toString_183ce039f033866f], a0.this$));
    }

    ::java::lang::String Arrays::toString(const JArray< jfloat > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_toString_59ce57b0e0d1ffdc], a0.this$));
    }

    ::java::lang::String Arrays::toString(const JArray< jint > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_toString_e06025bc23ba70af], a0.this$));
    }

    ::java::lang::String Arrays::toString(const JArray< jlong > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_toString_63dc073785b880ee], a0.this$));
    }

    ::java::lang::String Arrays::toString(const JArray< ::java::lang::Object > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_toString_5d9b025c020bd4e2], a0.this$));
    }

    ::java::lang::String Arrays::toString(const JArray< jshort > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_toString_dc71f0c11b947401], a0.this$));
    }

    ::java::lang::String Arrays::toString(const JArray< jboolean > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_toString_df599a3b7a997477], a0.this$));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    static PyObject *t_Arrays_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Arrays_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Arrays_asList(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Arrays_binarySearch(PyTypeObject *type, PyObject *args);
    static PyObject *t_Arrays_compare(PyTypeObject *type, PyObject *args);
    static PyObject *t_Arrays_compareUnsigned(PyTypeObject *type, PyObject *args);
    static PyObject *t_Arrays_copyOf(PyTypeObject *type, PyObject *args);
    static PyObject *t_Arrays_copyOfRange(PyTypeObject *type, PyObject *args);
    static PyObject *t_Arrays_deepEquals(PyTypeObject *type, PyObject *args);
    static PyObject *t_Arrays_deepHashCode(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Arrays_deepToString(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Arrays_equals(PyTypeObject *type, PyObject *args);
    static PyObject *t_Arrays_fill(PyTypeObject *type, PyObject *args);
    static PyObject *t_Arrays_hashCode(PyTypeObject *type, PyObject *args);
    static PyObject *t_Arrays_mismatch(PyTypeObject *type, PyObject *args);
    static PyObject *t_Arrays_parallelSort(PyTypeObject *type, PyObject *args);
    static PyObject *t_Arrays_sort(PyTypeObject *type, PyObject *args);
    static PyObject *t_Arrays_spliterator(PyTypeObject *type, PyObject *args);
    static PyObject *t_Arrays_stream(PyTypeObject *type, PyObject *args);
    static PyObject *t_Arrays_toString(PyTypeObject *type, PyObject *args);

    static PyMethodDef t_Arrays__methods_[] = {
      DECLARE_METHOD(t_Arrays, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Arrays, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Arrays, asList, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Arrays, binarySearch, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Arrays, compare, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Arrays, compareUnsigned, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Arrays, copyOf, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Arrays, copyOfRange, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Arrays, deepEquals, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Arrays, deepHashCode, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Arrays, deepToString, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Arrays, equals, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Arrays, fill, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Arrays, hashCode, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Arrays, mismatch, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Arrays, parallelSort, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Arrays, sort, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Arrays, spliterator, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Arrays, stream, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Arrays, toString, METH_VARARGS | METH_CLASS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Arrays)[] = {
      { Py_tp_methods, t_Arrays__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Arrays)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(Arrays, t_Arrays, Arrays);

    void t_Arrays::install(PyObject *module)
    {
      installType(&PY_TYPE(Arrays), &PY_TYPE_DEF(Arrays), module, "Arrays", 0);
    }

    void t_Arrays::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Arrays), "class_", make_descriptor(Arrays::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Arrays), "wrapfn_", make_descriptor(t_Arrays::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Arrays), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_Arrays_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Arrays::initializeClass, 1)))
        return NULL;
      return t_Arrays::wrap_Object(Arrays(((t_Arrays *) arg)->object.this$));
    }
    static PyObject *t_Arrays_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Arrays::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_Arrays_asList(PyTypeObject *type, PyObject *arg)
    {
      JArray< ::java::lang::Object > a0((jobject) NULL);
      ::java::util::List result((jobject) NULL);

      if (!parseArg(arg, "[o", &a0))
      {
        OBJ_CALL(result = ::java::util::Arrays::asList(a0));
        return ::java::util::t_List::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "asList", arg);
      return NULL;
    }

    static PyObject *t_Arrays_binarySearch(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 2:
        {
          JArray< jbyte > a0((jobject) NULL);
          jbyte a1;
          jint result;

          if (!parseArgs(args, "[BB", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::binarySearch(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jchar > a0((jobject) NULL);
          jchar a1;
          jint result;

          if (!parseArgs(args, "[CC", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::binarySearch(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jdouble > a0((jobject) NULL);
          jdouble a1;
          jint result;

          if (!parseArgs(args, "[DD", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::binarySearch(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jfloat > a0((jobject) NULL);
          jfloat a1;
          jint result;

          if (!parseArgs(args, "[FF", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::binarySearch(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jint > a0((jobject) NULL);
          jint a1;
          jint result;

          if (!parseArgs(args, "[II", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::binarySearch(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[oo", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::binarySearch(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jlong > a0((jobject) NULL);
          jlong a1;
          jint result;

          if (!parseArgs(args, "[JJ", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::binarySearch(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jshort > a0((jobject) NULL);
          jshort a1;
          jint result;

          if (!parseArgs(args, "[SS", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::binarySearch(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        break;
       case 3:
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          ::java::util::Comparator a2((jobject) NULL);
          PyTypeObject **p2;
          jint result;

          if (!parseArgs(args, "[ooK", ::java::util::Comparator::initializeClass, &a0, &a1, &a2, &p2, ::java::util::t_Comparator::parameters_))
          {
            OBJ_CALL(result = ::java::util::Arrays::binarySearch(a0, a1, a2));
            return PyLong_FromLong((long) result);
          }
        }
        break;
       case 4:
        {
          JArray< jbyte > a0((jobject) NULL);
          jint a1;
          jint a2;
          jbyte a3;
          jint result;

          if (!parseArgs(args, "[BIIB", &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = ::java::util::Arrays::binarySearch(a0, a1, a2, a3));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jchar > a0((jobject) NULL);
          jint a1;
          jint a2;
          jchar a3;
          jint result;

          if (!parseArgs(args, "[CIIC", &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = ::java::util::Arrays::binarySearch(a0, a1, a2, a3));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jdouble > a0((jobject) NULL);
          jint a1;
          jint a2;
          jdouble a3;
          jint result;

          if (!parseArgs(args, "[DIID", &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = ::java::util::Arrays::binarySearch(a0, a1, a2, a3));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jfloat > a0((jobject) NULL);
          jint a1;
          jint a2;
          jfloat a3;
          jint result;

          if (!parseArgs(args, "[FIIF", &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = ::java::util::Arrays::binarySearch(a0, a1, a2, a3));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jint > a0((jobject) NULL);
          jint a1;
          jint a2;
          jint a3;
          jint result;

          if (!parseArgs(args, "[IIII", &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = ::java::util::Arrays::binarySearch(a0, a1, a2, a3));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          jint a1;
          jint a2;
          ::java::lang::Object a3((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[oIIo", &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = ::java::util::Arrays::binarySearch(a0, a1, a2, a3));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jlong > a0((jobject) NULL);
          jint a1;
          jint a2;
          jlong a3;
          jint result;

          if (!parseArgs(args, "[JIIJ", &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = ::java::util::Arrays::binarySearch(a0, a1, a2, a3));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jshort > a0((jobject) NULL);
          jint a1;
          jint a2;
          jshort a3;
          jint result;

          if (!parseArgs(args, "[SIIS", &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = ::java::util::Arrays::binarySearch(a0, a1, a2, a3));
            return PyLong_FromLong((long) result);
          }
        }
        break;
       case 5:
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          jint a1;
          jint a2;
          ::java::lang::Object a3((jobject) NULL);
          ::java::util::Comparator a4((jobject) NULL);
          PyTypeObject **p4;
          jint result;

          if (!parseArgs(args, "[oIIoK", ::java::util::Comparator::initializeClass, &a0, &a1, &a2, &a3, &a4, &p4, ::java::util::t_Comparator::parameters_))
          {
            OBJ_CALL(result = ::java::util::Arrays::binarySearch(a0, a1, a2, a3, a4));
            return PyLong_FromLong((long) result);
          }
        }
      }

      PyErr_SetArgsError(type, "binarySearch", args);
      return NULL;
    }

    static PyObject *t_Arrays_compare(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 2:
        {
          JArray< jbyte > a0((jobject) NULL);
          JArray< jbyte > a1((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[B[B", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::compare(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jchar > a0((jobject) NULL);
          JArray< jchar > a1((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[C[C", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::compare(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[D[D", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::compare(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jfloat > a0((jobject) NULL);
          JArray< jfloat > a1((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[F[F", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::compare(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jint > a0((jobject) NULL);
          JArray< jint > a1((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[I[I", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::compare(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jlong > a0((jobject) NULL);
          JArray< jlong > a1((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[J[J", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::compare(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< ::java::lang::Comparable > a0((jobject) NULL);
          PyTypeObject **p0;
          JArray< ::java::lang::Comparable > a1((jobject) NULL);
          PyTypeObject **p1;
          jint result;

          if (!parseArgs(args, "[K[K", ::java::lang::Comparable::initializeClass, ::java::lang::Comparable::initializeClass, &a0, &p0, ::java::lang::t_Comparable::parameters_, &a1, &p1, ::java::lang::t_Comparable::parameters_))
          {
            OBJ_CALL(result = ::java::util::Arrays::compare(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jshort > a0((jobject) NULL);
          JArray< jshort > a1((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[S[S", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::compare(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jboolean > a0((jobject) NULL);
          JArray< jboolean > a1((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[Z[Z", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::compare(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        break;
       case 3:
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          JArray< ::java::lang::Object > a1((jobject) NULL);
          ::java::util::Comparator a2((jobject) NULL);
          PyTypeObject **p2;
          jint result;

          if (!parseArgs(args, "[o[oK", ::java::util::Comparator::initializeClass, &a0, &a1, &a2, &p2, ::java::util::t_Comparator::parameters_))
          {
            OBJ_CALL(result = ::java::util::Arrays::compare(a0, a1, a2));
            return PyLong_FromLong((long) result);
          }
        }
        break;
       case 6:
        {
          JArray< jbyte > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jbyte > a3((jobject) NULL);
          jint a4;
          jint a5;
          jint result;

          if (!parseArgs(args, "[BII[BII", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(result = ::java::util::Arrays::compare(a0, a1, a2, a3, a4, a5));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jchar > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jchar > a3((jobject) NULL);
          jint a4;
          jint a5;
          jint result;

          if (!parseArgs(args, "[CII[CII", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(result = ::java::util::Arrays::compare(a0, a1, a2, a3, a4, a5));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jdouble > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jdouble > a3((jobject) NULL);
          jint a4;
          jint a5;
          jint result;

          if (!parseArgs(args, "[DII[DII", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(result = ::java::util::Arrays::compare(a0, a1, a2, a3, a4, a5));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jfloat > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jfloat > a3((jobject) NULL);
          jint a4;
          jint a5;
          jint result;

          if (!parseArgs(args, "[FII[FII", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(result = ::java::util::Arrays::compare(a0, a1, a2, a3, a4, a5));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jint > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jint > a3((jobject) NULL);
          jint a4;
          jint a5;
          jint result;

          if (!parseArgs(args, "[III[III", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(result = ::java::util::Arrays::compare(a0, a1, a2, a3, a4, a5));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jlong > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jlong > a3((jobject) NULL);
          jint a4;
          jint a5;
          jint result;

          if (!parseArgs(args, "[JII[JII", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(result = ::java::util::Arrays::compare(a0, a1, a2, a3, a4, a5));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< ::java::lang::Comparable > a0((jobject) NULL);
          PyTypeObject **p0;
          jint a1;
          jint a2;
          JArray< ::java::lang::Comparable > a3((jobject) NULL);
          PyTypeObject **p3;
          jint a4;
          jint a5;
          jint result;

          if (!parseArgs(args, "[KII[KII", ::java::lang::Comparable::initializeClass, ::java::lang::Comparable::initializeClass, &a0, &p0, ::java::lang::t_Comparable::parameters_, &a1, &a2, &a3, &p3, ::java::lang::t_Comparable::parameters_, &a4, &a5))
          {
            OBJ_CALL(result = ::java::util::Arrays::compare(a0, a1, a2, a3, a4, a5));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jshort > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jshort > a3((jobject) NULL);
          jint a4;
          jint a5;
          jint result;

          if (!parseArgs(args, "[SII[SII", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(result = ::java::util::Arrays::compare(a0, a1, a2, a3, a4, a5));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jboolean > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jboolean > a3((jobject) NULL);
          jint a4;
          jint a5;
          jint result;

          if (!parseArgs(args, "[ZII[ZII", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(result = ::java::util::Arrays::compare(a0, a1, a2, a3, a4, a5));
            return PyLong_FromLong((long) result);
          }
        }
        break;
       case 7:
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< ::java::lang::Object > a3((jobject) NULL);
          jint a4;
          jint a5;
          ::java::util::Comparator a6((jobject) NULL);
          PyTypeObject **p6;
          jint result;

          if (!parseArgs(args, "[oII[oIIK", ::java::util::Comparator::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &p6, ::java::util::t_Comparator::parameters_))
          {
            OBJ_CALL(result = ::java::util::Arrays::compare(a0, a1, a2, a3, a4, a5, a6));
            return PyLong_FromLong((long) result);
          }
        }
      }

      PyErr_SetArgsError(type, "compare", args);
      return NULL;
    }

    static PyObject *t_Arrays_compareUnsigned(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 2:
        {
          JArray< jbyte > a0((jobject) NULL);
          JArray< jbyte > a1((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[B[B", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::compareUnsigned(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jint > a0((jobject) NULL);
          JArray< jint > a1((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[I[I", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::compareUnsigned(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jlong > a0((jobject) NULL);
          JArray< jlong > a1((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[J[J", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::compareUnsigned(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jshort > a0((jobject) NULL);
          JArray< jshort > a1((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[S[S", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::compareUnsigned(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        break;
       case 6:
        {
          JArray< jbyte > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jbyte > a3((jobject) NULL);
          jint a4;
          jint a5;
          jint result;

          if (!parseArgs(args, "[BII[BII", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(result = ::java::util::Arrays::compareUnsigned(a0, a1, a2, a3, a4, a5));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jint > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jint > a3((jobject) NULL);
          jint a4;
          jint a5;
          jint result;

          if (!parseArgs(args, "[III[III", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(result = ::java::util::Arrays::compareUnsigned(a0, a1, a2, a3, a4, a5));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jlong > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jlong > a3((jobject) NULL);
          jint a4;
          jint a5;
          jint result;

          if (!parseArgs(args, "[JII[JII", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(result = ::java::util::Arrays::compareUnsigned(a0, a1, a2, a3, a4, a5));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jshort > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jshort > a3((jobject) NULL);
          jint a4;
          jint a5;
          jint result;

          if (!parseArgs(args, "[SII[SII", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(result = ::java::util::Arrays::compareUnsigned(a0, a1, a2, a3, a4, a5));
            return PyLong_FromLong((long) result);
          }
        }
      }

      PyErr_SetArgsError(type, "compareUnsigned", args);
      return NULL;
    }

    static PyObject *t_Arrays_copyOf(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 2:
        {
          JArray< jbyte > a0((jobject) NULL);
          jint a1;
          JArray< jbyte > result((jobject) NULL);

          if (!parseArgs(args, "[BI", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::copyOf(a0, a1));
            return result.wrap();
          }
        }
        {
          JArray< jchar > a0((jobject) NULL);
          jint a1;
          JArray< jchar > result((jobject) NULL);

          if (!parseArgs(args, "[CI", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::copyOf(a0, a1));
            return result.wrap();
          }
        }
        {
          JArray< jdouble > a0((jobject) NULL);
          jint a1;
          JArray< jdouble > result((jobject) NULL);

          if (!parseArgs(args, "[DI", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::copyOf(a0, a1));
            return result.wrap();
          }
        }
        {
          JArray< jfloat > a0((jobject) NULL);
          jint a1;
          JArray< jfloat > result((jobject) NULL);

          if (!parseArgs(args, "[FI", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::copyOf(a0, a1));
            return result.wrap();
          }
        }
        {
          JArray< jint > a0((jobject) NULL);
          jint a1;
          JArray< jint > result((jobject) NULL);

          if (!parseArgs(args, "[II", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::copyOf(a0, a1));
            return result.wrap();
          }
        }
        {
          JArray< jlong > a0((jobject) NULL);
          jint a1;
          JArray< jlong > result((jobject) NULL);

          if (!parseArgs(args, "[JI", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::copyOf(a0, a1));
            return result.wrap();
          }
        }
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          jint a1;
          JArray< ::java::lang::Object > result((jobject) NULL);

          if (!parseArgs(args, "[oI", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::copyOf(a0, a1));
            return JArray<jobject>(result.this$).wrap(::java::lang::t_Object::wrap_jobject);
          }
        }
        {
          JArray< jshort > a0((jobject) NULL);
          jint a1;
          JArray< jshort > result((jobject) NULL);

          if (!parseArgs(args, "[SI", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::copyOf(a0, a1));
            return result.wrap();
          }
        }
        {
          JArray< jboolean > a0((jobject) NULL);
          jint a1;
          JArray< jboolean > result((jobject) NULL);

          if (!parseArgs(args, "[ZI", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::copyOf(a0, a1));
            return result.wrap();
          }
        }
        break;
       case 3:
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          jint a1;
          ::java::lang::Class a2((jobject) NULL);
          PyTypeObject **p2;
          JArray< ::java::lang::Object > result((jobject) NULL);

          if (!parseArgs(args, "[oIK", ::java::lang::Class::initializeClass, &a0, &a1, &a2, &p2, ::java::lang::t_Class::parameters_))
          {
            OBJ_CALL(result = ::java::util::Arrays::copyOf(a0, a1, a2));
            return JArray<jobject>(result.this$).wrap(::java::lang::t_Object::wrap_jobject);
          }
        }
      }

      PyErr_SetArgsError(type, "copyOf", args);
      return NULL;
    }

    static PyObject *t_Arrays_copyOfRange(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 3:
        {
          JArray< jbyte > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jbyte > result((jobject) NULL);

          if (!parseArgs(args, "[BII", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::java::util::Arrays::copyOfRange(a0, a1, a2));
            return result.wrap();
          }
        }
        {
          JArray< jchar > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jchar > result((jobject) NULL);

          if (!parseArgs(args, "[CII", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::java::util::Arrays::copyOfRange(a0, a1, a2));
            return result.wrap();
          }
        }
        {
          JArray< jdouble > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jdouble > result((jobject) NULL);

          if (!parseArgs(args, "[DII", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::java::util::Arrays::copyOfRange(a0, a1, a2));
            return result.wrap();
          }
        }
        {
          JArray< jfloat > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jfloat > result((jobject) NULL);

          if (!parseArgs(args, "[FII", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::java::util::Arrays::copyOfRange(a0, a1, a2));
            return result.wrap();
          }
        }
        {
          JArray< jint > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jint > result((jobject) NULL);

          if (!parseArgs(args, "[III", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::java::util::Arrays::copyOfRange(a0, a1, a2));
            return result.wrap();
          }
        }
        {
          JArray< jlong > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jlong > result((jobject) NULL);

          if (!parseArgs(args, "[JII", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::java::util::Arrays::copyOfRange(a0, a1, a2));
            return result.wrap();
          }
        }
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< ::java::lang::Object > result((jobject) NULL);

          if (!parseArgs(args, "[oII", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::java::util::Arrays::copyOfRange(a0, a1, a2));
            return JArray<jobject>(result.this$).wrap(::java::lang::t_Object::wrap_jobject);
          }
        }
        {
          JArray< jshort > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jshort > result((jobject) NULL);

          if (!parseArgs(args, "[SII", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::java::util::Arrays::copyOfRange(a0, a1, a2));
            return result.wrap();
          }
        }
        {
          JArray< jboolean > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jboolean > result((jobject) NULL);

          if (!parseArgs(args, "[ZII", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::java::util::Arrays::copyOfRange(a0, a1, a2));
            return result.wrap();
          }
        }
        break;
       case 4:
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          jint a1;
          jint a2;
          ::java::lang::Class a3((jobject) NULL);
          PyTypeObject **p3;
          JArray< ::java::lang::Object > result((jobject) NULL);

          if (!parseArgs(args, "[oIIK", ::java::lang::Class::initializeClass, &a0, &a1, &a2, &a3, &p3, ::java::lang::t_Class::parameters_))
          {
            OBJ_CALL(result = ::java::util::Arrays::copyOfRange(a0, a1, a2, a3));
            return JArray<jobject>(result.this$).wrap(::java::lang::t_Object::wrap_jobject);
          }
        }
      }

      PyErr_SetArgsError(type, "copyOfRange", args);
      return NULL;
    }

    static PyObject *t_Arrays_deepEquals(PyTypeObject *type, PyObject *args)
    {
      JArray< ::java::lang::Object > a0((jobject) NULL);
      JArray< ::java::lang::Object > a1((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "[o[o", &a0, &a1))
      {
        OBJ_CALL(result = ::java::util::Arrays::deepEquals(a0, a1));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError(type, "deepEquals", args);
      return NULL;
    }

    static PyObject *t_Arrays_deepHashCode(PyTypeObject *type, PyObject *arg)
    {
      JArray< ::java::lang::Object > a0((jobject) NULL);
      jint result;

      if (!parseArg(arg, "[o", &a0))
      {
        OBJ_CALL(result = ::java::util::Arrays::deepHashCode(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "deepHashCode", arg);
      return NULL;
    }

    static PyObject *t_Arrays_deepToString(PyTypeObject *type, PyObject *arg)
    {
      JArray< ::java::lang::Object > a0((jobject) NULL);
      ::java::lang::String result((jobject) NULL);

      if (!parseArg(arg, "[o", &a0))
      {
        OBJ_CALL(result = ::java::util::Arrays::deepToString(a0));
        return j2p(result);
      }

      PyErr_SetArgsError(type, "deepToString", arg);
      return NULL;
    }

    static PyObject *t_Arrays_equals(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 2:
        {
          JArray< jbyte > a0((jobject) NULL);
          JArray< jbyte > a1((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "[B[B", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::equals(a0, a1));
            Py_RETURN_BOOL(result);
          }
        }
        {
          JArray< jchar > a0((jobject) NULL);
          JArray< jchar > a1((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "[C[C", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::equals(a0, a1));
            Py_RETURN_BOOL(result);
          }
        }
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "[D[D", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::equals(a0, a1));
            Py_RETURN_BOOL(result);
          }
        }
        {
          JArray< jfloat > a0((jobject) NULL);
          JArray< jfloat > a1((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "[F[F", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::equals(a0, a1));
            Py_RETURN_BOOL(result);
          }
        }
        {
          JArray< jint > a0((jobject) NULL);
          JArray< jint > a1((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "[I[I", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::equals(a0, a1));
            Py_RETURN_BOOL(result);
          }
        }
        {
          JArray< jlong > a0((jobject) NULL);
          JArray< jlong > a1((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "[J[J", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::equals(a0, a1));
            Py_RETURN_BOOL(result);
          }
        }
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          JArray< ::java::lang::Object > a1((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "[o[o", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::equals(a0, a1));
            Py_RETURN_BOOL(result);
          }
        }
        {
          JArray< jshort > a0((jobject) NULL);
          JArray< jshort > a1((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "[S[S", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::equals(a0, a1));
            Py_RETURN_BOOL(result);
          }
        }
        {
          JArray< jboolean > a0((jobject) NULL);
          JArray< jboolean > a1((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "[Z[Z", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::equals(a0, a1));
            Py_RETURN_BOOL(result);
          }
        }
        break;
       case 3:
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          JArray< ::java::lang::Object > a1((jobject) NULL);
          ::java::util::Comparator a2((jobject) NULL);
          PyTypeObject **p2;
          jboolean result;

          if (!parseArgs(args, "[o[oK", ::java::util::Comparator::initializeClass, &a0, &a1, &a2, &p2, ::java::util::t_Comparator::parameters_))
          {
            OBJ_CALL(result = ::java::util::Arrays::equals(a0, a1, a2));
            Py_RETURN_BOOL(result);
          }
        }
        break;
       case 6:
        {
          JArray< jbyte > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jbyte > a3((jobject) NULL);
          jint a4;
          jint a5;
          jboolean result;

          if (!parseArgs(args, "[BII[BII", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(result = ::java::util::Arrays::equals(a0, a1, a2, a3, a4, a5));
            Py_RETURN_BOOL(result);
          }
        }
        {
          JArray< jchar > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jchar > a3((jobject) NULL);
          jint a4;
          jint a5;
          jboolean result;

          if (!parseArgs(args, "[CII[CII", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(result = ::java::util::Arrays::equals(a0, a1, a2, a3, a4, a5));
            Py_RETURN_BOOL(result);
          }
        }
        {
          JArray< jdouble > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jdouble > a3((jobject) NULL);
          jint a4;
          jint a5;
          jboolean result;

          if (!parseArgs(args, "[DII[DII", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(result = ::java::util::Arrays::equals(a0, a1, a2, a3, a4, a5));
            Py_RETURN_BOOL(result);
          }
        }
        {
          JArray< jfloat > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jfloat > a3((jobject) NULL);
          jint a4;
          jint a5;
          jboolean result;

          if (!parseArgs(args, "[FII[FII", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(result = ::java::util::Arrays::equals(a0, a1, a2, a3, a4, a5));
            Py_RETURN_BOOL(result);
          }
        }
        {
          JArray< jint > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jint > a3((jobject) NULL);
          jint a4;
          jint a5;
          jboolean result;

          if (!parseArgs(args, "[III[III", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(result = ::java::util::Arrays::equals(a0, a1, a2, a3, a4, a5));
            Py_RETURN_BOOL(result);
          }
        }
        {
          JArray< jlong > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jlong > a3((jobject) NULL);
          jint a4;
          jint a5;
          jboolean result;

          if (!parseArgs(args, "[JII[JII", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(result = ::java::util::Arrays::equals(a0, a1, a2, a3, a4, a5));
            Py_RETURN_BOOL(result);
          }
        }
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< ::java::lang::Object > a3((jobject) NULL);
          jint a4;
          jint a5;
          jboolean result;

          if (!parseArgs(args, "[oII[oII", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(result = ::java::util::Arrays::equals(a0, a1, a2, a3, a4, a5));
            Py_RETURN_BOOL(result);
          }
        }
        {
          JArray< jshort > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jshort > a3((jobject) NULL);
          jint a4;
          jint a5;
          jboolean result;

          if (!parseArgs(args, "[SII[SII", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(result = ::java::util::Arrays::equals(a0, a1, a2, a3, a4, a5));
            Py_RETURN_BOOL(result);
          }
        }
        {
          JArray< jboolean > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jboolean > a3((jobject) NULL);
          jint a4;
          jint a5;
          jboolean result;

          if (!parseArgs(args, "[ZII[ZII", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(result = ::java::util::Arrays::equals(a0, a1, a2, a3, a4, a5));
            Py_RETURN_BOOL(result);
          }
        }
        break;
       case 7:
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< ::java::lang::Object > a3((jobject) NULL);
          jint a4;
          jint a5;
          ::java::util::Comparator a6((jobject) NULL);
          PyTypeObject **p6;
          jboolean result;

          if (!parseArgs(args, "[oII[oIIK", ::java::util::Comparator::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &p6, ::java::util::t_Comparator::parameters_))
          {
            OBJ_CALL(result = ::java::util::Arrays::equals(a0, a1, a2, a3, a4, a5, a6));
            Py_RETURN_BOOL(result);
          }
        }
      }

      return callSuper(type, "equals", args, 2);
    }

    static PyObject *t_Arrays_fill(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 2:
        {
          JArray< jbyte > a0((jobject) NULL);
          jbyte a1;

          if (!parseArgs(args, "[BB", &a0, &a1))
          {
            OBJ_CALL(::java::util::Arrays::fill(a0, a1));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jchar > a0((jobject) NULL);
          jchar a1;

          if (!parseArgs(args, "[CC", &a0, &a1))
          {
            OBJ_CALL(::java::util::Arrays::fill(a0, a1));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jdouble > a0((jobject) NULL);
          jdouble a1;

          if (!parseArgs(args, "[DD", &a0, &a1))
          {
            OBJ_CALL(::java::util::Arrays::fill(a0, a1));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jfloat > a0((jobject) NULL);
          jfloat a1;

          if (!parseArgs(args, "[FF", &a0, &a1))
          {
            OBJ_CALL(::java::util::Arrays::fill(a0, a1));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jint > a0((jobject) NULL);
          jint a1;

          if (!parseArgs(args, "[II", &a0, &a1))
          {
            OBJ_CALL(::java::util::Arrays::fill(a0, a1));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jlong > a0((jobject) NULL);
          jlong a1;

          if (!parseArgs(args, "[JJ", &a0, &a1))
          {
            OBJ_CALL(::java::util::Arrays::fill(a0, a1));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);

          if (!parseArgs(args, "[oo", &a0, &a1))
          {
            OBJ_CALL(::java::util::Arrays::fill(a0, a1));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jshort > a0((jobject) NULL);
          jshort a1;

          if (!parseArgs(args, "[SS", &a0, &a1))
          {
            OBJ_CALL(::java::util::Arrays::fill(a0, a1));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jboolean > a0((jobject) NULL);
          jboolean a1;

          if (!parseArgs(args, "[ZZ", &a0, &a1))
          {
            OBJ_CALL(::java::util::Arrays::fill(a0, a1));
            Py_RETURN_NONE;
          }
        }
        break;
       case 4:
        {
          JArray< jbyte > a0((jobject) NULL);
          jint a1;
          jint a2;
          jbyte a3;

          if (!parseArgs(args, "[BIIB", &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(::java::util::Arrays::fill(a0, a1, a2, a3));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jchar > a0((jobject) NULL);
          jint a1;
          jint a2;
          jchar a3;

          if (!parseArgs(args, "[CIIC", &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(::java::util::Arrays::fill(a0, a1, a2, a3));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jdouble > a0((jobject) NULL);
          jint a1;
          jint a2;
          jdouble a3;

          if (!parseArgs(args, "[DIID", &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(::java::util::Arrays::fill(a0, a1, a2, a3));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jfloat > a0((jobject) NULL);
          jint a1;
          jint a2;
          jfloat a3;

          if (!parseArgs(args, "[FIIF", &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(::java::util::Arrays::fill(a0, a1, a2, a3));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jint > a0((jobject) NULL);
          jint a1;
          jint a2;
          jint a3;

          if (!parseArgs(args, "[IIII", &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(::java::util::Arrays::fill(a0, a1, a2, a3));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jlong > a0((jobject) NULL);
          jint a1;
          jint a2;
          jlong a3;

          if (!parseArgs(args, "[JIIJ", &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(::java::util::Arrays::fill(a0, a1, a2, a3));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          jint a1;
          jint a2;
          ::java::lang::Object a3((jobject) NULL);

          if (!parseArgs(args, "[oIIo", &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(::java::util::Arrays::fill(a0, a1, a2, a3));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jshort > a0((jobject) NULL);
          jint a1;
          jint a2;
          jshort a3;

          if (!parseArgs(args, "[SIIS", &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(::java::util::Arrays::fill(a0, a1, a2, a3));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jboolean > a0((jobject) NULL);
          jint a1;
          jint a2;
          jboolean a3;

          if (!parseArgs(args, "[ZIIZ", &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(::java::util::Arrays::fill(a0, a1, a2, a3));
            Py_RETURN_NONE;
          }
        }
      }

      PyErr_SetArgsError(type, "fill", args);
      return NULL;
    }

    static PyObject *t_Arrays_hashCode(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          JArray< jbyte > a0((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[B", &a0))
          {
            OBJ_CALL(result = ::java::util::Arrays::hashCode(a0));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jchar > a0((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[C", &a0))
          {
            OBJ_CALL(result = ::java::util::Arrays::hashCode(a0));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jdouble > a0((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[D", &a0))
          {
            OBJ_CALL(result = ::java::util::Arrays::hashCode(a0));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jfloat > a0((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[F", &a0))
          {
            OBJ_CALL(result = ::java::util::Arrays::hashCode(a0));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jint > a0((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[I", &a0))
          {
            OBJ_CALL(result = ::java::util::Arrays::hashCode(a0));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jlong > a0((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[J", &a0))
          {
            OBJ_CALL(result = ::java::util::Arrays::hashCode(a0));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[o", &a0))
          {
            OBJ_CALL(result = ::java::util::Arrays::hashCode(a0));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jshort > a0((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[S", &a0))
          {
            OBJ_CALL(result = ::java::util::Arrays::hashCode(a0));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jboolean > a0((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[Z", &a0))
          {
            OBJ_CALL(result = ::java::util::Arrays::hashCode(a0));
            return PyLong_FromLong((long) result);
          }
        }
      }

      return callSuper(type, "hashCode", args, 2);
    }

    static PyObject *t_Arrays_mismatch(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 2:
        {
          JArray< jbyte > a0((jobject) NULL);
          JArray< jbyte > a1((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[B[B", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::mismatch(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jchar > a0((jobject) NULL);
          JArray< jchar > a1((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[C[C", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::mismatch(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[D[D", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::mismatch(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jfloat > a0((jobject) NULL);
          JArray< jfloat > a1((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[F[F", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::mismatch(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jint > a0((jobject) NULL);
          JArray< jint > a1((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[I[I", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::mismatch(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jlong > a0((jobject) NULL);
          JArray< jlong > a1((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[J[J", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::mismatch(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          JArray< ::java::lang::Object > a1((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[o[o", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::mismatch(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jshort > a0((jobject) NULL);
          JArray< jshort > a1((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[S[S", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::mismatch(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jboolean > a0((jobject) NULL);
          JArray< jboolean > a1((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[Z[Z", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::mismatch(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        break;
       case 3:
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          JArray< ::java::lang::Object > a1((jobject) NULL);
          ::java::util::Comparator a2((jobject) NULL);
          PyTypeObject **p2;
          jint result;

          if (!parseArgs(args, "[o[oK", ::java::util::Comparator::initializeClass, &a0, &a1, &a2, &p2, ::java::util::t_Comparator::parameters_))
          {
            OBJ_CALL(result = ::java::util::Arrays::mismatch(a0, a1, a2));
            return PyLong_FromLong((long) result);
          }
        }
        break;
       case 6:
        {
          JArray< jbyte > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jbyte > a3((jobject) NULL);
          jint a4;
          jint a5;
          jint result;

          if (!parseArgs(args, "[BII[BII", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(result = ::java::util::Arrays::mismatch(a0, a1, a2, a3, a4, a5));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jchar > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jchar > a3((jobject) NULL);
          jint a4;
          jint a5;
          jint result;

          if (!parseArgs(args, "[CII[CII", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(result = ::java::util::Arrays::mismatch(a0, a1, a2, a3, a4, a5));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jdouble > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jdouble > a3((jobject) NULL);
          jint a4;
          jint a5;
          jint result;

          if (!parseArgs(args, "[DII[DII", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(result = ::java::util::Arrays::mismatch(a0, a1, a2, a3, a4, a5));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jfloat > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jfloat > a3((jobject) NULL);
          jint a4;
          jint a5;
          jint result;

          if (!parseArgs(args, "[FII[FII", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(result = ::java::util::Arrays::mismatch(a0, a1, a2, a3, a4, a5));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jint > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jint > a3((jobject) NULL);
          jint a4;
          jint a5;
          jint result;

          if (!parseArgs(args, "[III[III", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(result = ::java::util::Arrays::mismatch(a0, a1, a2, a3, a4, a5));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jlong > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jlong > a3((jobject) NULL);
          jint a4;
          jint a5;
          jint result;

          if (!parseArgs(args, "[JII[JII", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(result = ::java::util::Arrays::mismatch(a0, a1, a2, a3, a4, a5));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< ::java::lang::Object > a3((jobject) NULL);
          jint a4;
          jint a5;
          jint result;

          if (!parseArgs(args, "[oII[oII", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(result = ::java::util::Arrays::mismatch(a0, a1, a2, a3, a4, a5));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jshort > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jshort > a3((jobject) NULL);
          jint a4;
          jint a5;
          jint result;

          if (!parseArgs(args, "[SII[SII", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(result = ::java::util::Arrays::mismatch(a0, a1, a2, a3, a4, a5));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jboolean > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jboolean > a3((jobject) NULL);
          jint a4;
          jint a5;
          jint result;

          if (!parseArgs(args, "[ZII[ZII", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(result = ::java::util::Arrays::mismatch(a0, a1, a2, a3, a4, a5));
            return PyLong_FromLong((long) result);
          }
        }
        break;
       case 7:
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< ::java::lang::Object > a3((jobject) NULL);
          jint a4;
          jint a5;
          ::java::util::Comparator a6((jobject) NULL);
          PyTypeObject **p6;
          jint result;

          if (!parseArgs(args, "[oII[oIIK", ::java::util::Comparator::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &p6, ::java::util::t_Comparator::parameters_))
          {
            OBJ_CALL(result = ::java::util::Arrays::mismatch(a0, a1, a2, a3, a4, a5, a6));
            return PyLong_FromLong((long) result);
          }
        }
      }

      PyErr_SetArgsError(type, "mismatch", args);
      return NULL;
    }

    static PyObject *t_Arrays_parallelSort(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          JArray< jbyte > a0((jobject) NULL);

          if (!parseArgs(args, "[B", &a0))
          {
            OBJ_CALL(::java::util::Arrays::parallelSort(a0));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jchar > a0((jobject) NULL);

          if (!parseArgs(args, "[C", &a0))
          {
            OBJ_CALL(::java::util::Arrays::parallelSort(a0));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jdouble > a0((jobject) NULL);

          if (!parseArgs(args, "[D", &a0))
          {
            OBJ_CALL(::java::util::Arrays::parallelSort(a0));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jfloat > a0((jobject) NULL);

          if (!parseArgs(args, "[F", &a0))
          {
            OBJ_CALL(::java::util::Arrays::parallelSort(a0));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jint > a0((jobject) NULL);

          if (!parseArgs(args, "[I", &a0))
          {
            OBJ_CALL(::java::util::Arrays::parallelSort(a0));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jlong > a0((jobject) NULL);

          if (!parseArgs(args, "[J", &a0))
          {
            OBJ_CALL(::java::util::Arrays::parallelSort(a0));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< ::java::lang::Comparable > a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArgs(args, "[K", ::java::lang::Comparable::initializeClass, &a0, &p0, ::java::lang::t_Comparable::parameters_))
          {
            OBJ_CALL(::java::util::Arrays::parallelSort(a0));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jshort > a0((jobject) NULL);

          if (!parseArgs(args, "[S", &a0))
          {
            OBJ_CALL(::java::util::Arrays::parallelSort(a0));
            Py_RETURN_NONE;
          }
        }
        break;
       case 2:
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          ::java::util::Comparator a1((jobject) NULL);
          PyTypeObject **p1;

          if (!parseArgs(args, "[oK", ::java::util::Comparator::initializeClass, &a0, &a1, &p1, ::java::util::t_Comparator::parameters_))
          {
            OBJ_CALL(::java::util::Arrays::parallelSort(a0, a1));
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
            OBJ_CALL(::java::util::Arrays::parallelSort(a0, a1, a2));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jchar > a0((jobject) NULL);
          jint a1;
          jint a2;

          if (!parseArgs(args, "[CII", &a0, &a1, &a2))
          {
            OBJ_CALL(::java::util::Arrays::parallelSort(a0, a1, a2));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jdouble > a0((jobject) NULL);
          jint a1;
          jint a2;

          if (!parseArgs(args, "[DII", &a0, &a1, &a2))
          {
            OBJ_CALL(::java::util::Arrays::parallelSort(a0, a1, a2));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jfloat > a0((jobject) NULL);
          jint a1;
          jint a2;

          if (!parseArgs(args, "[FII", &a0, &a1, &a2))
          {
            OBJ_CALL(::java::util::Arrays::parallelSort(a0, a1, a2));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jint > a0((jobject) NULL);
          jint a1;
          jint a2;

          if (!parseArgs(args, "[III", &a0, &a1, &a2))
          {
            OBJ_CALL(::java::util::Arrays::parallelSort(a0, a1, a2));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jlong > a0((jobject) NULL);
          jint a1;
          jint a2;

          if (!parseArgs(args, "[JII", &a0, &a1, &a2))
          {
            OBJ_CALL(::java::util::Arrays::parallelSort(a0, a1, a2));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< ::java::lang::Comparable > a0((jobject) NULL);
          PyTypeObject **p0;
          jint a1;
          jint a2;

          if (!parseArgs(args, "[KII", ::java::lang::Comparable::initializeClass, &a0, &p0, ::java::lang::t_Comparable::parameters_, &a1, &a2))
          {
            OBJ_CALL(::java::util::Arrays::parallelSort(a0, a1, a2));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jshort > a0((jobject) NULL);
          jint a1;
          jint a2;

          if (!parseArgs(args, "[SII", &a0, &a1, &a2))
          {
            OBJ_CALL(::java::util::Arrays::parallelSort(a0, a1, a2));
            Py_RETURN_NONE;
          }
        }
        break;
       case 4:
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          jint a1;
          jint a2;
          ::java::util::Comparator a3((jobject) NULL);
          PyTypeObject **p3;

          if (!parseArgs(args, "[oIIK", ::java::util::Comparator::initializeClass, &a0, &a1, &a2, &a3, &p3, ::java::util::t_Comparator::parameters_))
          {
            OBJ_CALL(::java::util::Arrays::parallelSort(a0, a1, a2, a3));
            Py_RETURN_NONE;
          }
        }
      }

      PyErr_SetArgsError(type, "parallelSort", args);
      return NULL;
    }

    static PyObject *t_Arrays_sort(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          JArray< jbyte > a0((jobject) NULL);

          if (!parseArgs(args, "[B", &a0))
          {
            OBJ_CALL(::java::util::Arrays::sort(a0));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jchar > a0((jobject) NULL);

          if (!parseArgs(args, "[C", &a0))
          {
            OBJ_CALL(::java::util::Arrays::sort(a0));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jdouble > a0((jobject) NULL);

          if (!parseArgs(args, "[D", &a0))
          {
            OBJ_CALL(::java::util::Arrays::sort(a0));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jfloat > a0((jobject) NULL);

          if (!parseArgs(args, "[F", &a0))
          {
            OBJ_CALL(::java::util::Arrays::sort(a0));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jint > a0((jobject) NULL);

          if (!parseArgs(args, "[I", &a0))
          {
            OBJ_CALL(::java::util::Arrays::sort(a0));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jlong > a0((jobject) NULL);

          if (!parseArgs(args, "[J", &a0))
          {
            OBJ_CALL(::java::util::Arrays::sort(a0));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);

          if (!parseArgs(args, "[o", &a0))
          {
            OBJ_CALL(::java::util::Arrays::sort(a0));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jshort > a0((jobject) NULL);

          if (!parseArgs(args, "[S", &a0))
          {
            OBJ_CALL(::java::util::Arrays::sort(a0));
            Py_RETURN_NONE;
          }
        }
        break;
       case 2:
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          ::java::util::Comparator a1((jobject) NULL);
          PyTypeObject **p1;

          if (!parseArgs(args, "[oK", ::java::util::Comparator::initializeClass, &a0, &a1, &p1, ::java::util::t_Comparator::parameters_))
          {
            OBJ_CALL(::java::util::Arrays::sort(a0, a1));
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
            OBJ_CALL(::java::util::Arrays::sort(a0, a1, a2));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jchar > a0((jobject) NULL);
          jint a1;
          jint a2;

          if (!parseArgs(args, "[CII", &a0, &a1, &a2))
          {
            OBJ_CALL(::java::util::Arrays::sort(a0, a1, a2));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jdouble > a0((jobject) NULL);
          jint a1;
          jint a2;

          if (!parseArgs(args, "[DII", &a0, &a1, &a2))
          {
            OBJ_CALL(::java::util::Arrays::sort(a0, a1, a2));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jfloat > a0((jobject) NULL);
          jint a1;
          jint a2;

          if (!parseArgs(args, "[FII", &a0, &a1, &a2))
          {
            OBJ_CALL(::java::util::Arrays::sort(a0, a1, a2));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jint > a0((jobject) NULL);
          jint a1;
          jint a2;

          if (!parseArgs(args, "[III", &a0, &a1, &a2))
          {
            OBJ_CALL(::java::util::Arrays::sort(a0, a1, a2));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jlong > a0((jobject) NULL);
          jint a1;
          jint a2;

          if (!parseArgs(args, "[JII", &a0, &a1, &a2))
          {
            OBJ_CALL(::java::util::Arrays::sort(a0, a1, a2));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          jint a1;
          jint a2;

          if (!parseArgs(args, "[oII", &a0, &a1, &a2))
          {
            OBJ_CALL(::java::util::Arrays::sort(a0, a1, a2));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jshort > a0((jobject) NULL);
          jint a1;
          jint a2;

          if (!parseArgs(args, "[SII", &a0, &a1, &a2))
          {
            OBJ_CALL(::java::util::Arrays::sort(a0, a1, a2));
            Py_RETURN_NONE;
          }
        }
        break;
       case 4:
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          jint a1;
          jint a2;
          ::java::util::Comparator a3((jobject) NULL);
          PyTypeObject **p3;

          if (!parseArgs(args, "[oIIK", ::java::util::Comparator::initializeClass, &a0, &a1, &a2, &a3, &p3, ::java::util::t_Comparator::parameters_))
          {
            OBJ_CALL(::java::util::Arrays::sort(a0, a1, a2, a3));
            Py_RETURN_NONE;
          }
        }
      }

      PyErr_SetArgsError(type, "sort", args);
      return NULL;
    }

    static PyObject *t_Arrays_spliterator(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          JArray< jdouble > a0((jobject) NULL);
          ::java::util::Spliterator$OfDouble result((jobject) NULL);

          if (!parseArgs(args, "[D", &a0))
          {
            OBJ_CALL(result = ::java::util::Arrays::spliterator(a0));
            return ::java::util::t_Spliterator$OfDouble::wrap_Object(result);
          }
        }
        {
          JArray< jint > a0((jobject) NULL);
          ::java::util::Spliterator$OfInt result((jobject) NULL);

          if (!parseArgs(args, "[I", &a0))
          {
            OBJ_CALL(result = ::java::util::Arrays::spliterator(a0));
            return ::java::util::t_Spliterator$OfInt::wrap_Object(result);
          }
        }
        {
          JArray< jlong > a0((jobject) NULL);
          ::java::util::Spliterator$OfLong result((jobject) NULL);

          if (!parseArgs(args, "[J", &a0))
          {
            OBJ_CALL(result = ::java::util::Arrays::spliterator(a0));
            return ::java::util::t_Spliterator$OfLong::wrap_Object(result);
          }
        }
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          ::java::util::Spliterator result((jobject) NULL);

          if (!parseArgs(args, "[o", &a0))
          {
            OBJ_CALL(result = ::java::util::Arrays::spliterator(a0));
            return ::java::util::t_Spliterator::wrap_Object(result);
          }
        }
        break;
       case 3:
        {
          JArray< jdouble > a0((jobject) NULL);
          jint a1;
          jint a2;
          ::java::util::Spliterator$OfDouble result((jobject) NULL);

          if (!parseArgs(args, "[DII", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::java::util::Arrays::spliterator(a0, a1, a2));
            return ::java::util::t_Spliterator$OfDouble::wrap_Object(result);
          }
        }
        {
          JArray< jint > a0((jobject) NULL);
          jint a1;
          jint a2;
          ::java::util::Spliterator$OfInt result((jobject) NULL);

          if (!parseArgs(args, "[III", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::java::util::Arrays::spliterator(a0, a1, a2));
            return ::java::util::t_Spliterator$OfInt::wrap_Object(result);
          }
        }
        {
          JArray< jlong > a0((jobject) NULL);
          jint a1;
          jint a2;
          ::java::util::Spliterator$OfLong result((jobject) NULL);

          if (!parseArgs(args, "[JII", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::java::util::Arrays::spliterator(a0, a1, a2));
            return ::java::util::t_Spliterator$OfLong::wrap_Object(result);
          }
        }
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          jint a1;
          jint a2;
          ::java::util::Spliterator result((jobject) NULL);

          if (!parseArgs(args, "[oII", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::java::util::Arrays::spliterator(a0, a1, a2));
            return ::java::util::t_Spliterator::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError(type, "spliterator", args);
      return NULL;
    }

    static PyObject *t_Arrays_stream(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          JArray< jdouble > a0((jobject) NULL);
          ::java::util::stream::DoubleStream result((jobject) NULL);

          if (!parseArgs(args, "[D", &a0))
          {
            OBJ_CALL(result = ::java::util::Arrays::stream(a0));
            return ::java::util::stream::t_DoubleStream::wrap_Object(result);
          }
        }
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          ::java::util::stream::Stream result((jobject) NULL);

          if (!parseArgs(args, "[o", &a0))
          {
            OBJ_CALL(result = ::java::util::Arrays::stream(a0));
            return ::java::util::stream::t_Stream::wrap_Object(result);
          }
        }
        break;
       case 3:
        {
          JArray< jdouble > a0((jobject) NULL);
          jint a1;
          jint a2;
          ::java::util::stream::DoubleStream result((jobject) NULL);

          if (!parseArgs(args, "[DII", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::java::util::Arrays::stream(a0, a1, a2));
            return ::java::util::stream::t_DoubleStream::wrap_Object(result);
          }
        }
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          jint a1;
          jint a2;
          ::java::util::stream::Stream result((jobject) NULL);

          if (!parseArgs(args, "[oII", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::java::util::Arrays::stream(a0, a1, a2));
            return ::java::util::stream::t_Stream::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError(type, "stream", args);
      return NULL;
    }

    static PyObject *t_Arrays_toString(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          JArray< jbyte > a0((jobject) NULL);
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "[B", &a0))
          {
            OBJ_CALL(result = ::java::util::Arrays::toString(a0));
            return j2p(result);
          }
        }
        {
          JArray< jchar > a0((jobject) NULL);
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "[C", &a0))
          {
            OBJ_CALL(result = ::java::util::Arrays::toString(a0));
            return j2p(result);
          }
        }
        {
          JArray< jdouble > a0((jobject) NULL);
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "[D", &a0))
          {
            OBJ_CALL(result = ::java::util::Arrays::toString(a0));
            return j2p(result);
          }
        }
        {
          JArray< jfloat > a0((jobject) NULL);
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "[F", &a0))
          {
            OBJ_CALL(result = ::java::util::Arrays::toString(a0));
            return j2p(result);
          }
        }
        {
          JArray< jint > a0((jobject) NULL);
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "[I", &a0))
          {
            OBJ_CALL(result = ::java::util::Arrays::toString(a0));
            return j2p(result);
          }
        }
        {
          JArray< jlong > a0((jobject) NULL);
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "[J", &a0))
          {
            OBJ_CALL(result = ::java::util::Arrays::toString(a0));
            return j2p(result);
          }
        }
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "[o", &a0))
          {
            OBJ_CALL(result = ::java::util::Arrays::toString(a0));
            return j2p(result);
          }
        }
        {
          JArray< jshort > a0((jobject) NULL);
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "[S", &a0))
          {
            OBJ_CALL(result = ::java::util::Arrays::toString(a0));
            return j2p(result);
          }
        }
        {
          JArray< jboolean > a0((jobject) NULL);
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "[Z", &a0))
          {
            OBJ_CALL(result = ::java::util::Arrays::toString(a0));
            return j2p(result);
          }
        }
      }

      return callSuper(type, "toString", args, 2);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/GroundFieldOfViewDetector.h"
#include "org/orekit/geometry/fov/FieldOfView.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/propagation/events/GroundFieldOfViewDetector.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *GroundFieldOfViewDetector::class$ = NULL;
        jmethodID *GroundFieldOfViewDetector::mids$ = NULL;
        bool GroundFieldOfViewDetector::live$ = false;

        jclass GroundFieldOfViewDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/GroundFieldOfViewDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a2f801ddbcf6ba72] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/geometry/fov/FieldOfView;)V");
            mids$[mid_g_a17ea857ce74d258] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_getFOV_f16dd2df58a56a14] = env->getMethodID(cls, "getFOV", "()Lorg/orekit/geometry/fov/FieldOfView;");
            mids$[mid_getFrame_2c51111cc6894ba1] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
            mids$[mid_create_a8e73d44912c4f7d] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/AdaptableInterval;DILorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/GroundFieldOfViewDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        GroundFieldOfViewDetector::GroundFieldOfViewDetector(const ::org::orekit::frames::Frame & a0, const ::org::orekit::geometry::fov::FieldOfView & a1) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_a2f801ddbcf6ba72, a0.this$, a1.this$)) {}

        jdouble GroundFieldOfViewDetector::g(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_a17ea857ce74d258], a0.this$);
        }

        ::org::orekit::geometry::fov::FieldOfView GroundFieldOfViewDetector::getFOV() const
        {
          return ::org::orekit::geometry::fov::FieldOfView(env->callObjectMethod(this$, mids$[mid_getFOV_f16dd2df58a56a14]));
        }

        ::org::orekit::frames::Frame GroundFieldOfViewDetector::getFrame() const
        {
          return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_2c51111cc6894ba1]));
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
        static PyObject *t_GroundFieldOfViewDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GroundFieldOfViewDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GroundFieldOfViewDetector_of_(t_GroundFieldOfViewDetector *self, PyObject *args);
        static int t_GroundFieldOfViewDetector_init_(t_GroundFieldOfViewDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_GroundFieldOfViewDetector_g(t_GroundFieldOfViewDetector *self, PyObject *args);
        static PyObject *t_GroundFieldOfViewDetector_getFOV(t_GroundFieldOfViewDetector *self);
        static PyObject *t_GroundFieldOfViewDetector_getFrame(t_GroundFieldOfViewDetector *self);
        static PyObject *t_GroundFieldOfViewDetector_get__fOV(t_GroundFieldOfViewDetector *self, void *data);
        static PyObject *t_GroundFieldOfViewDetector_get__frame(t_GroundFieldOfViewDetector *self, void *data);
        static PyObject *t_GroundFieldOfViewDetector_get__parameters_(t_GroundFieldOfViewDetector *self, void *data);
        static PyGetSetDef t_GroundFieldOfViewDetector__fields_[] = {
          DECLARE_GET_FIELD(t_GroundFieldOfViewDetector, fOV),
          DECLARE_GET_FIELD(t_GroundFieldOfViewDetector, frame),
          DECLARE_GET_FIELD(t_GroundFieldOfViewDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_GroundFieldOfViewDetector__methods_[] = {
          DECLARE_METHOD(t_GroundFieldOfViewDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GroundFieldOfViewDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GroundFieldOfViewDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_GroundFieldOfViewDetector, g, METH_VARARGS),
          DECLARE_METHOD(t_GroundFieldOfViewDetector, getFOV, METH_NOARGS),
          DECLARE_METHOD(t_GroundFieldOfViewDetector, getFrame, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(GroundFieldOfViewDetector)[] = {
          { Py_tp_methods, t_GroundFieldOfViewDetector__methods_ },
          { Py_tp_init, (void *) t_GroundFieldOfViewDetector_init_ },
          { Py_tp_getset, t_GroundFieldOfViewDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(GroundFieldOfViewDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::AbstractDetector),
          NULL
        };

        DEFINE_TYPE(GroundFieldOfViewDetector, t_GroundFieldOfViewDetector, GroundFieldOfViewDetector);
        PyObject *t_GroundFieldOfViewDetector::wrap_Object(const GroundFieldOfViewDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_GroundFieldOfViewDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_GroundFieldOfViewDetector *self = (t_GroundFieldOfViewDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_GroundFieldOfViewDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_GroundFieldOfViewDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_GroundFieldOfViewDetector *self = (t_GroundFieldOfViewDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_GroundFieldOfViewDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(GroundFieldOfViewDetector), &PY_TYPE_DEF(GroundFieldOfViewDetector), module, "GroundFieldOfViewDetector", 0);
        }

        void t_GroundFieldOfViewDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(GroundFieldOfViewDetector), "class_", make_descriptor(GroundFieldOfViewDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GroundFieldOfViewDetector), "wrapfn_", make_descriptor(t_GroundFieldOfViewDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GroundFieldOfViewDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_GroundFieldOfViewDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, GroundFieldOfViewDetector::initializeClass, 1)))
            return NULL;
          return t_GroundFieldOfViewDetector::wrap_Object(GroundFieldOfViewDetector(((t_GroundFieldOfViewDetector *) arg)->object.this$));
        }
        static PyObject *t_GroundFieldOfViewDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, GroundFieldOfViewDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_GroundFieldOfViewDetector_of_(t_GroundFieldOfViewDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_GroundFieldOfViewDetector_init_(t_GroundFieldOfViewDetector *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::frames::Frame a0((jobject) NULL);
          ::org::orekit::geometry::fov::FieldOfView a1((jobject) NULL);
          GroundFieldOfViewDetector object((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::geometry::fov::FieldOfView::initializeClass, &a0, &a1))
          {
            INT_CALL(object = GroundFieldOfViewDetector(a0, a1));
            self->object = object;
            self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(GroundFieldOfViewDetector);
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_GroundFieldOfViewDetector_g(t_GroundFieldOfViewDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(GroundFieldOfViewDetector), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_GroundFieldOfViewDetector_getFOV(t_GroundFieldOfViewDetector *self)
        {
          ::org::orekit::geometry::fov::FieldOfView result((jobject) NULL);
          OBJ_CALL(result = self->object.getFOV());
          return ::org::orekit::geometry::fov::t_FieldOfView::wrap_Object(result);
        }

        static PyObject *t_GroundFieldOfViewDetector_getFrame(t_GroundFieldOfViewDetector *self)
        {
          ::org::orekit::frames::Frame result((jobject) NULL);
          OBJ_CALL(result = self->object.getFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(result);
        }
        static PyObject *t_GroundFieldOfViewDetector_get__parameters_(t_GroundFieldOfViewDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_GroundFieldOfViewDetector_get__fOV(t_GroundFieldOfViewDetector *self, void *data)
        {
          ::org::orekit::geometry::fov::FieldOfView value((jobject) NULL);
          OBJ_CALL(value = self->object.getFOV());
          return ::org::orekit::geometry::fov::t_FieldOfView::wrap_Object(value);
        }

        static PyObject *t_GroundFieldOfViewDetector_get__frame(t_GroundFieldOfViewDetector *self, void *data)
        {
          ::org::orekit::frames::Frame value((jobject) NULL);
          OBJ_CALL(value = self->object.getFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/partitioning/AbstractRegion.h"
#include "org/hipparchus/geometry/Space.h"
#include "org/hipparchus/geometry/partitioning/AbstractRegion.h"
#include "org/hipparchus/geometry/partitioning/BSPTree.h"
#include "org/hipparchus/geometry/partitioning/SubHyperplane.h"
#include "org/hipparchus/geometry/Point.h"
#include "org/hipparchus/geometry/partitioning/Hyperplane.h"
#include "org/hipparchus/geometry/partitioning/Transform.h"
#include "org/hipparchus/geometry/partitioning/BoundaryProjection.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/partitioning/Region$Location.h"
#include "org/hipparchus/geometry/partitioning/Region.h"
#include "org/hipparchus/geometry/Vector.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace partitioning {

        ::java::lang::Class *AbstractRegion::class$ = NULL;
        jmethodID *AbstractRegion::mids$ = NULL;
        bool AbstractRegion::live$ = false;

        jclass AbstractRegion::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/geometry/partitioning/AbstractRegion");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_28c58d4b5ab18011] = env->getMethodID(cls, "<init>", "([Lorg/hipparchus/geometry/partitioning/Hyperplane;D)V");
            mids$[mid_applyTransform_66e0444279d1d22f] = env->getMethodID(cls, "applyTransform", "(Lorg/hipparchus/geometry/partitioning/Transform;)Lorg/hipparchus/geometry/partitioning/AbstractRegion;");
            mids$[mid_buildNew_a544652f009b15b3] = env->getMethodID(cls, "buildNew", "(Lorg/hipparchus/geometry/partitioning/BSPTree;)Lorg/hipparchus/geometry/partitioning/AbstractRegion;");
            mids$[mid_checkPoint_b7d493d130487009] = env->getMethodID(cls, "checkPoint", "(Lorg/hipparchus/geometry/Point;)Lorg/hipparchus/geometry/partitioning/Region$Location;");
            mids$[mid_checkPoint_76eec5df4f8e9f91] = env->getMethodID(cls, "checkPoint", "(Lorg/hipparchus/geometry/Vector;)Lorg/hipparchus/geometry/partitioning/Region$Location;");
            mids$[mid_contains_5b003aec900d5457] = env->getMethodID(cls, "contains", "(Lorg/hipparchus/geometry/partitioning/Region;)Z");
            mids$[mid_copySelf_120f692cdf258b6b] = env->getMethodID(cls, "copySelf", "()Lorg/hipparchus/geometry/partitioning/AbstractRegion;");
            mids$[mid_getBarycenter_4b90e5ca2d7b0c50] = env->getMethodID(cls, "getBarycenter", "()Lorg/hipparchus/geometry/Point;");
            mids$[mid_getBoundarySize_b74f83833fdad017] = env->getMethodID(cls, "getBoundarySize", "()D");
            mids$[mid_getSize_b74f83833fdad017] = env->getMethodID(cls, "getSize", "()D");
            mids$[mid_getTolerance_b74f83833fdad017] = env->getMethodID(cls, "getTolerance", "()D");
            mids$[mid_getTree_cfe73ad9acef8c7c] = env->getMethodID(cls, "getTree", "(Z)Lorg/hipparchus/geometry/partitioning/BSPTree;");
            mids$[mid_intersection_263a5980faef7dc3] = env->getMethodID(cls, "intersection", "(Lorg/hipparchus/geometry/partitioning/SubHyperplane;)Lorg/hipparchus/geometry/partitioning/SubHyperplane;");
            mids$[mid_isEmpty_9ab94ac1dc23b105] = env->getMethodID(cls, "isEmpty", "()Z");
            mids$[mid_isEmpty_0c8ea3f1072db098] = env->getMethodID(cls, "isEmpty", "(Lorg/hipparchus/geometry/partitioning/BSPTree;)Z");
            mids$[mid_isFull_9ab94ac1dc23b105] = env->getMethodID(cls, "isFull", "()Z");
            mids$[mid_isFull_0c8ea3f1072db098] = env->getMethodID(cls, "isFull", "(Lorg/hipparchus/geometry/partitioning/BSPTree;)Z");
            mids$[mid_projectToBoundary_dcacfc1bc354b9c2] = env->getMethodID(cls, "projectToBoundary", "(Lorg/hipparchus/geometry/Point;)Lorg/hipparchus/geometry/partitioning/BoundaryProjection;");
            mids$[mid_checkPoint_ac92bd09349b2beb] = env->getMethodID(cls, "checkPoint", "(Lorg/hipparchus/geometry/partitioning/BSPTree;Lorg/hipparchus/geometry/Point;)Lorg/hipparchus/geometry/partitioning/Region$Location;");
            mids$[mid_checkPoint_82d45aa9cd8e9e11] = env->getMethodID(cls, "checkPoint", "(Lorg/hipparchus/geometry/partitioning/BSPTree;Lorg/hipparchus/geometry/Vector;)Lorg/hipparchus/geometry/partitioning/Region$Location;");
            mids$[mid_computeGeometricalProperties_a1fa5dae97ea5ed2] = env->getMethodID(cls, "computeGeometricalProperties", "()V");
            mids$[mid_setBarycenter_2b4eca658e1fd4fe] = env->getMethodID(cls, "setBarycenter", "(Lorg/hipparchus/geometry/Point;)V");
            mids$[mid_setBarycenter_4a734be168570bee] = env->getMethodID(cls, "setBarycenter", "(Lorg/hipparchus/geometry/Vector;)V");
            mids$[mid_setSize_8ba9fe7a847cecad] = env->getMethodID(cls, "setSize", "(D)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AbstractRegion::AbstractRegion(const JArray< ::org::hipparchus::geometry::partitioning::Hyperplane > & a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_28c58d4b5ab18011, a0.this$, a1)) {}

        AbstractRegion AbstractRegion::applyTransform(const ::org::hipparchus::geometry::partitioning::Transform & a0) const
        {
          return AbstractRegion(env->callObjectMethod(this$, mids$[mid_applyTransform_66e0444279d1d22f], a0.this$));
        }

        AbstractRegion AbstractRegion::buildNew(const ::org::hipparchus::geometry::partitioning::BSPTree & a0) const
        {
          return AbstractRegion(env->callObjectMethod(this$, mids$[mid_buildNew_a544652f009b15b3], a0.this$));
        }

        ::org::hipparchus::geometry::partitioning::Region$Location AbstractRegion::checkPoint(const ::org::hipparchus::geometry::Point & a0) const
        {
          return ::org::hipparchus::geometry::partitioning::Region$Location(env->callObjectMethod(this$, mids$[mid_checkPoint_b7d493d130487009], a0.this$));
        }

        ::org::hipparchus::geometry::partitioning::Region$Location AbstractRegion::checkPoint(const ::org::hipparchus::geometry::Vector & a0) const
        {
          return ::org::hipparchus::geometry::partitioning::Region$Location(env->callObjectMethod(this$, mids$[mid_checkPoint_76eec5df4f8e9f91], a0.this$));
        }

        jboolean AbstractRegion::contains(const ::org::hipparchus::geometry::partitioning::Region & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_contains_5b003aec900d5457], a0.this$);
        }

        AbstractRegion AbstractRegion::copySelf() const
        {
          return AbstractRegion(env->callObjectMethod(this$, mids$[mid_copySelf_120f692cdf258b6b]));
        }

        ::org::hipparchus::geometry::Point AbstractRegion::getBarycenter() const
        {
          return ::org::hipparchus::geometry::Point(env->callObjectMethod(this$, mids$[mid_getBarycenter_4b90e5ca2d7b0c50]));
        }

        jdouble AbstractRegion::getBoundarySize() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getBoundarySize_b74f83833fdad017]);
        }

        jdouble AbstractRegion::getSize() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSize_b74f83833fdad017]);
        }

        jdouble AbstractRegion::getTolerance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getTolerance_b74f83833fdad017]);
        }

        ::org::hipparchus::geometry::partitioning::BSPTree AbstractRegion::getTree(jboolean a0) const
        {
          return ::org::hipparchus::geometry::partitioning::BSPTree(env->callObjectMethod(this$, mids$[mid_getTree_cfe73ad9acef8c7c], a0));
        }

        ::org::hipparchus::geometry::partitioning::SubHyperplane AbstractRegion::intersection(const ::org::hipparchus::geometry::partitioning::SubHyperplane & a0) const
        {
          return ::org::hipparchus::geometry::partitioning::SubHyperplane(env->callObjectMethod(this$, mids$[mid_intersection_263a5980faef7dc3], a0.this$));
        }

        jboolean AbstractRegion::isEmpty() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isEmpty_9ab94ac1dc23b105]);
        }

        jboolean AbstractRegion::isEmpty(const ::org::hipparchus::geometry::partitioning::BSPTree & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_isEmpty_0c8ea3f1072db098], a0.this$);
        }

        jboolean AbstractRegion::isFull() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isFull_9ab94ac1dc23b105]);
        }

        jboolean AbstractRegion::isFull(const ::org::hipparchus::geometry::partitioning::BSPTree & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_isFull_0c8ea3f1072db098], a0.this$);
        }

        ::org::hipparchus::geometry::partitioning::BoundaryProjection AbstractRegion::projectToBoundary(const ::org::hipparchus::geometry::Point & a0) const
        {
          return ::org::hipparchus::geometry::partitioning::BoundaryProjection(env->callObjectMethod(this$, mids$[mid_projectToBoundary_dcacfc1bc354b9c2], a0.this$));
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
        static PyObject *t_AbstractRegion_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractRegion_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractRegion_of_(t_AbstractRegion *self, PyObject *args);
        static int t_AbstractRegion_init_(t_AbstractRegion *self, PyObject *args, PyObject *kwds);
        static PyObject *t_AbstractRegion_applyTransform(t_AbstractRegion *self, PyObject *arg);
        static PyObject *t_AbstractRegion_buildNew(t_AbstractRegion *self, PyObject *arg);
        static PyObject *t_AbstractRegion_checkPoint(t_AbstractRegion *self, PyObject *args);
        static PyObject *t_AbstractRegion_contains(t_AbstractRegion *self, PyObject *arg);
        static PyObject *t_AbstractRegion_copySelf(t_AbstractRegion *self);
        static PyObject *t_AbstractRegion_getBarycenter(t_AbstractRegion *self);
        static PyObject *t_AbstractRegion_getBoundarySize(t_AbstractRegion *self);
        static PyObject *t_AbstractRegion_getSize(t_AbstractRegion *self);
        static PyObject *t_AbstractRegion_getTolerance(t_AbstractRegion *self);
        static PyObject *t_AbstractRegion_getTree(t_AbstractRegion *self, PyObject *arg);
        static PyObject *t_AbstractRegion_intersection(t_AbstractRegion *self, PyObject *arg);
        static PyObject *t_AbstractRegion_isEmpty(t_AbstractRegion *self, PyObject *args);
        static PyObject *t_AbstractRegion_isFull(t_AbstractRegion *self, PyObject *args);
        static PyObject *t_AbstractRegion_projectToBoundary(t_AbstractRegion *self, PyObject *arg);
        static PyObject *t_AbstractRegion_get__barycenter(t_AbstractRegion *self, void *data);
        static PyObject *t_AbstractRegion_get__boundarySize(t_AbstractRegion *self, void *data);
        static PyObject *t_AbstractRegion_get__empty(t_AbstractRegion *self, void *data);
        static PyObject *t_AbstractRegion_get__full(t_AbstractRegion *self, void *data);
        static PyObject *t_AbstractRegion_get__size(t_AbstractRegion *self, void *data);
        static PyObject *t_AbstractRegion_get__tolerance(t_AbstractRegion *self, void *data);
        static PyObject *t_AbstractRegion_get__parameters_(t_AbstractRegion *self, void *data);
        static PyGetSetDef t_AbstractRegion__fields_[] = {
          DECLARE_GET_FIELD(t_AbstractRegion, barycenter),
          DECLARE_GET_FIELD(t_AbstractRegion, boundarySize),
          DECLARE_GET_FIELD(t_AbstractRegion, empty),
          DECLARE_GET_FIELD(t_AbstractRegion, full),
          DECLARE_GET_FIELD(t_AbstractRegion, size),
          DECLARE_GET_FIELD(t_AbstractRegion, tolerance),
          DECLARE_GET_FIELD(t_AbstractRegion, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AbstractRegion__methods_[] = {
          DECLARE_METHOD(t_AbstractRegion, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractRegion, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractRegion, of_, METH_VARARGS),
          DECLARE_METHOD(t_AbstractRegion, applyTransform, METH_O),
          DECLARE_METHOD(t_AbstractRegion, buildNew, METH_O),
          DECLARE_METHOD(t_AbstractRegion, checkPoint, METH_VARARGS),
          DECLARE_METHOD(t_AbstractRegion, contains, METH_O),
          DECLARE_METHOD(t_AbstractRegion, copySelf, METH_NOARGS),
          DECLARE_METHOD(t_AbstractRegion, getBarycenter, METH_NOARGS),
          DECLARE_METHOD(t_AbstractRegion, getBoundarySize, METH_NOARGS),
          DECLARE_METHOD(t_AbstractRegion, getSize, METH_NOARGS),
          DECLARE_METHOD(t_AbstractRegion, getTolerance, METH_NOARGS),
          DECLARE_METHOD(t_AbstractRegion, getTree, METH_O),
          DECLARE_METHOD(t_AbstractRegion, intersection, METH_O),
          DECLARE_METHOD(t_AbstractRegion, isEmpty, METH_VARARGS),
          DECLARE_METHOD(t_AbstractRegion, isFull, METH_VARARGS),
          DECLARE_METHOD(t_AbstractRegion, projectToBoundary, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractRegion)[] = {
          { Py_tp_methods, t_AbstractRegion__methods_ },
          { Py_tp_init, (void *) t_AbstractRegion_init_ },
          { Py_tp_getset, t_AbstractRegion__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractRegion)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AbstractRegion, t_AbstractRegion, AbstractRegion);
        PyObject *t_AbstractRegion::wrap_Object(const AbstractRegion& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_AbstractRegion::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AbstractRegion *self = (t_AbstractRegion *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        PyObject *t_AbstractRegion::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_AbstractRegion::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AbstractRegion *self = (t_AbstractRegion *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        void t_AbstractRegion::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractRegion), &PY_TYPE_DEF(AbstractRegion), module, "AbstractRegion", 0);
        }

        void t_AbstractRegion::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractRegion), "class_", make_descriptor(AbstractRegion::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractRegion), "wrapfn_", make_descriptor(t_AbstractRegion::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractRegion), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AbstractRegion_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractRegion::initializeClass, 1)))
            return NULL;
          return t_AbstractRegion::wrap_Object(AbstractRegion(((t_AbstractRegion *) arg)->object.this$));
        }
        static PyObject *t_AbstractRegion_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractRegion::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AbstractRegion_of_(t_AbstractRegion *self, PyObject *args)
        {
          if (!parseArg(args, "T", 2, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_AbstractRegion_init_(t_AbstractRegion *self, PyObject *args, PyObject *kwds)
        {
          JArray< ::org::hipparchus::geometry::partitioning::Hyperplane > a0((jobject) NULL);
          PyTypeObject **p0;
          jdouble a1;
          AbstractRegion object((jobject) NULL);

          if (!parseArgs(args, "[KD", ::org::hipparchus::geometry::partitioning::Hyperplane::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_Hyperplane::parameters_, &a1))
          {
            INT_CALL(object = AbstractRegion(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_AbstractRegion_applyTransform(t_AbstractRegion *self, PyObject *arg)
        {
          ::org::hipparchus::geometry::partitioning::Transform a0((jobject) NULL);
          PyTypeObject **p0;
          AbstractRegion result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::geometry::partitioning::Transform::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_Transform::parameters_))
          {
            OBJ_CALL(result = self->object.applyTransform(a0));
            return t_AbstractRegion::wrap_Object(result, self->parameters[0], self->parameters[1]);
          }

          PyErr_SetArgsError((PyObject *) self, "applyTransform", arg);
          return NULL;
        }

        static PyObject *t_AbstractRegion_buildNew(t_AbstractRegion *self, PyObject *arg)
        {
          ::org::hipparchus::geometry::partitioning::BSPTree a0((jobject) NULL);
          PyTypeObject **p0;
          AbstractRegion result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::geometry::partitioning::BSPTree::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_BSPTree::parameters_))
          {
            OBJ_CALL(result = self->object.buildNew(a0));
            return t_AbstractRegion::wrap_Object(result, self->parameters[0], self->parameters[1]);
          }

          PyErr_SetArgsError((PyObject *) self, "buildNew", arg);
          return NULL;
        }

        static PyObject *t_AbstractRegion_checkPoint(t_AbstractRegion *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::hipparchus::geometry::Point a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::geometry::partitioning::Region$Location result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_))
              {
                OBJ_CALL(result = self->object.checkPoint(a0));
                return ::org::hipparchus::geometry::partitioning::t_Region$Location::wrap_Object(result);
              }
            }
            {
              ::org::hipparchus::geometry::Vector a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::geometry::partitioning::Region$Location result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::geometry::Vector::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Vector::parameters_))
              {
                OBJ_CALL(result = self->object.checkPoint(a0));
                return ::org::hipparchus::geometry::partitioning::t_Region$Location::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "checkPoint", args);
          return NULL;
        }

        static PyObject *t_AbstractRegion_contains(t_AbstractRegion *self, PyObject *arg)
        {
          ::org::hipparchus::geometry::partitioning::Region a0((jobject) NULL);
          PyTypeObject **p0;
          jboolean result;

          if (!parseArg(arg, "K", ::org::hipparchus::geometry::partitioning::Region::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_Region::parameters_))
          {
            OBJ_CALL(result = self->object.contains(a0));
            Py_RETURN_BOOL(result);
          }

          PyErr_SetArgsError((PyObject *) self, "contains", arg);
          return NULL;
        }

        static PyObject *t_AbstractRegion_copySelf(t_AbstractRegion *self)
        {
          AbstractRegion result((jobject) NULL);
          OBJ_CALL(result = self->object.copySelf());
          return t_AbstractRegion::wrap_Object(result, self->parameters[0], self->parameters[1]);
        }

        static PyObject *t_AbstractRegion_getBarycenter(t_AbstractRegion *self)
        {
          ::org::hipparchus::geometry::Point result((jobject) NULL);
          OBJ_CALL(result = self->object.getBarycenter());
          return ::org::hipparchus::geometry::t_Point::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_AbstractRegion_getBoundarySize(t_AbstractRegion *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getBoundarySize());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_AbstractRegion_getSize(t_AbstractRegion *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getSize());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_AbstractRegion_getTolerance(t_AbstractRegion *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getTolerance());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_AbstractRegion_getTree(t_AbstractRegion *self, PyObject *arg)
        {
          jboolean a0;
          ::org::hipparchus::geometry::partitioning::BSPTree result((jobject) NULL);

          if (!parseArg(arg, "Z", &a0))
          {
            OBJ_CALL(result = self->object.getTree(a0));
            return ::org::hipparchus::geometry::partitioning::t_BSPTree::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "getTree", arg);
          return NULL;
        }

        static PyObject *t_AbstractRegion_intersection(t_AbstractRegion *self, PyObject *arg)
        {
          ::org::hipparchus::geometry::partitioning::SubHyperplane a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::geometry::partitioning::SubHyperplane result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::geometry::partitioning::SubHyperplane::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_SubHyperplane::parameters_))
          {
            OBJ_CALL(result = self->object.intersection(a0));
            return ::org::hipparchus::geometry::partitioning::t_SubHyperplane::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "intersection", arg);
          return NULL;
        }

        static PyObject *t_AbstractRegion_isEmpty(t_AbstractRegion *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              jboolean result;
              OBJ_CALL(result = self->object.isEmpty());
              Py_RETURN_BOOL(result);
            }
            break;
           case 1:
            {
              ::org::hipparchus::geometry::partitioning::BSPTree a0((jobject) NULL);
              PyTypeObject **p0;
              jboolean result;

              if (!parseArgs(args, "K", ::org::hipparchus::geometry::partitioning::BSPTree::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_BSPTree::parameters_))
              {
                OBJ_CALL(result = self->object.isEmpty(a0));
                Py_RETURN_BOOL(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "isEmpty", args);
          return NULL;
        }

        static PyObject *t_AbstractRegion_isFull(t_AbstractRegion *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              jboolean result;
              OBJ_CALL(result = self->object.isFull());
              Py_RETURN_BOOL(result);
            }
            break;
           case 1:
            {
              ::org::hipparchus::geometry::partitioning::BSPTree a0((jobject) NULL);
              PyTypeObject **p0;
              jboolean result;

              if (!parseArgs(args, "K", ::org::hipparchus::geometry::partitioning::BSPTree::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_BSPTree::parameters_))
              {
                OBJ_CALL(result = self->object.isFull(a0));
                Py_RETURN_BOOL(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "isFull", args);
          return NULL;
        }

        static PyObject *t_AbstractRegion_projectToBoundary(t_AbstractRegion *self, PyObject *arg)
        {
          ::org::hipparchus::geometry::Point a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::geometry::partitioning::BoundaryProjection result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_))
          {
            OBJ_CALL(result = self->object.projectToBoundary(a0));
            return ::org::hipparchus::geometry::partitioning::t_BoundaryProjection::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "projectToBoundary", arg);
          return NULL;
        }
        static PyObject *t_AbstractRegion_get__parameters_(t_AbstractRegion *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_AbstractRegion_get__barycenter(t_AbstractRegion *self, void *data)
        {
          ::org::hipparchus::geometry::Point value((jobject) NULL);
          OBJ_CALL(value = self->object.getBarycenter());
          return ::org::hipparchus::geometry::t_Point::wrap_Object(value);
        }

        static PyObject *t_AbstractRegion_get__boundarySize(t_AbstractRegion *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getBoundarySize());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_AbstractRegion_get__empty(t_AbstractRegion *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isEmpty());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_AbstractRegion_get__full(t_AbstractRegion *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isFull());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_AbstractRegion_get__size(t_AbstractRegion *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSize());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_AbstractRegion_get__tolerance(t_AbstractRegion *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getTolerance());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/J2SquaredModel.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/DSSTJ2SquaredClosedFormContext.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/FieldDSSTJ2SquaredClosedFormContext.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {

            ::java::lang::Class *J2SquaredModel::class$ = NULL;
            jmethodID *J2SquaredModel::mids$ = NULL;
            bool J2SquaredModel::live$ = false;

            jclass J2SquaredModel::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/forces/J2SquaredModel");

                mids$ = new jmethodID[max_mid];
                mids$[mid_computeMeanEquinoctialSecondOrderTerms_9e21a8e72403ad02] = env->getMethodID(cls, "computeMeanEquinoctialSecondOrderTerms", "(Lorg/orekit/propagation/semianalytical/dsst/forces/DSSTJ2SquaredClosedFormContext;)[D");
                mids$[mid_computeMeanEquinoctialSecondOrderTerms_4a156b883cf16de2] = env->getMethodID(cls, "computeMeanEquinoctialSecondOrderTerms", "(Lorg/orekit/propagation/semianalytical/dsst/forces/FieldDSSTJ2SquaredClosedFormContext;)[Lorg/hipparchus/CalculusFieldElement;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            JArray< jdouble > J2SquaredModel::computeMeanEquinoctialSecondOrderTerms(const ::org::orekit::propagation::semianalytical::dsst::forces::DSSTJ2SquaredClosedFormContext & a0) const
            {
              return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_computeMeanEquinoctialSecondOrderTerms_9e21a8e72403ad02], a0.this$));
            }

            JArray< ::org::hipparchus::CalculusFieldElement > J2SquaredModel::computeMeanEquinoctialSecondOrderTerms(const ::org::orekit::propagation::semianalytical::dsst::forces::FieldDSSTJ2SquaredClosedFormContext & a0) const
            {
              return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_computeMeanEquinoctialSecondOrderTerms_4a156b883cf16de2], a0.this$));
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
            static PyObject *t_J2SquaredModel_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_J2SquaredModel_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_J2SquaredModel_computeMeanEquinoctialSecondOrderTerms(t_J2SquaredModel *self, PyObject *args);

            static PyMethodDef t_J2SquaredModel__methods_[] = {
              DECLARE_METHOD(t_J2SquaredModel, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_J2SquaredModel, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_J2SquaredModel, computeMeanEquinoctialSecondOrderTerms, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(J2SquaredModel)[] = {
              { Py_tp_methods, t_J2SquaredModel__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(J2SquaredModel)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(J2SquaredModel, t_J2SquaredModel, J2SquaredModel);

            void t_J2SquaredModel::install(PyObject *module)
            {
              installType(&PY_TYPE(J2SquaredModel), &PY_TYPE_DEF(J2SquaredModel), module, "J2SquaredModel", 0);
            }

            void t_J2SquaredModel::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(J2SquaredModel), "class_", make_descriptor(J2SquaredModel::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(J2SquaredModel), "wrapfn_", make_descriptor(t_J2SquaredModel::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(J2SquaredModel), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_J2SquaredModel_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, J2SquaredModel::initializeClass, 1)))
                return NULL;
              return t_J2SquaredModel::wrap_Object(J2SquaredModel(((t_J2SquaredModel *) arg)->object.this$));
            }
            static PyObject *t_J2SquaredModel_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, J2SquaredModel::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_J2SquaredModel_computeMeanEquinoctialSecondOrderTerms(t_J2SquaredModel *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 1:
                {
                  ::org::orekit::propagation::semianalytical::dsst::forces::DSSTJ2SquaredClosedFormContext a0((jobject) NULL);
                  JArray< jdouble > result((jobject) NULL);

                  if (!parseArgs(args, "k", ::org::orekit::propagation::semianalytical::dsst::forces::DSSTJ2SquaredClosedFormContext::initializeClass, &a0))
                  {
                    OBJ_CALL(result = self->object.computeMeanEquinoctialSecondOrderTerms(a0));
                    return result.wrap();
                  }
                }
                {
                  ::org::orekit::propagation::semianalytical::dsst::forces::FieldDSSTJ2SquaredClosedFormContext a0((jobject) NULL);
                  PyTypeObject **p0;
                  JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

                  if (!parseArgs(args, "K", ::org::orekit::propagation::semianalytical::dsst::forces::FieldDSSTJ2SquaredClosedFormContext::initializeClass, &a0, &p0, ::org::orekit::propagation::semianalytical::dsst::forces::t_FieldDSSTJ2SquaredClosedFormContext::parameters_))
                  {
                    OBJ_CALL(result = self->object.computeMeanEquinoctialSecondOrderTerms(a0));
                    return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "computeMeanEquinoctialSecondOrderTerms", args);
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
#include "org/orekit/propagation/analytical/tle/SDP4.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace tle {

          ::java::lang::Class *SDP4::class$ = NULL;
          jmethodID *SDP4::mids$ = NULL;
          bool SDP4::live$ = false;

          jclass SDP4::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/tle/SDP4");

              mids$ = new jmethodID[max_mid];
              mids$[mid_thetaG_fd347811007a6ba3] = env->getMethodID(cls, "thetaG", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_sxpInitialize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "sxpInitialize", "()V");
              mids$[mid_sxpPropagate_8ba9fe7a847cecad] = env->getMethodID(cls, "sxpPropagate", "(D)V");
              mids$[mid_luniSolarTermsComputation_a1fa5dae97ea5ed2] = env->getMethodID(cls, "luniSolarTermsComputation", "()V");
              mids$[mid_deepSecularEffects_8ba9fe7a847cecad] = env->getMethodID(cls, "deepSecularEffects", "(D)V");
              mids$[mid_deepPeriodicEffects_8ba9fe7a847cecad] = env->getMethodID(cls, "deepPeriodicEffects", "(D)V");

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
    namespace propagation {
      namespace analytical {
        namespace tle {
          static PyObject *t_SDP4_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SDP4_instance_(PyTypeObject *type, PyObject *arg);

          static PyMethodDef t_SDP4__methods_[] = {
            DECLARE_METHOD(t_SDP4, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SDP4, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SDP4)[] = {
            { Py_tp_methods, t_SDP4__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SDP4)[] = {
            &PY_TYPE_DEF(::org::orekit::propagation::analytical::tle::TLEPropagator),
            NULL
          };

          DEFINE_TYPE(SDP4, t_SDP4, SDP4);

          void t_SDP4::install(PyObject *module)
          {
            installType(&PY_TYPE(SDP4), &PY_TYPE_DEF(SDP4), module, "SDP4", 0);
          }

          void t_SDP4::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SDP4), "class_", make_descriptor(SDP4::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SDP4), "wrapfn_", make_descriptor(t_SDP4::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SDP4), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SDP4_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SDP4::initializeClass, 1)))
              return NULL;
            return t_SDP4::wrap_Object(SDP4(((t_SDP4 *) arg)->object.this$));
          }
          static PyObject *t_SDP4_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SDP4::initializeClass, 0))
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
#include "org/orekit/data/DataSource.h"
#include "org/orekit/data/DataSource$StreamOpener.h"
#include "java/io/File.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/data/DataSource$Opener.h"
#include "org/orekit/data/DataSource$ReaderOpener.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *DataSource::class$ = NULL;
      jmethodID *DataSource::mids$ = NULL;
      bool DataSource::live$ = false;

      jclass DataSource::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/DataSource");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_7e1d51614d5d6a43] = env->getMethodID(cls, "<init>", "(Ljava/io/File;)V");
          mids$[mid_init$_734b91ac30d5f9b4] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
          mids$[mid_init$_11e27b54ddfbe464] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/data/DataSource$ReaderOpener;)V");
          mids$[mid_init$_01c9671fbea49908] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/data/DataSource$StreamOpener;)V");
          mids$[mid_getName_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_getOpener_6ab2f1362b4cc067] = env->getMethodID(cls, "getOpener", "()Lorg/orekit/data/DataSource$Opener;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      DataSource::DataSource(const ::java::io::File & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7e1d51614d5d6a43, a0.this$)) {}

      DataSource::DataSource(const ::java::lang::String & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_734b91ac30d5f9b4, a0.this$)) {}

      DataSource::DataSource(const ::java::lang::String & a0, const ::org::orekit::data::DataSource$ReaderOpener & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_11e27b54ddfbe464, a0.this$, a1.this$)) {}

      DataSource::DataSource(const ::java::lang::String & a0, const ::org::orekit::data::DataSource$StreamOpener & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_01c9671fbea49908, a0.this$, a1.this$)) {}

      ::java::lang::String DataSource::getName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_1c1fa1e935d6cdcf]));
      }

      ::org::orekit::data::DataSource$Opener DataSource::getOpener() const
      {
        return ::org::orekit::data::DataSource$Opener(env->callObjectMethod(this$, mids$[mid_getOpener_6ab2f1362b4cc067]));
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
      static PyObject *t_DataSource_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DataSource_instance_(PyTypeObject *type, PyObject *arg);
      static int t_DataSource_init_(t_DataSource *self, PyObject *args, PyObject *kwds);
      static PyObject *t_DataSource_getName(t_DataSource *self);
      static PyObject *t_DataSource_getOpener(t_DataSource *self);
      static PyObject *t_DataSource_get__name(t_DataSource *self, void *data);
      static PyObject *t_DataSource_get__opener(t_DataSource *self, void *data);
      static PyGetSetDef t_DataSource__fields_[] = {
        DECLARE_GET_FIELD(t_DataSource, name),
        DECLARE_GET_FIELD(t_DataSource, opener),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_DataSource__methods_[] = {
        DECLARE_METHOD(t_DataSource, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DataSource, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DataSource, getName, METH_NOARGS),
        DECLARE_METHOD(t_DataSource, getOpener, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(DataSource)[] = {
        { Py_tp_methods, t_DataSource__methods_ },
        { Py_tp_init, (void *) t_DataSource_init_ },
        { Py_tp_getset, t_DataSource__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(DataSource)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(DataSource, t_DataSource, DataSource);

      void t_DataSource::install(PyObject *module)
      {
        installType(&PY_TYPE(DataSource), &PY_TYPE_DEF(DataSource), module, "DataSource", 0);
        PyObject_SetAttrString((PyObject *) PY_TYPE(DataSource), "StreamOpener", make_descriptor(&PY_TYPE_DEF(DataSource$StreamOpener)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DataSource), "Opener", make_descriptor(&PY_TYPE_DEF(DataSource$Opener)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DataSource), "ReaderOpener", make_descriptor(&PY_TYPE_DEF(DataSource$ReaderOpener)));
      }

      void t_DataSource::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(DataSource), "class_", make_descriptor(DataSource::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DataSource), "wrapfn_", make_descriptor(t_DataSource::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DataSource), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_DataSource_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, DataSource::initializeClass, 1)))
          return NULL;
        return t_DataSource::wrap_Object(DataSource(((t_DataSource *) arg)->object.this$));
      }
      static PyObject *t_DataSource_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, DataSource::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_DataSource_init_(t_DataSource *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::java::io::File a0((jobject) NULL);
            DataSource object((jobject) NULL);

            if (!parseArgs(args, "k", ::java::io::File::initializeClass, &a0))
            {
              INT_CALL(object = DataSource(a0));
              self->object = object;
              break;
            }
          }
          {
            ::java::lang::String a0((jobject) NULL);
            DataSource object((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              INT_CALL(object = DataSource(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::java::lang::String a0((jobject) NULL);
            ::org::orekit::data::DataSource$ReaderOpener a1((jobject) NULL);
            DataSource object((jobject) NULL);

            if (!parseArgs(args, "sk", ::org::orekit::data::DataSource$ReaderOpener::initializeClass, &a0, &a1))
            {
              INT_CALL(object = DataSource(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::java::lang::String a0((jobject) NULL);
            ::org::orekit::data::DataSource$StreamOpener a1((jobject) NULL);
            DataSource object((jobject) NULL);

            if (!parseArgs(args, "sk", ::org::orekit::data::DataSource$StreamOpener::initializeClass, &a0, &a1))
            {
              INT_CALL(object = DataSource(a0, a1));
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

      static PyObject *t_DataSource_getName(t_DataSource *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getName());
        return j2p(result);
      }

      static PyObject *t_DataSource_getOpener(t_DataSource *self)
      {
        ::org::orekit::data::DataSource$Opener result((jobject) NULL);
        OBJ_CALL(result = self->object.getOpener());
        return ::org::orekit::data::t_DataSource$Opener::wrap_Object(result);
      }

      static PyObject *t_DataSource_get__name(t_DataSource *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getName());
        return j2p(value);
      }

      static PyObject *t_DataSource_get__opener(t_DataSource *self, void *data)
      {
        ::org::orekit::data::DataSource$Opener value((jobject) NULL);
        OBJ_CALL(value = self->object.getOpener());
        return ::org::orekit::data::t_DataSource$Opener::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/ValueAndJacobianFunction.h"
#include "org/hipparchus/linear/RealVector.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace vector {
          namespace leastsquares {

            ::java::lang::Class *ValueAndJacobianFunction::class$ = NULL;
            jmethodID *ValueAndJacobianFunction::mids$ = NULL;
            bool ValueAndJacobianFunction::live$ = false;

            jclass ValueAndJacobianFunction::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/vector/leastsquares/ValueAndJacobianFunction");

                mids$ = new jmethodID[max_mid];
                mids$[mid_computeJacobian_f4daeeaa8c92c416] = env->getMethodID(cls, "computeJacobian", "([D)Lorg/hipparchus/linear/RealMatrix;");
                mids$[mid_computeValue_96f31e3adf588399] = env->getMethodID(cls, "computeValue", "([D)Lorg/hipparchus/linear/RealVector;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ::org::hipparchus::linear::RealMatrix ValueAndJacobianFunction::computeJacobian(const JArray< jdouble > & a0) const
            {
              return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_computeJacobian_f4daeeaa8c92c416], a0.this$));
            }

            ::org::hipparchus::linear::RealVector ValueAndJacobianFunction::computeValue(const JArray< jdouble > & a0) const
            {
              return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_computeValue_96f31e3adf588399], a0.this$));
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
            static PyObject *t_ValueAndJacobianFunction_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ValueAndJacobianFunction_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ValueAndJacobianFunction_computeJacobian(t_ValueAndJacobianFunction *self, PyObject *arg);
            static PyObject *t_ValueAndJacobianFunction_computeValue(t_ValueAndJacobianFunction *self, PyObject *arg);

            static PyMethodDef t_ValueAndJacobianFunction__methods_[] = {
              DECLARE_METHOD(t_ValueAndJacobianFunction, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ValueAndJacobianFunction, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ValueAndJacobianFunction, computeJacobian, METH_O),
              DECLARE_METHOD(t_ValueAndJacobianFunction, computeValue, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ValueAndJacobianFunction)[] = {
              { Py_tp_methods, t_ValueAndJacobianFunction__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ValueAndJacobianFunction)[] = {
              &PY_TYPE_DEF(::org::hipparchus::optim::nonlinear::vector::leastsquares::MultivariateJacobianFunction),
              NULL
            };

            DEFINE_TYPE(ValueAndJacobianFunction, t_ValueAndJacobianFunction, ValueAndJacobianFunction);

            void t_ValueAndJacobianFunction::install(PyObject *module)
            {
              installType(&PY_TYPE(ValueAndJacobianFunction), &PY_TYPE_DEF(ValueAndJacobianFunction), module, "ValueAndJacobianFunction", 0);
            }

            void t_ValueAndJacobianFunction::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ValueAndJacobianFunction), "class_", make_descriptor(ValueAndJacobianFunction::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ValueAndJacobianFunction), "wrapfn_", make_descriptor(t_ValueAndJacobianFunction::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ValueAndJacobianFunction), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ValueAndJacobianFunction_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ValueAndJacobianFunction::initializeClass, 1)))
                return NULL;
              return t_ValueAndJacobianFunction::wrap_Object(ValueAndJacobianFunction(((t_ValueAndJacobianFunction *) arg)->object.this$));
            }
            static PyObject *t_ValueAndJacobianFunction_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ValueAndJacobianFunction::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_ValueAndJacobianFunction_computeJacobian(t_ValueAndJacobianFunction *self, PyObject *arg)
            {
              JArray< jdouble > a0((jobject) NULL);
              ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

              if (!parseArg(arg, "[D", &a0))
              {
                OBJ_CALL(result = self->object.computeJacobian(a0));
                return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "computeJacobian", arg);
              return NULL;
            }

            static PyObject *t_ValueAndJacobianFunction_computeValue(t_ValueAndJacobianFunction *self, PyObject *arg)
            {
              JArray< jdouble > a0((jobject) NULL);
              ::org::hipparchus::linear::RealVector result((jobject) NULL);

              if (!parseArg(arg, "[D", &a0))
              {
                OBJ_CALL(result = self->object.computeValue(a0));
                return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "computeValue", arg);
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
#include "org/orekit/files/rinex/clock/RinexClock$ClockDataType.h"
#include "org/orekit/errors/OrekitIllegalArgumentException.h"
#include "java/lang/String.h"
#include "org/orekit/files/rinex/clock/RinexClock$ClockDataType.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace clock {

          ::java::lang::Class *RinexClock$ClockDataType::class$ = NULL;
          jmethodID *RinexClock$ClockDataType::mids$ = NULL;
          bool RinexClock$ClockDataType::live$ = false;
          RinexClock$ClockDataType *RinexClock$ClockDataType::AR = NULL;
          RinexClock$ClockDataType *RinexClock$ClockDataType::AS = NULL;
          RinexClock$ClockDataType *RinexClock$ClockDataType::CR = NULL;
          RinexClock$ClockDataType *RinexClock$ClockDataType::DR = NULL;
          RinexClock$ClockDataType *RinexClock$ClockDataType::MS = NULL;

          jclass RinexClock$ClockDataType::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/rinex/clock/RinexClock$ClockDataType");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getKey_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getKey", "()Ljava/lang/String;");
              mids$[mid_parseClockDataType_dcaf1464da324041] = env->getStaticMethodID(cls, "parseClockDataType", "(Ljava/lang/String;)Lorg/orekit/files/rinex/clock/RinexClock$ClockDataType;");
              mids$[mid_valueOf_dcaf1464da324041] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/rinex/clock/RinexClock$ClockDataType;");
              mids$[mid_values_4a99278d55545989] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/rinex/clock/RinexClock$ClockDataType;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              AR = new RinexClock$ClockDataType(env->getStaticObjectField(cls, "AR", "Lorg/orekit/files/rinex/clock/RinexClock$ClockDataType;"));
              AS = new RinexClock$ClockDataType(env->getStaticObjectField(cls, "AS", "Lorg/orekit/files/rinex/clock/RinexClock$ClockDataType;"));
              CR = new RinexClock$ClockDataType(env->getStaticObjectField(cls, "CR", "Lorg/orekit/files/rinex/clock/RinexClock$ClockDataType;"));
              DR = new RinexClock$ClockDataType(env->getStaticObjectField(cls, "DR", "Lorg/orekit/files/rinex/clock/RinexClock$ClockDataType;"));
              MS = new RinexClock$ClockDataType(env->getStaticObjectField(cls, "MS", "Lorg/orekit/files/rinex/clock/RinexClock$ClockDataType;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::java::lang::String RinexClock$ClockDataType::getKey() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getKey_1c1fa1e935d6cdcf]));
          }

          RinexClock$ClockDataType RinexClock$ClockDataType::parseClockDataType(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return RinexClock$ClockDataType(env->callStaticObjectMethod(cls, mids$[mid_parseClockDataType_dcaf1464da324041], a0.this$));
          }

          RinexClock$ClockDataType RinexClock$ClockDataType::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return RinexClock$ClockDataType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_dcaf1464da324041], a0.this$));
          }

          JArray< RinexClock$ClockDataType > RinexClock$ClockDataType::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< RinexClock$ClockDataType >(env->callStaticObjectMethod(cls, mids$[mid_values_4a99278d55545989]));
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
          static PyObject *t_RinexClock$ClockDataType_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RinexClock$ClockDataType_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RinexClock$ClockDataType_of_(t_RinexClock$ClockDataType *self, PyObject *args);
          static PyObject *t_RinexClock$ClockDataType_getKey(t_RinexClock$ClockDataType *self);
          static PyObject *t_RinexClock$ClockDataType_parseClockDataType(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RinexClock$ClockDataType_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_RinexClock$ClockDataType_values(PyTypeObject *type);
          static PyObject *t_RinexClock$ClockDataType_get__key(t_RinexClock$ClockDataType *self, void *data);
          static PyObject *t_RinexClock$ClockDataType_get__parameters_(t_RinexClock$ClockDataType *self, void *data);
          static PyGetSetDef t_RinexClock$ClockDataType__fields_[] = {
            DECLARE_GET_FIELD(t_RinexClock$ClockDataType, key),
            DECLARE_GET_FIELD(t_RinexClock$ClockDataType, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RinexClock$ClockDataType__methods_[] = {
            DECLARE_METHOD(t_RinexClock$ClockDataType, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RinexClock$ClockDataType, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RinexClock$ClockDataType, of_, METH_VARARGS),
            DECLARE_METHOD(t_RinexClock$ClockDataType, getKey, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock$ClockDataType, parseClockDataType, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RinexClock$ClockDataType, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_RinexClock$ClockDataType, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RinexClock$ClockDataType)[] = {
            { Py_tp_methods, t_RinexClock$ClockDataType__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_RinexClock$ClockDataType__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RinexClock$ClockDataType)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(RinexClock$ClockDataType, t_RinexClock$ClockDataType, RinexClock$ClockDataType);
          PyObject *t_RinexClock$ClockDataType::wrap_Object(const RinexClock$ClockDataType& object, PyTypeObject *p0)
          {
            PyObject *obj = t_RinexClock$ClockDataType::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_RinexClock$ClockDataType *self = (t_RinexClock$ClockDataType *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_RinexClock$ClockDataType::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_RinexClock$ClockDataType::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_RinexClock$ClockDataType *self = (t_RinexClock$ClockDataType *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_RinexClock$ClockDataType::install(PyObject *module)
          {
            installType(&PY_TYPE(RinexClock$ClockDataType), &PY_TYPE_DEF(RinexClock$ClockDataType), module, "RinexClock$ClockDataType", 0);
          }

          void t_RinexClock$ClockDataType::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexClock$ClockDataType), "class_", make_descriptor(RinexClock$ClockDataType::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexClock$ClockDataType), "wrapfn_", make_descriptor(t_RinexClock$ClockDataType::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexClock$ClockDataType), "boxfn_", make_descriptor(boxObject));
            env->getClass(RinexClock$ClockDataType::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexClock$ClockDataType), "AR", make_descriptor(t_RinexClock$ClockDataType::wrap_Object(*RinexClock$ClockDataType::AR)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexClock$ClockDataType), "AS", make_descriptor(t_RinexClock$ClockDataType::wrap_Object(*RinexClock$ClockDataType::AS)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexClock$ClockDataType), "CR", make_descriptor(t_RinexClock$ClockDataType::wrap_Object(*RinexClock$ClockDataType::CR)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexClock$ClockDataType), "DR", make_descriptor(t_RinexClock$ClockDataType::wrap_Object(*RinexClock$ClockDataType::DR)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexClock$ClockDataType), "MS", make_descriptor(t_RinexClock$ClockDataType::wrap_Object(*RinexClock$ClockDataType::MS)));
          }

          static PyObject *t_RinexClock$ClockDataType_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RinexClock$ClockDataType::initializeClass, 1)))
              return NULL;
            return t_RinexClock$ClockDataType::wrap_Object(RinexClock$ClockDataType(((t_RinexClock$ClockDataType *) arg)->object.this$));
          }
          static PyObject *t_RinexClock$ClockDataType_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RinexClock$ClockDataType::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_RinexClock$ClockDataType_of_(t_RinexClock$ClockDataType *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_RinexClock$ClockDataType_getKey(t_RinexClock$ClockDataType *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getKey());
            return j2p(result);
          }

          static PyObject *t_RinexClock$ClockDataType_parseClockDataType(PyTypeObject *type, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);
            RinexClock$ClockDataType result((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::files::rinex::clock::RinexClock$ClockDataType::parseClockDataType(a0));
              return t_RinexClock$ClockDataType::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "parseClockDataType", arg);
            return NULL;
          }

          static PyObject *t_RinexClock$ClockDataType_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            RinexClock$ClockDataType result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::files::rinex::clock::RinexClock$ClockDataType::valueOf(a0));
              return t_RinexClock$ClockDataType::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_RinexClock$ClockDataType_values(PyTypeObject *type)
          {
            JArray< RinexClock$ClockDataType > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::files::rinex::clock::RinexClock$ClockDataType::values());
            return JArray<jobject>(result.this$).wrap(t_RinexClock$ClockDataType::wrap_jobject);
          }
          static PyObject *t_RinexClock$ClockDataType_get__parameters_(t_RinexClock$ClockDataType *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_RinexClock$ClockDataType_get__key(t_RinexClock$ClockDataType *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getKey());
            return j2p(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/cdm/SigmaEigenvectorsCovarianceKey.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "org/orekit/files/ccsds/ndm/cdm/SigmaEigenvectorsCovarianceKey.h"
#include "org/orekit/files/ccsds/ndm/cdm/SigmaEigenvectorsCovariance.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *SigmaEigenvectorsCovarianceKey::class$ = NULL;
            jmethodID *SigmaEigenvectorsCovarianceKey::mids$ = NULL;
            bool SigmaEigenvectorsCovarianceKey::live$ = false;
            SigmaEigenvectorsCovarianceKey *SigmaEigenvectorsCovarianceKey::COMMENT = NULL;
            SigmaEigenvectorsCovarianceKey *SigmaEigenvectorsCovarianceKey::CSIG3EIGVEC3 = NULL;

            jclass SigmaEigenvectorsCovarianceKey::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/SigmaEigenvectorsCovarianceKey");

                mids$ = new jmethodID[max_mid];
                mids$[mid_process_8d5c5ac2ef40379b] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/cdm/SigmaEigenvectorsCovariance;)Z");
                mids$[mid_valueOf_e9902cd69d266fa1] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/cdm/SigmaEigenvectorsCovarianceKey;");
                mids$[mid_values_df8d0fb21e8c9595] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/cdm/SigmaEigenvectorsCovarianceKey;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                COMMENT = new SigmaEigenvectorsCovarianceKey(env->getStaticObjectField(cls, "COMMENT", "Lorg/orekit/files/ccsds/ndm/cdm/SigmaEigenvectorsCovarianceKey;"));
                CSIG3EIGVEC3 = new SigmaEigenvectorsCovarianceKey(env->getStaticObjectField(cls, "CSIG3EIGVEC3", "Lorg/orekit/files/ccsds/ndm/cdm/SigmaEigenvectorsCovarianceKey;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jboolean SigmaEigenvectorsCovarianceKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::cdm::SigmaEigenvectorsCovariance & a2) const
            {
              return env->callBooleanMethod(this$, mids$[mid_process_8d5c5ac2ef40379b], a0.this$, a1.this$, a2.this$);
            }

            SigmaEigenvectorsCovarianceKey SigmaEigenvectorsCovarianceKey::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return SigmaEigenvectorsCovarianceKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_e9902cd69d266fa1], a0.this$));
            }

            JArray< SigmaEigenvectorsCovarianceKey > SigmaEigenvectorsCovarianceKey::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< SigmaEigenvectorsCovarianceKey >(env->callStaticObjectMethod(cls, mids$[mid_values_df8d0fb21e8c9595]));
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
            static PyObject *t_SigmaEigenvectorsCovarianceKey_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_SigmaEigenvectorsCovarianceKey_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_SigmaEigenvectorsCovarianceKey_of_(t_SigmaEigenvectorsCovarianceKey *self, PyObject *args);
            static PyObject *t_SigmaEigenvectorsCovarianceKey_process(t_SigmaEigenvectorsCovarianceKey *self, PyObject *args);
            static PyObject *t_SigmaEigenvectorsCovarianceKey_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_SigmaEigenvectorsCovarianceKey_values(PyTypeObject *type);
            static PyObject *t_SigmaEigenvectorsCovarianceKey_get__parameters_(t_SigmaEigenvectorsCovarianceKey *self, void *data);
            static PyGetSetDef t_SigmaEigenvectorsCovarianceKey__fields_[] = {
              DECLARE_GET_FIELD(t_SigmaEigenvectorsCovarianceKey, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_SigmaEigenvectorsCovarianceKey__methods_[] = {
              DECLARE_METHOD(t_SigmaEigenvectorsCovarianceKey, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_SigmaEigenvectorsCovarianceKey, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_SigmaEigenvectorsCovarianceKey, of_, METH_VARARGS),
              DECLARE_METHOD(t_SigmaEigenvectorsCovarianceKey, process, METH_VARARGS),
              DECLARE_METHOD(t_SigmaEigenvectorsCovarianceKey, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_SigmaEigenvectorsCovarianceKey, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(SigmaEigenvectorsCovarianceKey)[] = {
              { Py_tp_methods, t_SigmaEigenvectorsCovarianceKey__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_SigmaEigenvectorsCovarianceKey__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(SigmaEigenvectorsCovarianceKey)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(SigmaEigenvectorsCovarianceKey, t_SigmaEigenvectorsCovarianceKey, SigmaEigenvectorsCovarianceKey);
            PyObject *t_SigmaEigenvectorsCovarianceKey::wrap_Object(const SigmaEigenvectorsCovarianceKey& object, PyTypeObject *p0)
            {
              PyObject *obj = t_SigmaEigenvectorsCovarianceKey::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_SigmaEigenvectorsCovarianceKey *self = (t_SigmaEigenvectorsCovarianceKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_SigmaEigenvectorsCovarianceKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_SigmaEigenvectorsCovarianceKey::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_SigmaEigenvectorsCovarianceKey *self = (t_SigmaEigenvectorsCovarianceKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_SigmaEigenvectorsCovarianceKey::install(PyObject *module)
            {
              installType(&PY_TYPE(SigmaEigenvectorsCovarianceKey), &PY_TYPE_DEF(SigmaEigenvectorsCovarianceKey), module, "SigmaEigenvectorsCovarianceKey", 0);
            }

            void t_SigmaEigenvectorsCovarianceKey::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(SigmaEigenvectorsCovarianceKey), "class_", make_descriptor(SigmaEigenvectorsCovarianceKey::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SigmaEigenvectorsCovarianceKey), "wrapfn_", make_descriptor(t_SigmaEigenvectorsCovarianceKey::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SigmaEigenvectorsCovarianceKey), "boxfn_", make_descriptor(boxObject));
              env->getClass(SigmaEigenvectorsCovarianceKey::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(SigmaEigenvectorsCovarianceKey), "COMMENT", make_descriptor(t_SigmaEigenvectorsCovarianceKey::wrap_Object(*SigmaEigenvectorsCovarianceKey::COMMENT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SigmaEigenvectorsCovarianceKey), "CSIG3EIGVEC3", make_descriptor(t_SigmaEigenvectorsCovarianceKey::wrap_Object(*SigmaEigenvectorsCovarianceKey::CSIG3EIGVEC3)));
            }

            static PyObject *t_SigmaEigenvectorsCovarianceKey_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, SigmaEigenvectorsCovarianceKey::initializeClass, 1)))
                return NULL;
              return t_SigmaEigenvectorsCovarianceKey::wrap_Object(SigmaEigenvectorsCovarianceKey(((t_SigmaEigenvectorsCovarianceKey *) arg)->object.this$));
            }
            static PyObject *t_SigmaEigenvectorsCovarianceKey_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, SigmaEigenvectorsCovarianceKey::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_SigmaEigenvectorsCovarianceKey_of_(t_SigmaEigenvectorsCovarianceKey *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_SigmaEigenvectorsCovarianceKey_process(t_SigmaEigenvectorsCovarianceKey *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
              ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::cdm::SigmaEigenvectorsCovariance a2((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::SigmaEigenvectorsCovariance::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.process(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "process", args);
              return NULL;
            }

            static PyObject *t_SigmaEigenvectorsCovarianceKey_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              SigmaEigenvectorsCovarianceKey result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::cdm::SigmaEigenvectorsCovarianceKey::valueOf(a0));
                return t_SigmaEigenvectorsCovarianceKey::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_SigmaEigenvectorsCovarianceKey_values(PyTypeObject *type)
            {
              JArray< SigmaEigenvectorsCovarianceKey > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::cdm::SigmaEigenvectorsCovarianceKey::values());
              return JArray<jobject>(result.this$).wrap(t_SigmaEigenvectorsCovarianceKey::wrap_jobject);
            }
            static PyObject *t_SigmaEigenvectorsCovarianceKey_get__parameters_(t_SigmaEigenvectorsCovarianceKey *self, void *data)
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
#include "org/orekit/propagation/events/PythonAdaptableInterval.h"
#include "java/lang/Throwable.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/events/AdaptableInterval.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *PythonAdaptableInterval::class$ = NULL;
        jmethodID *PythonAdaptableInterval::mids$ = NULL;
        bool PythonAdaptableInterval::live$ = false;

        jclass PythonAdaptableInterval::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/PythonAdaptableInterval");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_currentInterval_a17ea857ce74d258] = env->getMethodID(cls, "currentInterval", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonAdaptableInterval::PythonAdaptableInterval() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        void PythonAdaptableInterval::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
        }

        jlong PythonAdaptableInterval::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
        }

        void PythonAdaptableInterval::pythonExtension(jlong a0) const
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
      namespace events {
        static PyObject *t_PythonAdaptableInterval_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonAdaptableInterval_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonAdaptableInterval_init_(t_PythonAdaptableInterval *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonAdaptableInterval_finalize(t_PythonAdaptableInterval *self);
        static PyObject *t_PythonAdaptableInterval_pythonExtension(t_PythonAdaptableInterval *self, PyObject *args);
        static jdouble JNICALL t_PythonAdaptableInterval_currentInterval0(JNIEnv *jenv, jobject jobj, jobject a0);
        static void JNICALL t_PythonAdaptableInterval_pythonDecRef1(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonAdaptableInterval_get__self(t_PythonAdaptableInterval *self, void *data);
        static PyGetSetDef t_PythonAdaptableInterval__fields_[] = {
          DECLARE_GET_FIELD(t_PythonAdaptableInterval, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonAdaptableInterval__methods_[] = {
          DECLARE_METHOD(t_PythonAdaptableInterval, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAdaptableInterval, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAdaptableInterval, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonAdaptableInterval, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonAdaptableInterval)[] = {
          { Py_tp_methods, t_PythonAdaptableInterval__methods_ },
          { Py_tp_init, (void *) t_PythonAdaptableInterval_init_ },
          { Py_tp_getset, t_PythonAdaptableInterval__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonAdaptableInterval)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonAdaptableInterval, t_PythonAdaptableInterval, PythonAdaptableInterval);

        void t_PythonAdaptableInterval::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonAdaptableInterval), &PY_TYPE_DEF(PythonAdaptableInterval), module, "PythonAdaptableInterval", 1);
        }

        void t_PythonAdaptableInterval::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAdaptableInterval), "class_", make_descriptor(PythonAdaptableInterval::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAdaptableInterval), "wrapfn_", make_descriptor(t_PythonAdaptableInterval::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAdaptableInterval), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonAdaptableInterval::initializeClass);
          JNINativeMethod methods[] = {
            { "currentInterval", "(Lorg/orekit/propagation/SpacecraftState;)D", (void *) t_PythonAdaptableInterval_currentInterval0 },
            { "pythonDecRef", "()V", (void *) t_PythonAdaptableInterval_pythonDecRef1 },
          };
          env->registerNatives(cls, methods, 2);
        }

        static PyObject *t_PythonAdaptableInterval_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonAdaptableInterval::initializeClass, 1)))
            return NULL;
          return t_PythonAdaptableInterval::wrap_Object(PythonAdaptableInterval(((t_PythonAdaptableInterval *) arg)->object.this$));
        }
        static PyObject *t_PythonAdaptableInterval_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonAdaptableInterval::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonAdaptableInterval_init_(t_PythonAdaptableInterval *self, PyObject *args, PyObject *kwds)
        {
          PythonAdaptableInterval object((jobject) NULL);

          INT_CALL(object = PythonAdaptableInterval());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonAdaptableInterval_finalize(t_PythonAdaptableInterval *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonAdaptableInterval_pythonExtension(t_PythonAdaptableInterval *self, PyObject *args)
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

        static jdouble JNICALL t_PythonAdaptableInterval_currentInterval0(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAdaptableInterval::mids$[PythonAdaptableInterval::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jdouble value;
          PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
          PyObject *result = PyObject_CallMethod(obj, "currentInterval", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "D", &value))
          {
            throwTypeError("currentInterval", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jdouble) 0;
        }

        static void JNICALL t_PythonAdaptableInterval_pythonDecRef1(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAdaptableInterval::mids$[PythonAdaptableInterval::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonAdaptableInterval::mids$[PythonAdaptableInterval::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonAdaptableInterval_get__self(t_PythonAdaptableInterval *self, void *data)
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
#include "org/orekit/propagation/analytical/gnss/SBASPropagator.h"
#include "org/orekit/propagation/analytical/gnss/data/SBASOrbitalElements.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
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
              mids$[mid_getECEF_2c51111cc6894ba1] = env->getMethodID(cls, "getECEF", "()Lorg/orekit/frames/Frame;");
              mids$[mid_getECI_2c51111cc6894ba1] = env->getMethodID(cls, "getECI", "()Lorg/orekit/frames/Frame;");
              mids$[mid_getFrame_2c51111cc6894ba1] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
              mids$[mid_getMU_b74f83833fdad017] = env->getMethodID(cls, "getMU", "()D");
              mids$[mid_getSBASOrbitalElements_e5d74932424b10a7] = env->getMethodID(cls, "getSBASOrbitalElements", "()Lorg/orekit/propagation/analytical/gnss/data/SBASOrbitalElements;");
              mids$[mid_propagateInEcef_686d17b8cfdd0634] = env->getMethodID(cls, "propagateInEcef", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/utils/PVCoordinates;");
              mids$[mid_resetInitialState_280c3390961e0a50] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/SpacecraftState;)V");
              mids$[mid_getMass_fd347811007a6ba3] = env->getMethodID(cls, "getMass", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_resetIntermediateState_1c47c97cdbc7e206] = env->getMethodID(cls, "resetIntermediateState", "(Lorg/orekit/propagation/SpacecraftState;Z)V");
              mids$[mid_propagateOrbit_5df6dcb5c4123339] = env->getMethodID(cls, "propagateOrbit", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/orbits/Orbit;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::orekit::frames::Frame SBASPropagator::getECEF() const
          {
            return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getECEF_2c51111cc6894ba1]));
          }

          ::org::orekit::frames::Frame SBASPropagator::getECI() const
          {
            return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getECI_2c51111cc6894ba1]));
          }

          ::org::orekit::frames::Frame SBASPropagator::getFrame() const
          {
            return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_2c51111cc6894ba1]));
          }

          jdouble SBASPropagator::getMU() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getMU_b74f83833fdad017]);
          }

          ::org::orekit::propagation::analytical::gnss::data::SBASOrbitalElements SBASPropagator::getSBASOrbitalElements() const
          {
            return ::org::orekit::propagation::analytical::gnss::data::SBASOrbitalElements(env->callObjectMethod(this$, mids$[mid_getSBASOrbitalElements_e5d74932424b10a7]));
          }

          ::org::orekit::utils::PVCoordinates SBASPropagator::propagateInEcef(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return ::org::orekit::utils::PVCoordinates(env->callObjectMethod(this$, mids$[mid_propagateInEcef_686d17b8cfdd0634], a0.this$));
          }

          void SBASPropagator::resetInitialState(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_resetInitialState_280c3390961e0a50], a0.this$);
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
#include "org/hipparchus/analysis/differentiation/FDSFactory$DerivativeField.h"
#include "java/lang/Class.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/analysis/differentiation/FieldDerivativeStructure.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        ::java::lang::Class *FDSFactory$DerivativeField::class$ = NULL;
        jmethodID *FDSFactory$DerivativeField::mids$ = NULL;
        bool FDSFactory$DerivativeField::live$ = false;

        jclass FDSFactory$DerivativeField::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/differentiation/FDSFactory$DerivativeField");

            mids$ = new jmethodID[max_mid];
            mids$[mid_equals_460c5e2d9d51c6cc] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
            mids$[mid_getOne_4b6e77c66fd622c3] = env->getMethodID(cls, "getOne", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_getPi_4b6e77c66fd622c3] = env->getMethodID(cls, "getPi", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_getRuntimeClass_1aeb0737a960d371] = env->getMethodID(cls, "getRuntimeClass", "()Ljava/lang/Class;");
            mids$[mid_getZero_4b6e77c66fd622c3] = env->getMethodID(cls, "getZero", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_hashCode_55546ef6a647f39b] = env->getMethodID(cls, "hashCode", "()I");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jboolean FDSFactory$DerivativeField::equals(const ::java::lang::Object & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_equals_460c5e2d9d51c6cc], a0.this$);
        }

        ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure FDSFactory$DerivativeField::getOne() const
        {
          return ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_getOne_4b6e77c66fd622c3]));
        }

        ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure FDSFactory$DerivativeField::getPi() const
        {
          return ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_getPi_4b6e77c66fd622c3]));
        }

        ::java::lang::Class FDSFactory$DerivativeField::getRuntimeClass() const
        {
          return ::java::lang::Class(env->callObjectMethod(this$, mids$[mid_getRuntimeClass_1aeb0737a960d371]));
        }

        ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure FDSFactory$DerivativeField::getZero() const
        {
          return ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_getZero_4b6e77c66fd622c3]));
        }

        jint FDSFactory$DerivativeField::hashCode() const
        {
          return env->callIntMethod(this$, mids$[mid_hashCode_55546ef6a647f39b]);
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
        static PyObject *t_FDSFactory$DerivativeField_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FDSFactory$DerivativeField_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FDSFactory$DerivativeField_of_(t_FDSFactory$DerivativeField *self, PyObject *args);
        static PyObject *t_FDSFactory$DerivativeField_equals(t_FDSFactory$DerivativeField *self, PyObject *args);
        static PyObject *t_FDSFactory$DerivativeField_getOne(t_FDSFactory$DerivativeField *self);
        static PyObject *t_FDSFactory$DerivativeField_getPi(t_FDSFactory$DerivativeField *self);
        static PyObject *t_FDSFactory$DerivativeField_getRuntimeClass(t_FDSFactory$DerivativeField *self);
        static PyObject *t_FDSFactory$DerivativeField_getZero(t_FDSFactory$DerivativeField *self);
        static PyObject *t_FDSFactory$DerivativeField_hashCode(t_FDSFactory$DerivativeField *self, PyObject *args);
        static PyObject *t_FDSFactory$DerivativeField_get__one(t_FDSFactory$DerivativeField *self, void *data);
        static PyObject *t_FDSFactory$DerivativeField_get__pi(t_FDSFactory$DerivativeField *self, void *data);
        static PyObject *t_FDSFactory$DerivativeField_get__runtimeClass(t_FDSFactory$DerivativeField *self, void *data);
        static PyObject *t_FDSFactory$DerivativeField_get__zero(t_FDSFactory$DerivativeField *self, void *data);
        static PyObject *t_FDSFactory$DerivativeField_get__parameters_(t_FDSFactory$DerivativeField *self, void *data);
        static PyGetSetDef t_FDSFactory$DerivativeField__fields_[] = {
          DECLARE_GET_FIELD(t_FDSFactory$DerivativeField, one),
          DECLARE_GET_FIELD(t_FDSFactory$DerivativeField, pi),
          DECLARE_GET_FIELD(t_FDSFactory$DerivativeField, runtimeClass),
          DECLARE_GET_FIELD(t_FDSFactory$DerivativeField, zero),
          DECLARE_GET_FIELD(t_FDSFactory$DerivativeField, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FDSFactory$DerivativeField__methods_[] = {
          DECLARE_METHOD(t_FDSFactory$DerivativeField, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FDSFactory$DerivativeField, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FDSFactory$DerivativeField, of_, METH_VARARGS),
          DECLARE_METHOD(t_FDSFactory$DerivativeField, equals, METH_VARARGS),
          DECLARE_METHOD(t_FDSFactory$DerivativeField, getOne, METH_NOARGS),
          DECLARE_METHOD(t_FDSFactory$DerivativeField, getPi, METH_NOARGS),
          DECLARE_METHOD(t_FDSFactory$DerivativeField, getRuntimeClass, METH_NOARGS),
          DECLARE_METHOD(t_FDSFactory$DerivativeField, getZero, METH_NOARGS),
          DECLARE_METHOD(t_FDSFactory$DerivativeField, hashCode, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FDSFactory$DerivativeField)[] = {
          { Py_tp_methods, t_FDSFactory$DerivativeField__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_FDSFactory$DerivativeField__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FDSFactory$DerivativeField)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FDSFactory$DerivativeField, t_FDSFactory$DerivativeField, FDSFactory$DerivativeField);
        PyObject *t_FDSFactory$DerivativeField::wrap_Object(const FDSFactory$DerivativeField& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FDSFactory$DerivativeField::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FDSFactory$DerivativeField *self = (t_FDSFactory$DerivativeField *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FDSFactory$DerivativeField::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FDSFactory$DerivativeField::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FDSFactory$DerivativeField *self = (t_FDSFactory$DerivativeField *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FDSFactory$DerivativeField::install(PyObject *module)
        {
          installType(&PY_TYPE(FDSFactory$DerivativeField), &PY_TYPE_DEF(FDSFactory$DerivativeField), module, "FDSFactory$DerivativeField", 0);
        }

        void t_FDSFactory$DerivativeField::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FDSFactory$DerivativeField), "class_", make_descriptor(FDSFactory$DerivativeField::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FDSFactory$DerivativeField), "wrapfn_", make_descriptor(t_FDSFactory$DerivativeField::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FDSFactory$DerivativeField), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FDSFactory$DerivativeField_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FDSFactory$DerivativeField::initializeClass, 1)))
            return NULL;
          return t_FDSFactory$DerivativeField::wrap_Object(FDSFactory$DerivativeField(((t_FDSFactory$DerivativeField *) arg)->object.this$));
        }
        static PyObject *t_FDSFactory$DerivativeField_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FDSFactory$DerivativeField::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FDSFactory$DerivativeField_of_(t_FDSFactory$DerivativeField *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_FDSFactory$DerivativeField_equals(t_FDSFactory$DerivativeField *self, PyObject *args)
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(result = self->object.equals(a0));
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(FDSFactory$DerivativeField), (PyObject *) self, "equals", args, 2);
        }

        static PyObject *t_FDSFactory$DerivativeField_getOne(t_FDSFactory$DerivativeField *self)
        {
          ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.getOne());
          return ::org::hipparchus::analysis::differentiation::t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FDSFactory$DerivativeField_getPi(t_FDSFactory$DerivativeField *self)
        {
          ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.getPi());
          return ::org::hipparchus::analysis::differentiation::t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FDSFactory$DerivativeField_getRuntimeClass(t_FDSFactory$DerivativeField *self)
        {
          ::java::lang::Class result((jobject) NULL);
          OBJ_CALL(result = self->object.getRuntimeClass());
          return ::java::lang::t_Class::wrap_Object(result);
        }

        static PyObject *t_FDSFactory$DerivativeField_getZero(t_FDSFactory$DerivativeField *self)
        {
          ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.getZero());
          return ::org::hipparchus::analysis::differentiation::t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FDSFactory$DerivativeField_hashCode(t_FDSFactory$DerivativeField *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.hashCode());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(FDSFactory$DerivativeField), (PyObject *) self, "hashCode", args, 2);
        }
        static PyObject *t_FDSFactory$DerivativeField_get__parameters_(t_FDSFactory$DerivativeField *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FDSFactory$DerivativeField_get__one(t_FDSFactory$DerivativeField *self, void *data)
        {
          ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure value((jobject) NULL);
          OBJ_CALL(value = self->object.getOne());
          return ::org::hipparchus::analysis::differentiation::t_FieldDerivativeStructure::wrap_Object(value);
        }

        static PyObject *t_FDSFactory$DerivativeField_get__pi(t_FDSFactory$DerivativeField *self, void *data)
        {
          ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure value((jobject) NULL);
          OBJ_CALL(value = self->object.getPi());
          return ::org::hipparchus::analysis::differentiation::t_FieldDerivativeStructure::wrap_Object(value);
        }

        static PyObject *t_FDSFactory$DerivativeField_get__runtimeClass(t_FDSFactory$DerivativeField *self, void *data)
        {
          ::java::lang::Class value((jobject) NULL);
          OBJ_CALL(value = self->object.getRuntimeClass());
          return ::java::lang::t_Class::wrap_Object(value);
        }

        static PyObject *t_FDSFactory$DerivativeField_get__zero(t_FDSFactory$DerivativeField *self, void *data)
        {
          ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure value((jobject) NULL);
          OBJ_CALL(value = self->object.getZero());
          return ::org::hipparchus::analysis::differentiation::t_FieldDerivativeStructure::wrap_Object(value);
        }
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
          mids$[mid_gradient_91fbb4072ae7ce9a] = env->getMethodID(cls, "gradient", "(D[D)[D");
          mids$[mid_value_e45651f63bcd931a] = env->getMethodID(cls, "value", "(D[D)D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JArray< jdouble > ParametricUnivariateFunction::gradient(jdouble a0, const JArray< jdouble > & a1) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_gradient_91fbb4072ae7ce9a], a0, a1.this$));
      }

      jdouble ParametricUnivariateFunction::value(jdouble a0, const JArray< jdouble > & a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_value_e45651f63bcd931a], a0, a1.this$);
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
#include "org/hipparchus/random/RandomDataGenerator.h"
#include "org/hipparchus/distribution/IntegerDistribution.h"
#include "java/io/Serializable.h"
#include "java/util/Collection.h"
#include "org/hipparchus/random/RandomGenerator.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/distribution/RealDistribution.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "org/hipparchus/random/RandomDataGenerator.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace random {

      ::java::lang::Class *RandomDataGenerator::class$ = NULL;
      jmethodID *RandomDataGenerator::mids$ = NULL;
      bool RandomDataGenerator::live$ = false;

      jclass RandomDataGenerator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/random/RandomDataGenerator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_3d7dd2314a0dd456] = env->getMethodID(cls, "<init>", "(J)V");
          mids$[mid_nextBeta_99e3200dafc19573] = env->getMethodID(cls, "nextBeta", "(DD)D");
          mids$[mid_nextDeviate_5fecc2a42e661b90] = env->getMethodID(cls, "nextDeviate", "(Lorg/hipparchus/distribution/IntegerDistribution;)I");
          mids$[mid_nextDeviate_a0bd8115919ecebe] = env->getMethodID(cls, "nextDeviate", "(Lorg/hipparchus/distribution/RealDistribution;)D");
          mids$[mid_nextDeviates_c9813930cbc8e412] = env->getMethodID(cls, "nextDeviates", "(Lorg/hipparchus/distribution/IntegerDistribution;I)[I");
          mids$[mid_nextDeviates_d2c3d2f05bc19854] = env->getMethodID(cls, "nextDeviates", "(Lorg/hipparchus/distribution/RealDistribution;I)[D");
          mids$[mid_nextExponential_04fd0666b613d2ab] = env->getMethodID(cls, "nextExponential", "(D)D");
          mids$[mid_nextGamma_99e3200dafc19573] = env->getMethodID(cls, "nextGamma", "(DD)D");
          mids$[mid_nextHexString_2a9bffd3d5397f7c] = env->getMethodID(cls, "nextHexString", "(I)Ljava/lang/String;");
          mids$[mid_nextInt_92ecd94558bf0c68] = env->getMethodID(cls, "nextInt", "(II)I");
          mids$[mid_nextLogNormal_99e3200dafc19573] = env->getMethodID(cls, "nextLogNormal", "(DD)D");
          mids$[mid_nextLong_8f345e4204401ff5] = env->getMethodID(cls, "nextLong", "(JJ)J");
          mids$[mid_nextNormal_99e3200dafc19573] = env->getMethodID(cls, "nextNormal", "(DD)D");
          mids$[mid_nextPermutation_56647843f75c9c90] = env->getMethodID(cls, "nextPermutation", "(II)[I");
          mids$[mid_nextPoisson_2af4736545087009] = env->getMethodID(cls, "nextPoisson", "(D)I");
          mids$[mid_nextSample_fdbebc837979003b] = env->getMethodID(cls, "nextSample", "([DI)[D");
          mids$[mid_nextSample_fa2fc463781cf6fd] = env->getMethodID(cls, "nextSample", "(Ljava/util/Collection;I)[Ljava/lang/Object;");
          mids$[mid_nextSampleWithReplacement_d70eda2deeff41f6] = env->getMethodID(cls, "nextSampleWithReplacement", "(I[D)[I");
          mids$[mid_nextUniform_99e3200dafc19573] = env->getMethodID(cls, "nextUniform", "(DD)D");
          mids$[mid_nextZipf_008fbfbfedda2d57] = env->getMethodID(cls, "nextZipf", "(ID)I");
          mids$[mid_of_d585beb78f2e2564] = env->getStaticMethodID(cls, "of", "(Lorg/hipparchus/random/RandomGenerator;)Lorg/hipparchus/random/RandomDataGenerator;");
          mids$[mid_delegate_9c758ae03d1b398a] = env->getMethodID(cls, "delegate", "()Lorg/hipparchus/random/RandomGenerator;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      RandomDataGenerator::RandomDataGenerator() : ::org::hipparchus::random::ForwardingRandomGenerator(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

      RandomDataGenerator::RandomDataGenerator(jlong a0) : ::org::hipparchus::random::ForwardingRandomGenerator(env->newObject(initializeClass, &mids$, mid_init$_3d7dd2314a0dd456, a0)) {}

      jdouble RandomDataGenerator::nextBeta(jdouble a0, jdouble a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_nextBeta_99e3200dafc19573], a0, a1);
      }

      jint RandomDataGenerator::nextDeviate(const ::org::hipparchus::distribution::IntegerDistribution & a0) const
      {
        return env->callIntMethod(this$, mids$[mid_nextDeviate_5fecc2a42e661b90], a0.this$);
      }

      jdouble RandomDataGenerator::nextDeviate(const ::org::hipparchus::distribution::RealDistribution & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_nextDeviate_a0bd8115919ecebe], a0.this$);
      }

      JArray< jint > RandomDataGenerator::nextDeviates(const ::org::hipparchus::distribution::IntegerDistribution & a0, jint a1) const
      {
        return JArray< jint >(env->callObjectMethod(this$, mids$[mid_nextDeviates_c9813930cbc8e412], a0.this$, a1));
      }

      JArray< jdouble > RandomDataGenerator::nextDeviates(const ::org::hipparchus::distribution::RealDistribution & a0, jint a1) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_nextDeviates_d2c3d2f05bc19854], a0.this$, a1));
      }

      jdouble RandomDataGenerator::nextExponential(jdouble a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_nextExponential_04fd0666b613d2ab], a0);
      }

      jdouble RandomDataGenerator::nextGamma(jdouble a0, jdouble a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_nextGamma_99e3200dafc19573], a0, a1);
      }

      ::java::lang::String RandomDataGenerator::nextHexString(jint a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_nextHexString_2a9bffd3d5397f7c], a0));
      }

      jint RandomDataGenerator::nextInt(jint a0, jint a1) const
      {
        return env->callIntMethod(this$, mids$[mid_nextInt_92ecd94558bf0c68], a0, a1);
      }

      jdouble RandomDataGenerator::nextLogNormal(jdouble a0, jdouble a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_nextLogNormal_99e3200dafc19573], a0, a1);
      }

      jlong RandomDataGenerator::nextLong(jlong a0, jlong a1) const
      {
        return env->callLongMethod(this$, mids$[mid_nextLong_8f345e4204401ff5], a0, a1);
      }

      jdouble RandomDataGenerator::nextNormal(jdouble a0, jdouble a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_nextNormal_99e3200dafc19573], a0, a1);
      }

      JArray< jint > RandomDataGenerator::nextPermutation(jint a0, jint a1) const
      {
        return JArray< jint >(env->callObjectMethod(this$, mids$[mid_nextPermutation_56647843f75c9c90], a0, a1));
      }

      jint RandomDataGenerator::nextPoisson(jdouble a0) const
      {
        return env->callIntMethod(this$, mids$[mid_nextPoisson_2af4736545087009], a0);
      }

      JArray< jdouble > RandomDataGenerator::nextSample(const JArray< jdouble > & a0, jint a1) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_nextSample_fdbebc837979003b], a0.this$, a1));
      }

      JArray< ::java::lang::Object > RandomDataGenerator::nextSample(const ::java::util::Collection & a0, jint a1) const
      {
        return JArray< ::java::lang::Object >(env->callObjectMethod(this$, mids$[mid_nextSample_fa2fc463781cf6fd], a0.this$, a1));
      }

      JArray< jint > RandomDataGenerator::nextSampleWithReplacement(jint a0, const JArray< jdouble > & a1) const
      {
        return JArray< jint >(env->callObjectMethod(this$, mids$[mid_nextSampleWithReplacement_d70eda2deeff41f6], a0, a1.this$));
      }

      jdouble RandomDataGenerator::nextUniform(jdouble a0, jdouble a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_nextUniform_99e3200dafc19573], a0, a1);
      }

      jint RandomDataGenerator::nextZipf(jint a0, jdouble a1) const
      {
        return env->callIntMethod(this$, mids$[mid_nextZipf_008fbfbfedda2d57], a0, a1);
      }

      RandomDataGenerator RandomDataGenerator::of(const ::org::hipparchus::random::RandomGenerator & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return RandomDataGenerator(env->callStaticObjectMethod(cls, mids$[mid_of_d585beb78f2e2564], a0.this$));
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
      static PyObject *t_RandomDataGenerator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_RandomDataGenerator_instance_(PyTypeObject *type, PyObject *arg);
      static int t_RandomDataGenerator_init_(t_RandomDataGenerator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_RandomDataGenerator_nextBeta(t_RandomDataGenerator *self, PyObject *args);
      static PyObject *t_RandomDataGenerator_nextDeviate(t_RandomDataGenerator *self, PyObject *args);
      static PyObject *t_RandomDataGenerator_nextDeviates(t_RandomDataGenerator *self, PyObject *args);
      static PyObject *t_RandomDataGenerator_nextExponential(t_RandomDataGenerator *self, PyObject *arg);
      static PyObject *t_RandomDataGenerator_nextGamma(t_RandomDataGenerator *self, PyObject *args);
      static PyObject *t_RandomDataGenerator_nextHexString(t_RandomDataGenerator *self, PyObject *arg);
      static PyObject *t_RandomDataGenerator_nextInt(t_RandomDataGenerator *self, PyObject *args);
      static PyObject *t_RandomDataGenerator_nextLogNormal(t_RandomDataGenerator *self, PyObject *args);
      static PyObject *t_RandomDataGenerator_nextLong(t_RandomDataGenerator *self, PyObject *args);
      static PyObject *t_RandomDataGenerator_nextNormal(t_RandomDataGenerator *self, PyObject *args);
      static PyObject *t_RandomDataGenerator_nextPermutation(t_RandomDataGenerator *self, PyObject *args);
      static PyObject *t_RandomDataGenerator_nextPoisson(t_RandomDataGenerator *self, PyObject *arg);
      static PyObject *t_RandomDataGenerator_nextSample(t_RandomDataGenerator *self, PyObject *args);
      static PyObject *t_RandomDataGenerator_nextSampleWithReplacement(t_RandomDataGenerator *self, PyObject *args);
      static PyObject *t_RandomDataGenerator_nextUniform(t_RandomDataGenerator *self, PyObject *args);
      static PyObject *t_RandomDataGenerator_nextZipf(t_RandomDataGenerator *self, PyObject *args);
      static PyObject *t_RandomDataGenerator_of(PyTypeObject *type, PyObject *arg);

      static PyMethodDef t_RandomDataGenerator__methods_[] = {
        DECLARE_METHOD(t_RandomDataGenerator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RandomDataGenerator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RandomDataGenerator, nextBeta, METH_VARARGS),
        DECLARE_METHOD(t_RandomDataGenerator, nextDeviate, METH_VARARGS),
        DECLARE_METHOD(t_RandomDataGenerator, nextDeviates, METH_VARARGS),
        DECLARE_METHOD(t_RandomDataGenerator, nextExponential, METH_O),
        DECLARE_METHOD(t_RandomDataGenerator, nextGamma, METH_VARARGS),
        DECLARE_METHOD(t_RandomDataGenerator, nextHexString, METH_O),
        DECLARE_METHOD(t_RandomDataGenerator, nextInt, METH_VARARGS),
        DECLARE_METHOD(t_RandomDataGenerator, nextLogNormal, METH_VARARGS),
        DECLARE_METHOD(t_RandomDataGenerator, nextLong, METH_VARARGS),
        DECLARE_METHOD(t_RandomDataGenerator, nextNormal, METH_VARARGS),
        DECLARE_METHOD(t_RandomDataGenerator, nextPermutation, METH_VARARGS),
        DECLARE_METHOD(t_RandomDataGenerator, nextPoisson, METH_O),
        DECLARE_METHOD(t_RandomDataGenerator, nextSample, METH_VARARGS),
        DECLARE_METHOD(t_RandomDataGenerator, nextSampleWithReplacement, METH_VARARGS),
        DECLARE_METHOD(t_RandomDataGenerator, nextUniform, METH_VARARGS),
        DECLARE_METHOD(t_RandomDataGenerator, nextZipf, METH_VARARGS),
        DECLARE_METHOD(t_RandomDataGenerator, of, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(RandomDataGenerator)[] = {
        { Py_tp_methods, t_RandomDataGenerator__methods_ },
        { Py_tp_init, (void *) t_RandomDataGenerator_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(RandomDataGenerator)[] = {
        &PY_TYPE_DEF(::org::hipparchus::random::ForwardingRandomGenerator),
        NULL
      };

      DEFINE_TYPE(RandomDataGenerator, t_RandomDataGenerator, RandomDataGenerator);

      void t_RandomDataGenerator::install(PyObject *module)
      {
        installType(&PY_TYPE(RandomDataGenerator), &PY_TYPE_DEF(RandomDataGenerator), module, "RandomDataGenerator", 0);
      }

      void t_RandomDataGenerator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(RandomDataGenerator), "class_", make_descriptor(RandomDataGenerator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RandomDataGenerator), "wrapfn_", make_descriptor(t_RandomDataGenerator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RandomDataGenerator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_RandomDataGenerator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, RandomDataGenerator::initializeClass, 1)))
          return NULL;
        return t_RandomDataGenerator::wrap_Object(RandomDataGenerator(((t_RandomDataGenerator *) arg)->object.this$));
      }
      static PyObject *t_RandomDataGenerator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, RandomDataGenerator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_RandomDataGenerator_init_(t_RandomDataGenerator *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            RandomDataGenerator object((jobject) NULL);

            INT_CALL(object = RandomDataGenerator());
            self->object = object;
            break;
          }
         case 1:
          {
            jlong a0;
            RandomDataGenerator object((jobject) NULL);

            if (!parseArgs(args, "J", &a0))
            {
              INT_CALL(object = RandomDataGenerator(a0));
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

      static PyObject *t_RandomDataGenerator_nextBeta(t_RandomDataGenerator *self, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        jdouble result;

        if (!parseArgs(args, "DD", &a0, &a1))
        {
          OBJ_CALL(result = self->object.nextBeta(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "nextBeta", args);
        return NULL;
      }

      static PyObject *t_RandomDataGenerator_nextDeviate(t_RandomDataGenerator *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::distribution::IntegerDistribution a0((jobject) NULL);
            jint result;

            if (!parseArgs(args, "k", ::org::hipparchus::distribution::IntegerDistribution::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.nextDeviate(a0));
              return PyLong_FromLong((long) result);
            }
          }
          {
            ::org::hipparchus::distribution::RealDistribution a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::hipparchus::distribution::RealDistribution::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.nextDeviate(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "nextDeviate", args);
        return NULL;
      }

      static PyObject *t_RandomDataGenerator_nextDeviates(t_RandomDataGenerator *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::hipparchus::distribution::IntegerDistribution a0((jobject) NULL);
            jint a1;
            JArray< jint > result((jobject) NULL);

            if (!parseArgs(args, "kI", ::org::hipparchus::distribution::IntegerDistribution::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.nextDeviates(a0, a1));
              return result.wrap();
            }
          }
          {
            ::org::hipparchus::distribution::RealDistribution a0((jobject) NULL);
            jint a1;
            JArray< jdouble > result((jobject) NULL);

            if (!parseArgs(args, "kI", ::org::hipparchus::distribution::RealDistribution::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.nextDeviates(a0, a1));
              return result.wrap();
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "nextDeviates", args);
        return NULL;
      }

      static PyObject *t_RandomDataGenerator_nextExponential(t_RandomDataGenerator *self, PyObject *arg)
      {
        jdouble a0;
        jdouble result;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.nextExponential(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "nextExponential", arg);
        return NULL;
      }

      static PyObject *t_RandomDataGenerator_nextGamma(t_RandomDataGenerator *self, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        jdouble result;

        if (!parseArgs(args, "DD", &a0, &a1))
        {
          OBJ_CALL(result = self->object.nextGamma(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "nextGamma", args);
        return NULL;
      }

      static PyObject *t_RandomDataGenerator_nextHexString(t_RandomDataGenerator *self, PyObject *arg)
      {
        jint a0;
        ::java::lang::String result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.nextHexString(a0));
          return j2p(result);
        }

        PyErr_SetArgsError((PyObject *) self, "nextHexString", arg);
        return NULL;
      }

      static PyObject *t_RandomDataGenerator_nextInt(t_RandomDataGenerator *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jint result;

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.nextInt(a0, a1));
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(RandomDataGenerator), (PyObject *) self, "nextInt", args, 2);
      }

      static PyObject *t_RandomDataGenerator_nextLogNormal(t_RandomDataGenerator *self, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        jdouble result;

        if (!parseArgs(args, "DD", &a0, &a1))
        {
          OBJ_CALL(result = self->object.nextLogNormal(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "nextLogNormal", args);
        return NULL;
      }

      static PyObject *t_RandomDataGenerator_nextLong(t_RandomDataGenerator *self, PyObject *args)
      {
        jlong a0;
        jlong a1;
        jlong result;

        if (!parseArgs(args, "JJ", &a0, &a1))
        {
          OBJ_CALL(result = self->object.nextLong(a0, a1));
          return PyLong_FromLongLong((PY_LONG_LONG) result);
        }

        return callSuper(PY_TYPE(RandomDataGenerator), (PyObject *) self, "nextLong", args, 2);
      }

      static PyObject *t_RandomDataGenerator_nextNormal(t_RandomDataGenerator *self, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        jdouble result;

        if (!parseArgs(args, "DD", &a0, &a1))
        {
          OBJ_CALL(result = self->object.nextNormal(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "nextNormal", args);
        return NULL;
      }

      static PyObject *t_RandomDataGenerator_nextPermutation(t_RandomDataGenerator *self, PyObject *args)
      {
        jint a0;
        jint a1;
        JArray< jint > result((jobject) NULL);

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.nextPermutation(a0, a1));
          return result.wrap();
        }

        PyErr_SetArgsError((PyObject *) self, "nextPermutation", args);
        return NULL;
      }

      static PyObject *t_RandomDataGenerator_nextPoisson(t_RandomDataGenerator *self, PyObject *arg)
      {
        jdouble a0;
        jint result;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.nextPoisson(a0));
          return PyLong_FromLong((long) result);
        }

        PyErr_SetArgsError((PyObject *) self, "nextPoisson", arg);
        return NULL;
      }

      static PyObject *t_RandomDataGenerator_nextSample(t_RandomDataGenerator *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            JArray< jdouble > a0((jobject) NULL);
            jint a1;
            JArray< jdouble > result((jobject) NULL);

            if (!parseArgs(args, "[DI", &a0, &a1))
            {
              OBJ_CALL(result = self->object.nextSample(a0, a1));
              return result.wrap();
            }
          }
          {
            ::java::util::Collection a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            JArray< ::java::lang::Object > result((jobject) NULL);

            if (!parseArgs(args, "KI", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_, &a1))
            {
              OBJ_CALL(result = self->object.nextSample(a0, a1));
              return JArray<jobject>(result.this$).wrap(::java::lang::t_Object::wrap_jobject);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "nextSample", args);
        return NULL;
      }

      static PyObject *t_RandomDataGenerator_nextSampleWithReplacement(t_RandomDataGenerator *self, PyObject *args)
      {
        jint a0;
        JArray< jdouble > a1((jobject) NULL);
        JArray< jint > result((jobject) NULL);

        if (!parseArgs(args, "I[D", &a0, &a1))
        {
          OBJ_CALL(result = self->object.nextSampleWithReplacement(a0, a1));
          return result.wrap();
        }

        PyErr_SetArgsError((PyObject *) self, "nextSampleWithReplacement", args);
        return NULL;
      }

      static PyObject *t_RandomDataGenerator_nextUniform(t_RandomDataGenerator *self, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        jdouble result;

        if (!parseArgs(args, "DD", &a0, &a1))
        {
          OBJ_CALL(result = self->object.nextUniform(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "nextUniform", args);
        return NULL;
      }

      static PyObject *t_RandomDataGenerator_nextZipf(t_RandomDataGenerator *self, PyObject *args)
      {
        jint a0;
        jdouble a1;
        jint result;

        if (!parseArgs(args, "ID", &a0, &a1))
        {
          OBJ_CALL(result = self->object.nextZipf(a0, a1));
          return PyLong_FromLong((long) result);
        }

        PyErr_SetArgsError((PyObject *) self, "nextZipf", args);
        return NULL;
      }

      static PyObject *t_RandomDataGenerator_of(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::random::RandomGenerator a0((jobject) NULL);
        RandomDataGenerator result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::random::RandomGenerator::initializeClass, &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::random::RandomDataGenerator::of(a0));
          return t_RandomDataGenerator::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "of", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/sequential/KalmanEstimatorBuilder.h"
#include "org/orekit/estimation/sequential/KalmanEstimatorBuilder.h"
#include "org/orekit/utils/ParameterDriversList.h"
#include "org/orekit/estimation/sequential/CovarianceMatrixProvider.h"
#include "org/hipparchus/linear/MatrixDecomposer.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/conversion/PropagatorBuilder.h"
#include "org/orekit/estimation/sequential/KalmanEstimator.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace sequential {

        ::java::lang::Class *KalmanEstimatorBuilder::class$ = NULL;
        jmethodID *KalmanEstimatorBuilder::mids$ = NULL;
        bool KalmanEstimatorBuilder::live$ = false;

        jclass KalmanEstimatorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/sequential/KalmanEstimatorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_addPropagationConfiguration_289b65bac6529a2c] = env->getMethodID(cls, "addPropagationConfiguration", "(Lorg/orekit/propagation/conversion/PropagatorBuilder;Lorg/orekit/estimation/sequential/CovarianceMatrixProvider;)Lorg/orekit/estimation/sequential/KalmanEstimatorBuilder;");
            mids$[mid_build_430d6826376573af] = env->getMethodID(cls, "build", "()Lorg/orekit/estimation/sequential/KalmanEstimator;");
            mids$[mid_decomposer_d0e40652b4914c78] = env->getMethodID(cls, "decomposer", "(Lorg/hipparchus/linear/MatrixDecomposer;)Lorg/orekit/estimation/sequential/KalmanEstimatorBuilder;");
            mids$[mid_estimatedMeasurementsParameters_e05c477c5178e606] = env->getMethodID(cls, "estimatedMeasurementsParameters", "(Lorg/orekit/utils/ParameterDriversList;Lorg/orekit/estimation/sequential/CovarianceMatrixProvider;)Lorg/orekit/estimation/sequential/KalmanEstimatorBuilder;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        KalmanEstimatorBuilder::KalmanEstimatorBuilder() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        KalmanEstimatorBuilder KalmanEstimatorBuilder::addPropagationConfiguration(const ::org::orekit::propagation::conversion::PropagatorBuilder & a0, const ::org::orekit::estimation::sequential::CovarianceMatrixProvider & a1) const
        {
          return KalmanEstimatorBuilder(env->callObjectMethod(this$, mids$[mid_addPropagationConfiguration_289b65bac6529a2c], a0.this$, a1.this$));
        }

        ::org::orekit::estimation::sequential::KalmanEstimator KalmanEstimatorBuilder::build() const
        {
          return ::org::orekit::estimation::sequential::KalmanEstimator(env->callObjectMethod(this$, mids$[mid_build_430d6826376573af]));
        }

        KalmanEstimatorBuilder KalmanEstimatorBuilder::decomposer(const ::org::hipparchus::linear::MatrixDecomposer & a0) const
        {
          return KalmanEstimatorBuilder(env->callObjectMethod(this$, mids$[mid_decomposer_d0e40652b4914c78], a0.this$));
        }

        KalmanEstimatorBuilder KalmanEstimatorBuilder::estimatedMeasurementsParameters(const ::org::orekit::utils::ParameterDriversList & a0, const ::org::orekit::estimation::sequential::CovarianceMatrixProvider & a1) const
        {
          return KalmanEstimatorBuilder(env->callObjectMethod(this$, mids$[mid_estimatedMeasurementsParameters_e05c477c5178e606], a0.this$, a1.this$));
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
        static PyObject *t_KalmanEstimatorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_KalmanEstimatorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static int t_KalmanEstimatorBuilder_init_(t_KalmanEstimatorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_KalmanEstimatorBuilder_addPropagationConfiguration(t_KalmanEstimatorBuilder *self, PyObject *args);
        static PyObject *t_KalmanEstimatorBuilder_build(t_KalmanEstimatorBuilder *self);
        static PyObject *t_KalmanEstimatorBuilder_decomposer(t_KalmanEstimatorBuilder *self, PyObject *arg);
        static PyObject *t_KalmanEstimatorBuilder_estimatedMeasurementsParameters(t_KalmanEstimatorBuilder *self, PyObject *args);

        static PyMethodDef t_KalmanEstimatorBuilder__methods_[] = {
          DECLARE_METHOD(t_KalmanEstimatorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_KalmanEstimatorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_KalmanEstimatorBuilder, addPropagationConfiguration, METH_VARARGS),
          DECLARE_METHOD(t_KalmanEstimatorBuilder, build, METH_NOARGS),
          DECLARE_METHOD(t_KalmanEstimatorBuilder, decomposer, METH_O),
          DECLARE_METHOD(t_KalmanEstimatorBuilder, estimatedMeasurementsParameters, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(KalmanEstimatorBuilder)[] = {
          { Py_tp_methods, t_KalmanEstimatorBuilder__methods_ },
          { Py_tp_init, (void *) t_KalmanEstimatorBuilder_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(KalmanEstimatorBuilder)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(KalmanEstimatorBuilder, t_KalmanEstimatorBuilder, KalmanEstimatorBuilder);

        void t_KalmanEstimatorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(KalmanEstimatorBuilder), &PY_TYPE_DEF(KalmanEstimatorBuilder), module, "KalmanEstimatorBuilder", 0);
        }

        void t_KalmanEstimatorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(KalmanEstimatorBuilder), "class_", make_descriptor(KalmanEstimatorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(KalmanEstimatorBuilder), "wrapfn_", make_descriptor(t_KalmanEstimatorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(KalmanEstimatorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_KalmanEstimatorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, KalmanEstimatorBuilder::initializeClass, 1)))
            return NULL;
          return t_KalmanEstimatorBuilder::wrap_Object(KalmanEstimatorBuilder(((t_KalmanEstimatorBuilder *) arg)->object.this$));
        }
        static PyObject *t_KalmanEstimatorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, KalmanEstimatorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_KalmanEstimatorBuilder_init_(t_KalmanEstimatorBuilder *self, PyObject *args, PyObject *kwds)
        {
          KalmanEstimatorBuilder object((jobject) NULL);

          INT_CALL(object = KalmanEstimatorBuilder());
          self->object = object;

          return 0;
        }

        static PyObject *t_KalmanEstimatorBuilder_addPropagationConfiguration(t_KalmanEstimatorBuilder *self, PyObject *args)
        {
          ::org::orekit::propagation::conversion::PropagatorBuilder a0((jobject) NULL);
          ::org::orekit::estimation::sequential::CovarianceMatrixProvider a1((jobject) NULL);
          KalmanEstimatorBuilder result((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::propagation::conversion::PropagatorBuilder::initializeClass, ::org::orekit::estimation::sequential::CovarianceMatrixProvider::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = self->object.addPropagationConfiguration(a0, a1));
            return t_KalmanEstimatorBuilder::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "addPropagationConfiguration", args);
          return NULL;
        }

        static PyObject *t_KalmanEstimatorBuilder_build(t_KalmanEstimatorBuilder *self)
        {
          ::org::orekit::estimation::sequential::KalmanEstimator result((jobject) NULL);
          OBJ_CALL(result = self->object.build());
          return ::org::orekit::estimation::sequential::t_KalmanEstimator::wrap_Object(result);
        }

        static PyObject *t_KalmanEstimatorBuilder_decomposer(t_KalmanEstimatorBuilder *self, PyObject *arg)
        {
          ::org::hipparchus::linear::MatrixDecomposer a0((jobject) NULL);
          KalmanEstimatorBuilder result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::hipparchus::linear::MatrixDecomposer::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.decomposer(a0));
            return t_KalmanEstimatorBuilder::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "decomposer", arg);
          return NULL;
        }

        static PyObject *t_KalmanEstimatorBuilder_estimatedMeasurementsParameters(t_KalmanEstimatorBuilder *self, PyObject *args)
        {
          ::org::orekit::utils::ParameterDriversList a0((jobject) NULL);
          ::org::orekit::estimation::sequential::CovarianceMatrixProvider a1((jobject) NULL);
          KalmanEstimatorBuilder result((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::utils::ParameterDriversList::initializeClass, ::org::orekit::estimation::sequential::CovarianceMatrixProvider::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = self->object.estimatedMeasurementsParameters(a0, a1));
            return t_KalmanEstimatorBuilder::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "estimatedMeasurementsParameters", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/lang/Number.h"
#include "java/lang/Class.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace java {
  namespace lang {

    ::java::lang::Class *Number::class$ = NULL;
    jmethodID *Number::mids$ = NULL;
    bool Number::live$ = false;

    jclass Number::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/lang/Number");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_byteValue_82ba37184c5152a3] = env->getMethodID(cls, "byteValue", "()B");
        mids$[mid_doubleValue_b74f83833fdad017] = env->getMethodID(cls, "doubleValue", "()D");
        mids$[mid_floatValue_1fb1bf0772ae5db7] = env->getMethodID(cls, "floatValue", "()F");
        mids$[mid_intValue_55546ef6a647f39b] = env->getMethodID(cls, "intValue", "()I");
        mids$[mid_longValue_6c0ce7e438e5ded4] = env->getMethodID(cls, "longValue", "()J");
        mids$[mid_shortValue_02a2271f89f4492b] = env->getMethodID(cls, "shortValue", "()S");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    Number::Number() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

    jbyte Number::byteValue() const
    {
      return env->callByteMethod(this$, mids$[mid_byteValue_82ba37184c5152a3]);
    }

    jdouble Number::doubleValue() const
    {
      return env->callDoubleMethod(this$, mids$[mid_doubleValue_b74f83833fdad017]);
    }

    jfloat Number::floatValue() const
    {
      return env->callFloatMethod(this$, mids$[mid_floatValue_1fb1bf0772ae5db7]);
    }

    jint Number::intValue() const
    {
      return env->callIntMethod(this$, mids$[mid_intValue_55546ef6a647f39b]);
    }

    jlong Number::longValue() const
    {
      return env->callLongMethod(this$, mids$[mid_longValue_6c0ce7e438e5ded4]);
    }

    jshort Number::shortValue() const
    {
      return env->callShortMethod(this$, mids$[mid_shortValue_02a2271f89f4492b]);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace lang {
    static PyObject *t_Number_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Number_instance_(PyTypeObject *type, PyObject *arg);
    static int t_Number_init_(t_Number *self, PyObject *args, PyObject *kwds);
    static PyObject *t_Number_byteValue(t_Number *self);
    static PyObject *t_Number_doubleValue(t_Number *self);
    static PyObject *t_Number_floatValue(t_Number *self);
    static PyObject *t_Number_intValue(t_Number *self);
    static PyObject *t_Number_longValue(t_Number *self);
    static PyObject *t_Number_shortValue(t_Number *self);

    static PyMethodDef t_Number__methods_[] = {
      DECLARE_METHOD(t_Number, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Number, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Number, byteValue, METH_NOARGS),
      DECLARE_METHOD(t_Number, doubleValue, METH_NOARGS),
      DECLARE_METHOD(t_Number, floatValue, METH_NOARGS),
      DECLARE_METHOD(t_Number, intValue, METH_NOARGS),
      DECLARE_METHOD(t_Number, longValue, METH_NOARGS),
      DECLARE_METHOD(t_Number, shortValue, METH_NOARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Number)[] = {
      { Py_tp_methods, t_Number__methods_ },
      { Py_tp_init, (void *) t_Number_init_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Number)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(Number, t_Number, Number);

    void t_Number::install(PyObject *module)
    {
      installType(&PY_TYPE(Number), &PY_TYPE_DEF(Number), module, "Number", 0);
    }

    void t_Number::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Number), "class_", make_descriptor(Number::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Number), "wrapfn_", make_descriptor(t_Number::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Number), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_Number_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Number::initializeClass, 1)))
        return NULL;
      return t_Number::wrap_Object(Number(((t_Number *) arg)->object.this$));
    }
    static PyObject *t_Number_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Number::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_Number_init_(t_Number *self, PyObject *args, PyObject *kwds)
    {
      Number object((jobject) NULL);

      INT_CALL(object = Number());
      self->object = object;

      return 0;
    }

    static PyObject *t_Number_byteValue(t_Number *self)
    {
      jbyte result;
      OBJ_CALL(result = self->object.byteValue());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_Number_doubleValue(t_Number *self)
    {
      jdouble result;
      OBJ_CALL(result = self->object.doubleValue());
      return PyFloat_FromDouble((double) result);
    }

    static PyObject *t_Number_floatValue(t_Number *self)
    {
      jfloat result;
      OBJ_CALL(result = self->object.floatValue());
      return PyFloat_FromDouble((double) result);
    }

    static PyObject *t_Number_intValue(t_Number *self)
    {
      jint result;
      OBJ_CALL(result = self->object.intValue());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_Number_longValue(t_Number *self)
    {
      jlong result;
      OBJ_CALL(result = self->object.longValue());
      return PyLong_FromLongLong((PY_LONG_LONG) result);
    }

    static PyObject *t_Number_shortValue(t_Number *self)
    {
      jshort result;
      OBJ_CALL(result = self->object.shortValue());
      return PyLong_FromLong((long) result);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/random/CorrelatedRandomVectorGenerator.h"
#include "org/hipparchus/random/RandomVectorGenerator.h"
#include "org/hipparchus/random/NormalizedRandomGenerator.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace random {

      ::java::lang::Class *CorrelatedRandomVectorGenerator::class$ = NULL;
      jmethodID *CorrelatedRandomVectorGenerator::mids$ = NULL;
      bool CorrelatedRandomVectorGenerator::live$ = false;

      jclass CorrelatedRandomVectorGenerator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/random/CorrelatedRandomVectorGenerator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_548e940a6e091424] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;DLorg/hipparchus/random/NormalizedRandomGenerator;)V");
          mids$[mid_init$_d14624c3caa49829] = env->getMethodID(cls, "<init>", "([DLorg/hipparchus/linear/RealMatrix;DLorg/hipparchus/random/NormalizedRandomGenerator;)V");
          mids$[mid_getGenerator_dfd058e67757027d] = env->getMethodID(cls, "getGenerator", "()Lorg/hipparchus/random/NormalizedRandomGenerator;");
          mids$[mid_getRank_55546ef6a647f39b] = env->getMethodID(cls, "getRank", "()I");
          mids$[mid_getRootMatrix_f77d745f2128c391] = env->getMethodID(cls, "getRootMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_nextVector_25e1757a36c4dde2] = env->getMethodID(cls, "nextVector", "()[D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      CorrelatedRandomVectorGenerator::CorrelatedRandomVectorGenerator(const ::org::hipparchus::linear::RealMatrix & a0, jdouble a1, const ::org::hipparchus::random::NormalizedRandomGenerator & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_548e940a6e091424, a0.this$, a1, a2.this$)) {}

      CorrelatedRandomVectorGenerator::CorrelatedRandomVectorGenerator(const JArray< jdouble > & a0, const ::org::hipparchus::linear::RealMatrix & a1, jdouble a2, const ::org::hipparchus::random::NormalizedRandomGenerator & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d14624c3caa49829, a0.this$, a1.this$, a2, a3.this$)) {}

      ::org::hipparchus::random::NormalizedRandomGenerator CorrelatedRandomVectorGenerator::getGenerator() const
      {
        return ::org::hipparchus::random::NormalizedRandomGenerator(env->callObjectMethod(this$, mids$[mid_getGenerator_dfd058e67757027d]));
      }

      jint CorrelatedRandomVectorGenerator::getRank() const
      {
        return env->callIntMethod(this$, mids$[mid_getRank_55546ef6a647f39b]);
      }

      ::org::hipparchus::linear::RealMatrix CorrelatedRandomVectorGenerator::getRootMatrix() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getRootMatrix_f77d745f2128c391]));
      }

      JArray< jdouble > CorrelatedRandomVectorGenerator::nextVector() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_nextVector_25e1757a36c4dde2]));
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
      static PyObject *t_CorrelatedRandomVectorGenerator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CorrelatedRandomVectorGenerator_instance_(PyTypeObject *type, PyObject *arg);
      static int t_CorrelatedRandomVectorGenerator_init_(t_CorrelatedRandomVectorGenerator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_CorrelatedRandomVectorGenerator_getGenerator(t_CorrelatedRandomVectorGenerator *self);
      static PyObject *t_CorrelatedRandomVectorGenerator_getRank(t_CorrelatedRandomVectorGenerator *self);
      static PyObject *t_CorrelatedRandomVectorGenerator_getRootMatrix(t_CorrelatedRandomVectorGenerator *self);
      static PyObject *t_CorrelatedRandomVectorGenerator_nextVector(t_CorrelatedRandomVectorGenerator *self);
      static PyObject *t_CorrelatedRandomVectorGenerator_get__generator(t_CorrelatedRandomVectorGenerator *self, void *data);
      static PyObject *t_CorrelatedRandomVectorGenerator_get__rank(t_CorrelatedRandomVectorGenerator *self, void *data);
      static PyObject *t_CorrelatedRandomVectorGenerator_get__rootMatrix(t_CorrelatedRandomVectorGenerator *self, void *data);
      static PyGetSetDef t_CorrelatedRandomVectorGenerator__fields_[] = {
        DECLARE_GET_FIELD(t_CorrelatedRandomVectorGenerator, generator),
        DECLARE_GET_FIELD(t_CorrelatedRandomVectorGenerator, rank),
        DECLARE_GET_FIELD(t_CorrelatedRandomVectorGenerator, rootMatrix),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_CorrelatedRandomVectorGenerator__methods_[] = {
        DECLARE_METHOD(t_CorrelatedRandomVectorGenerator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CorrelatedRandomVectorGenerator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CorrelatedRandomVectorGenerator, getGenerator, METH_NOARGS),
        DECLARE_METHOD(t_CorrelatedRandomVectorGenerator, getRank, METH_NOARGS),
        DECLARE_METHOD(t_CorrelatedRandomVectorGenerator, getRootMatrix, METH_NOARGS),
        DECLARE_METHOD(t_CorrelatedRandomVectorGenerator, nextVector, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(CorrelatedRandomVectorGenerator)[] = {
        { Py_tp_methods, t_CorrelatedRandomVectorGenerator__methods_ },
        { Py_tp_init, (void *) t_CorrelatedRandomVectorGenerator_init_ },
        { Py_tp_getset, t_CorrelatedRandomVectorGenerator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(CorrelatedRandomVectorGenerator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(CorrelatedRandomVectorGenerator, t_CorrelatedRandomVectorGenerator, CorrelatedRandomVectorGenerator);

      void t_CorrelatedRandomVectorGenerator::install(PyObject *module)
      {
        installType(&PY_TYPE(CorrelatedRandomVectorGenerator), &PY_TYPE_DEF(CorrelatedRandomVectorGenerator), module, "CorrelatedRandomVectorGenerator", 0);
      }

      void t_CorrelatedRandomVectorGenerator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(CorrelatedRandomVectorGenerator), "class_", make_descriptor(CorrelatedRandomVectorGenerator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CorrelatedRandomVectorGenerator), "wrapfn_", make_descriptor(t_CorrelatedRandomVectorGenerator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CorrelatedRandomVectorGenerator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_CorrelatedRandomVectorGenerator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, CorrelatedRandomVectorGenerator::initializeClass, 1)))
          return NULL;
        return t_CorrelatedRandomVectorGenerator::wrap_Object(CorrelatedRandomVectorGenerator(((t_CorrelatedRandomVectorGenerator *) arg)->object.this$));
      }
      static PyObject *t_CorrelatedRandomVectorGenerator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, CorrelatedRandomVectorGenerator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_CorrelatedRandomVectorGenerator_init_(t_CorrelatedRandomVectorGenerator *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            jdouble a1;
            ::org::hipparchus::random::NormalizedRandomGenerator a2((jobject) NULL);
            CorrelatedRandomVectorGenerator object((jobject) NULL);

            if (!parseArgs(args, "kDk", ::org::hipparchus::linear::RealMatrix::initializeClass, ::org::hipparchus::random::NormalizedRandomGenerator::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = CorrelatedRandomVectorGenerator(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            JArray< jdouble > a0((jobject) NULL);
            ::org::hipparchus::linear::RealMatrix a1((jobject) NULL);
            jdouble a2;
            ::org::hipparchus::random::NormalizedRandomGenerator a3((jobject) NULL);
            CorrelatedRandomVectorGenerator object((jobject) NULL);

            if (!parseArgs(args, "[DkDk", ::org::hipparchus::linear::RealMatrix::initializeClass, ::org::hipparchus::random::NormalizedRandomGenerator::initializeClass, &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = CorrelatedRandomVectorGenerator(a0, a1, a2, a3));
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

      static PyObject *t_CorrelatedRandomVectorGenerator_getGenerator(t_CorrelatedRandomVectorGenerator *self)
      {
        ::org::hipparchus::random::NormalizedRandomGenerator result((jobject) NULL);
        OBJ_CALL(result = self->object.getGenerator());
        return ::org::hipparchus::random::t_NormalizedRandomGenerator::wrap_Object(result);
      }

      static PyObject *t_CorrelatedRandomVectorGenerator_getRank(t_CorrelatedRandomVectorGenerator *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getRank());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_CorrelatedRandomVectorGenerator_getRootMatrix(t_CorrelatedRandomVectorGenerator *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getRootMatrix());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_CorrelatedRandomVectorGenerator_nextVector(t_CorrelatedRandomVectorGenerator *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.nextVector());
        return result.wrap();
      }

      static PyObject *t_CorrelatedRandomVectorGenerator_get__generator(t_CorrelatedRandomVectorGenerator *self, void *data)
      {
        ::org::hipparchus::random::NormalizedRandomGenerator value((jobject) NULL);
        OBJ_CALL(value = self->object.getGenerator());
        return ::org::hipparchus::random::t_NormalizedRandomGenerator::wrap_Object(value);
      }

      static PyObject *t_CorrelatedRandomVectorGenerator_get__rank(t_CorrelatedRandomVectorGenerator *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getRank());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_CorrelatedRandomVectorGenerator_get__rootMatrix(t_CorrelatedRandomVectorGenerator *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getRootMatrix());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/lang/System.h"
#include "java/util/Map.h"
#include "java/io/InputStream.h"
#include "java/io/Console.h"
#include "java/lang/System$Logger.h"
#include "java/util/ResourceBundle.h"
#include "java/lang/SecurityManager.h"
#include "java/util/Properties.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "java/io/PrintStream.h"
#include "JArray.h"

namespace java {
  namespace lang {

    ::java::lang::Class *System::class$ = NULL;
    jmethodID *System::mids$ = NULL;
    bool System::live$ = false;
    ::java::io::PrintStream *System::err = NULL;
    ::java::io::InputStream *System::in = NULL;
    ::java::io::PrintStream *System::out = NULL;

    jclass System::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/lang/System");

        mids$ = new jmethodID[max_mid];
        mids$[mid_arraycopy_5ef86faafe5c5319] = env->getStaticMethodID(cls, "arraycopy", "(Ljava/lang/Object;ILjava/lang/Object;II)V");
        mids$[mid_clearProperty_6f0f3576df9f75ee] = env->getStaticMethodID(cls, "clearProperty", "(Ljava/lang/String;)Ljava/lang/String;");
        mids$[mid_console_b356a13e79791853] = env->getStaticMethodID(cls, "console", "()Ljava/io/Console;");
        mids$[mid_currentTimeMillis_6c0ce7e438e5ded4] = env->getStaticMethodID(cls, "currentTimeMillis", "()J");
        mids$[mid_exit_44ed599e93e8a30c] = env->getStaticMethodID(cls, "exit", "(I)V");
        mids$[mid_gc_a1fa5dae97ea5ed2] = env->getStaticMethodID(cls, "gc", "()V");
        mids$[mid_getLogger_166034580d25badb] = env->getStaticMethodID(cls, "getLogger", "(Ljava/lang/String;)Ljava/lang/System$Logger;");
        mids$[mid_getLogger_95c3b777b3e0ddbd] = env->getStaticMethodID(cls, "getLogger", "(Ljava/lang/String;Ljava/util/ResourceBundle;)Ljava/lang/System$Logger;");
        mids$[mid_getProperties_445d7f36702bb006] = env->getStaticMethodID(cls, "getProperties", "()Ljava/util/Properties;");
        mids$[mid_getProperty_6f0f3576df9f75ee] = env->getStaticMethodID(cls, "getProperty", "(Ljava/lang/String;)Ljava/lang/String;");
        mids$[mid_getProperty_88f2f8c619f3cbd0] = env->getStaticMethodID(cls, "getProperty", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;");
        mids$[mid_getSecurityManager_b096220aecda9b75] = env->getStaticMethodID(cls, "getSecurityManager", "()Ljava/lang/SecurityManager;");
        mids$[mid_getenv_810bed48fafb0b9a] = env->getStaticMethodID(cls, "getenv", "()Ljava/util/Map;");
        mids$[mid_getenv_6f0f3576df9f75ee] = env->getStaticMethodID(cls, "getenv", "(Ljava/lang/String;)Ljava/lang/String;");
        mids$[mid_identityHashCode_b7898c5e94612125] = env->getStaticMethodID(cls, "identityHashCode", "(Ljava/lang/Object;)I");
        mids$[mid_lineSeparator_1c1fa1e935d6cdcf] = env->getStaticMethodID(cls, "lineSeparator", "()Ljava/lang/String;");
        mids$[mid_load_734b91ac30d5f9b4] = env->getStaticMethodID(cls, "load", "(Ljava/lang/String;)V");
        mids$[mid_loadLibrary_734b91ac30d5f9b4] = env->getStaticMethodID(cls, "loadLibrary", "(Ljava/lang/String;)V");
        mids$[mid_mapLibraryName_6f0f3576df9f75ee] = env->getStaticMethodID(cls, "mapLibraryName", "(Ljava/lang/String;)Ljava/lang/String;");
        mids$[mid_nanoTime_6c0ce7e438e5ded4] = env->getStaticMethodID(cls, "nanoTime", "()J");
        mids$[mid_runFinalization_a1fa5dae97ea5ed2] = env->getStaticMethodID(cls, "runFinalization", "()V");
        mids$[mid_setErr_5820b90479773400] = env->getStaticMethodID(cls, "setErr", "(Ljava/io/PrintStream;)V");
        mids$[mid_setIn_471a178453aa39ad] = env->getStaticMethodID(cls, "setIn", "(Ljava/io/InputStream;)V");
        mids$[mid_setOut_5820b90479773400] = env->getStaticMethodID(cls, "setOut", "(Ljava/io/PrintStream;)V");
        mids$[mid_setProperties_8d64b213c25ee01e] = env->getStaticMethodID(cls, "setProperties", "(Ljava/util/Properties;)V");
        mids$[mid_setProperty_88f2f8c619f3cbd0] = env->getStaticMethodID(cls, "setProperty", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;");
        mids$[mid_setSecurityManager_d90250d0a4a5dad5] = env->getStaticMethodID(cls, "setSecurityManager", "(Ljava/lang/SecurityManager;)V");

        class$ = new ::java::lang::Class(cls);
        cls = (jclass) class$->this$;

        err = new ::java::io::PrintStream(env->getStaticObjectField(cls, "err", "Ljava/io/PrintStream;"));
        in = new ::java::io::InputStream(env->getStaticObjectField(cls, "in", "Ljava/io/InputStream;"));
        out = new ::java::io::PrintStream(env->getStaticObjectField(cls, "out", "Ljava/io/PrintStream;"));
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    void System::arraycopy(const ::java::lang::Object & a0, jint a1, const ::java::lang::Object & a2, jint a3, jint a4)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_arraycopy_5ef86faafe5c5319], a0.this$, a1, a2.this$, a3, a4);
    }

    ::java::lang::String System::clearProperty(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_clearProperty_6f0f3576df9f75ee], a0.this$));
    }

    ::java::io::Console System::console()
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::io::Console(env->callStaticObjectMethod(cls, mids$[mid_console_b356a13e79791853]));
    }

    jlong System::currentTimeMillis()
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticLongMethod(cls, mids$[mid_currentTimeMillis_6c0ce7e438e5ded4]);
    }

    void System::exit(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_exit_44ed599e93e8a30c], a0);
    }

    void System::gc()
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_gc_a1fa5dae97ea5ed2]);
    }

    ::java::lang::System$Logger System::getLogger(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::System$Logger(env->callStaticObjectMethod(cls, mids$[mid_getLogger_166034580d25badb], a0.this$));
    }

    ::java::lang::System$Logger System::getLogger(const ::java::lang::String & a0, const ::java::util::ResourceBundle & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::System$Logger(env->callStaticObjectMethod(cls, mids$[mid_getLogger_95c3b777b3e0ddbd], a0.this$, a1.this$));
    }

    ::java::util::Properties System::getProperties()
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Properties(env->callStaticObjectMethod(cls, mids$[mid_getProperties_445d7f36702bb006]));
    }

    ::java::lang::String System::getProperty(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_getProperty_6f0f3576df9f75ee], a0.this$));
    }

    ::java::lang::String System::getProperty(const ::java::lang::String & a0, const ::java::lang::String & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_getProperty_88f2f8c619f3cbd0], a0.this$, a1.this$));
    }

    ::java::lang::SecurityManager System::getSecurityManager()
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::SecurityManager(env->callStaticObjectMethod(cls, mids$[mid_getSecurityManager_b096220aecda9b75]));
    }

    ::java::util::Map System::getenv()
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Map(env->callStaticObjectMethod(cls, mids$[mid_getenv_810bed48fafb0b9a]));
    }

    ::java::lang::String System::getenv(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_getenv_6f0f3576df9f75ee], a0.this$));
    }

    jint System::identityHashCode(const ::java::lang::Object & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_identityHashCode_b7898c5e94612125], a0.this$);
    }

    ::java::lang::String System::lineSeparator()
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_lineSeparator_1c1fa1e935d6cdcf]));
    }

    void System::load(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_load_734b91ac30d5f9b4], a0.this$);
    }

    void System::loadLibrary(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_loadLibrary_734b91ac30d5f9b4], a0.this$);
    }

    ::java::lang::String System::mapLibraryName(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_mapLibraryName_6f0f3576df9f75ee], a0.this$));
    }

    jlong System::nanoTime()
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticLongMethod(cls, mids$[mid_nanoTime_6c0ce7e438e5ded4]);
    }

    void System::runFinalization()
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_runFinalization_a1fa5dae97ea5ed2]);
    }

    void System::setErr(const ::java::io::PrintStream & a0)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_setErr_5820b90479773400], a0.this$);
    }

    void System::setIn(const ::java::io::InputStream & a0)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_setIn_471a178453aa39ad], a0.this$);
    }

    void System::setOut(const ::java::io::PrintStream & a0)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_setOut_5820b90479773400], a0.this$);
    }

    void System::setProperties(const ::java::util::Properties & a0)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_setProperties_8d64b213c25ee01e], a0.this$);
    }

    ::java::lang::String System::setProperty(const ::java::lang::String & a0, const ::java::lang::String & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_setProperty_88f2f8c619f3cbd0], a0.this$, a1.this$));
    }

    void System::setSecurityManager(const ::java::lang::SecurityManager & a0)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_setSecurityManager_d90250d0a4a5dad5], a0.this$);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace lang {
    static PyObject *t_System_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_System_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_System_arraycopy(PyTypeObject *type, PyObject *args);
    static PyObject *t_System_clearProperty(PyTypeObject *type, PyObject *arg);
    static PyObject *t_System_console(PyTypeObject *type);
    static PyObject *t_System_currentTimeMillis(PyTypeObject *type);
    static PyObject *t_System_exit(PyTypeObject *type, PyObject *arg);
    static PyObject *t_System_gc(PyTypeObject *type);
    static PyObject *t_System_getLogger(PyTypeObject *type, PyObject *args);
    static PyObject *t_System_getProperties(PyTypeObject *type);
    static PyObject *t_System_getProperty(PyTypeObject *type, PyObject *args);
    static PyObject *t_System_getSecurityManager(PyTypeObject *type);
    static PyObject *t_System_getenv(PyTypeObject *type, PyObject *args);
    static PyObject *t_System_identityHashCode(PyTypeObject *type, PyObject *arg);
    static PyObject *t_System_lineSeparator(PyTypeObject *type);
    static PyObject *t_System_load(PyTypeObject *type, PyObject *arg);
    static PyObject *t_System_loadLibrary(PyTypeObject *type, PyObject *arg);
    static PyObject *t_System_mapLibraryName(PyTypeObject *type, PyObject *arg);
    static PyObject *t_System_nanoTime(PyTypeObject *type);
    static PyObject *t_System_runFinalization(PyTypeObject *type);
    static PyObject *t_System_setErr(PyTypeObject *type, PyObject *arg);
    static PyObject *t_System_setIn(PyTypeObject *type, PyObject *arg);
    static PyObject *t_System_setOut(PyTypeObject *type, PyObject *arg);
    static PyObject *t_System_setProperties(PyTypeObject *type, PyObject *arg);
    static PyObject *t_System_setProperty(PyTypeObject *type, PyObject *args);
    static PyObject *t_System_setSecurityManager(PyTypeObject *type, PyObject *arg);
    static PyObject *t_System_get__env(t_System *self, void *data);
    static int t_System_set__err(t_System *self, PyObject *arg, void *data);
    static int t_System_set__in(t_System *self, PyObject *arg, void *data);
    static int t_System_set__out(t_System *self, PyObject *arg, void *data);
    static PyObject *t_System_get__properties(t_System *self, void *data);
    static int t_System_set__properties(t_System *self, PyObject *arg, void *data);
    static PyObject *t_System_get__securityManager(t_System *self, void *data);
    static int t_System_set__securityManager(t_System *self, PyObject *arg, void *data);
    static PyGetSetDef t_System__fields_[] = {
      DECLARE_GET_FIELD(t_System, env),
      DECLARE_SET_FIELD(t_System, err),
      DECLARE_SET_FIELD(t_System, in),
      DECLARE_SET_FIELD(t_System, out),
      DECLARE_GETSET_FIELD(t_System, properties),
      DECLARE_GETSET_FIELD(t_System, securityManager),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_System__methods_[] = {
      DECLARE_METHOD(t_System, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_System, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_System, arraycopy, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_System, clearProperty, METH_O | METH_CLASS),
      DECLARE_METHOD(t_System, console, METH_NOARGS | METH_CLASS),
      DECLARE_METHOD(t_System, currentTimeMillis, METH_NOARGS | METH_CLASS),
      DECLARE_METHOD(t_System, exit, METH_O | METH_CLASS),
      DECLARE_METHOD(t_System, gc, METH_NOARGS | METH_CLASS),
      DECLARE_METHOD(t_System, getLogger, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_System, getProperties, METH_NOARGS | METH_CLASS),
      DECLARE_METHOD(t_System, getProperty, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_System, getSecurityManager, METH_NOARGS | METH_CLASS),
      DECLARE_METHOD(t_System, getenv, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_System, identityHashCode, METH_O | METH_CLASS),
      DECLARE_METHOD(t_System, lineSeparator, METH_NOARGS | METH_CLASS),
      DECLARE_METHOD(t_System, load, METH_O | METH_CLASS),
      DECLARE_METHOD(t_System, loadLibrary, METH_O | METH_CLASS),
      DECLARE_METHOD(t_System, mapLibraryName, METH_O | METH_CLASS),
      DECLARE_METHOD(t_System, nanoTime, METH_NOARGS | METH_CLASS),
      DECLARE_METHOD(t_System, runFinalization, METH_NOARGS | METH_CLASS),
      DECLARE_METHOD(t_System, setErr, METH_O | METH_CLASS),
      DECLARE_METHOD(t_System, setIn, METH_O | METH_CLASS),
      DECLARE_METHOD(t_System, setOut, METH_O | METH_CLASS),
      DECLARE_METHOD(t_System, setProperties, METH_O | METH_CLASS),
      DECLARE_METHOD(t_System, setProperty, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_System, setSecurityManager, METH_O | METH_CLASS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(System)[] = {
      { Py_tp_methods, t_System__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { Py_tp_getset, t_System__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(System)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(System, t_System, System);

    void t_System::install(PyObject *module)
    {
      installType(&PY_TYPE(System), &PY_TYPE_DEF(System), module, "System", 0);
      PyObject_SetAttrString((PyObject *) PY_TYPE(System), "Logger", make_descriptor(&PY_TYPE_DEF(System$Logger)));
    }

    void t_System::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(System), "class_", make_descriptor(System::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(System), "wrapfn_", make_descriptor(t_System::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(System), "boxfn_", make_descriptor(boxObject));
      env->getClass(System::initializeClass);
      PyObject_SetAttrString((PyObject *) PY_TYPE(System), "err", make_descriptor(::java::io::t_PrintStream::wrap_Object(*System::err)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(System), "in", make_descriptor(::java::io::t_InputStream::wrap_Object(*System::in)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(System), "out", make_descriptor(::java::io::t_PrintStream::wrap_Object(*System::out)));
    }

    static PyObject *t_System_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, System::initializeClass, 1)))
        return NULL;
      return t_System::wrap_Object(System(((t_System *) arg)->object.this$));
    }
    static PyObject *t_System_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, System::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_System_arraycopy(PyTypeObject *type, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jint a1;
      ::java::lang::Object a2((jobject) NULL);
      jint a3;
      jint a4;

      if (!parseArgs(args, "oIoII", &a0, &a1, &a2, &a3, &a4))
      {
        OBJ_CALL(::java::lang::System::arraycopy(a0, a1, a2, a3, a4));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError(type, "arraycopy", args);
      return NULL;
    }

    static PyObject *t_System_clearProperty(PyTypeObject *type, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);
      ::java::lang::String result((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(result = ::java::lang::System::clearProperty(a0));
        return j2p(result);
      }

      PyErr_SetArgsError(type, "clearProperty", arg);
      return NULL;
    }

    static PyObject *t_System_console(PyTypeObject *type)
    {
      ::java::io::Console result((jobject) NULL);
      OBJ_CALL(result = ::java::lang::System::console());
      return ::java::io::t_Console::wrap_Object(result);
    }

    static PyObject *t_System_currentTimeMillis(PyTypeObject *type)
    {
      jlong result;
      OBJ_CALL(result = ::java::lang::System::currentTimeMillis());
      return PyLong_FromLongLong((PY_LONG_LONG) result);
    }

    static PyObject *t_System_exit(PyTypeObject *type, PyObject *arg)
    {
      jint a0;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(::java::lang::System::exit(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError(type, "exit", arg);
      return NULL;
    }

    static PyObject *t_System_gc(PyTypeObject *type)
    {
      OBJ_CALL(::java::lang::System::gc());
      Py_RETURN_NONE;
    }

    static PyObject *t_System_getLogger(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::lang::System$Logger result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::java::lang::System::getLogger(a0));
            return ::java::lang::t_System$Logger::wrap_Object(result);
          }
        }
        break;
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::util::ResourceBundle a1((jobject) NULL);
          ::java::lang::System$Logger result((jobject) NULL);

          if (!parseArgs(args, "sk", ::java::util::ResourceBundle::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = ::java::lang::System::getLogger(a0, a1));
            return ::java::lang::t_System$Logger::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError(type, "getLogger", args);
      return NULL;
    }

    static PyObject *t_System_getProperties(PyTypeObject *type)
    {
      ::java::util::Properties result((jobject) NULL);
      OBJ_CALL(result = ::java::lang::System::getProperties());
      return ::java::util::t_Properties::wrap_Object(result);
    }

    static PyObject *t_System_getProperty(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::java::lang::System::getProperty(a0));
            return j2p(result);
          }
        }
        break;
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::lang::String a1((jobject) NULL);
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "ss", &a0, &a1))
          {
            OBJ_CALL(result = ::java::lang::System::getProperty(a0, a1));
            return j2p(result);
          }
        }
      }

      PyErr_SetArgsError(type, "getProperty", args);
      return NULL;
    }

    static PyObject *t_System_getSecurityManager(PyTypeObject *type)
    {
      ::java::lang::SecurityManager result((jobject) NULL);
      OBJ_CALL(result = ::java::lang::System::getSecurityManager());
      return ::java::lang::t_SecurityManager::wrap_Object(result);
    }

    static PyObject *t_System_getenv(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          ::java::util::Map result((jobject) NULL);
          OBJ_CALL(result = ::java::lang::System::getenv());
          return ::java::util::t_Map::wrap_Object(result, ::java::lang::PY_TYPE(String), ::java::lang::PY_TYPE(String));
        }
        break;
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::java::lang::System::getenv(a0));
            return j2p(result);
          }
        }
      }

      PyErr_SetArgsError(type, "getenv", args);
      return NULL;
    }

    static PyObject *t_System_identityHashCode(PyTypeObject *type, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      jint result;

      if (!parseArg(arg, "o", &a0))
      {
        OBJ_CALL(result = ::java::lang::System::identityHashCode(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "identityHashCode", arg);
      return NULL;
    }

    static PyObject *t_System_lineSeparator(PyTypeObject *type)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = ::java::lang::System::lineSeparator());
      return j2p(result);
    }

    static PyObject *t_System_load(PyTypeObject *type, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(::java::lang::System::load(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError(type, "load", arg);
      return NULL;
    }

    static PyObject *t_System_loadLibrary(PyTypeObject *type, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(::java::lang::System::loadLibrary(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError(type, "loadLibrary", arg);
      return NULL;
    }

    static PyObject *t_System_mapLibraryName(PyTypeObject *type, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);
      ::java::lang::String result((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(result = ::java::lang::System::mapLibraryName(a0));
        return j2p(result);
      }

      PyErr_SetArgsError(type, "mapLibraryName", arg);
      return NULL;
    }

    static PyObject *t_System_nanoTime(PyTypeObject *type)
    {
      jlong result;
      OBJ_CALL(result = ::java::lang::System::nanoTime());
      return PyLong_FromLongLong((PY_LONG_LONG) result);
    }

    static PyObject *t_System_runFinalization(PyTypeObject *type)
    {
      OBJ_CALL(::java::lang::System::runFinalization());
      Py_RETURN_NONE;
    }

    static PyObject *t_System_setErr(PyTypeObject *type, PyObject *arg)
    {
      ::java::io::PrintStream a0((jobject) NULL);

      if (!parseArg(arg, "k", ::java::io::PrintStream::initializeClass, &a0))
      {
        OBJ_CALL(::java::lang::System::setErr(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError(type, "setErr", arg);
      return NULL;
    }

    static PyObject *t_System_setIn(PyTypeObject *type, PyObject *arg)
    {
      ::java::io::InputStream a0((jobject) NULL);

      if (!parseArg(arg, "k", ::java::io::InputStream::initializeClass, &a0))
      {
        OBJ_CALL(::java::lang::System::setIn(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError(type, "setIn", arg);
      return NULL;
    }

    static PyObject *t_System_setOut(PyTypeObject *type, PyObject *arg)
    {
      ::java::io::PrintStream a0((jobject) NULL);

      if (!parseArg(arg, "k", ::java::io::PrintStream::initializeClass, &a0))
      {
        OBJ_CALL(::java::lang::System::setOut(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError(type, "setOut", arg);
      return NULL;
    }

    static PyObject *t_System_setProperties(PyTypeObject *type, PyObject *arg)
    {
      ::java::util::Properties a0((jobject) NULL);
      PyTypeObject **p0;

      if (!parseArg(arg, "K", ::java::util::Properties::initializeClass, &a0, &p0, ::java::util::t_Properties::parameters_))
      {
        OBJ_CALL(::java::lang::System::setProperties(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError(type, "setProperties", arg);
      return NULL;
    }

    static PyObject *t_System_setProperty(PyTypeObject *type, PyObject *args)
    {
      ::java::lang::String a0((jobject) NULL);
      ::java::lang::String a1((jobject) NULL);
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, "ss", &a0, &a1))
      {
        OBJ_CALL(result = ::java::lang::System::setProperty(a0, a1));
        return j2p(result);
      }

      PyErr_SetArgsError(type, "setProperty", args);
      return NULL;
    }

    static PyObject *t_System_setSecurityManager(PyTypeObject *type, PyObject *arg)
    {
      ::java::lang::SecurityManager a0((jobject) NULL);

      if (!parseArg(arg, "k", ::java::lang::SecurityManager::initializeClass, &a0))
      {
        OBJ_CALL(::java::lang::System::setSecurityManager(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError(type, "setSecurityManager", arg);
      return NULL;
    }

    static PyObject *t_System_get__env(t_System *self, void *data)
    {
      ::java::util::Map value((jobject) NULL);
      OBJ_CALL(value = self->object.getenv());
      return ::java::util::t_Map::wrap_Object(value);
    }

    static int t_System_set__err(t_System *self, PyObject *arg, void *data)
    {
      {
        ::java::io::PrintStream value((jobject) NULL);
        if (!parseArg(arg, "k", ::java::io::PrintStream::initializeClass, &value))
        {
          INT_CALL(self->object.setErr(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "err", arg);
      return -1;
    }

    static int t_System_set__in(t_System *self, PyObject *arg, void *data)
    {
      {
        ::java::io::InputStream value((jobject) NULL);
        if (!parseArg(arg, "k", ::java::io::InputStream::initializeClass, &value))
        {
          INT_CALL(self->object.setIn(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "in", arg);
      return -1;
    }

    static int t_System_set__out(t_System *self, PyObject *arg, void *data)
    {
      {
        ::java::io::PrintStream value((jobject) NULL);
        if (!parseArg(arg, "k", ::java::io::PrintStream::initializeClass, &value))
        {
          INT_CALL(self->object.setOut(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "out", arg);
      return -1;
    }

    static PyObject *t_System_get__properties(t_System *self, void *data)
    {
      ::java::util::Properties value((jobject) NULL);
      OBJ_CALL(value = self->object.getProperties());
      return ::java::util::t_Properties::wrap_Object(value);
    }
    static int t_System_set__properties(t_System *self, PyObject *arg, void *data)
    {
      {
        ::java::util::Properties value((jobject) NULL);
        if (!parseArg(arg, "k", ::java::util::Properties::initializeClass, &value))
        {
          INT_CALL(self->object.setProperties(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "properties", arg);
      return -1;
    }

    static PyObject *t_System_get__securityManager(t_System *self, void *data)
    {
      ::java::lang::SecurityManager value((jobject) NULL);
      OBJ_CALL(value = self->object.getSecurityManager());
      return ::java::lang::t_SecurityManager::wrap_Object(value);
    }
    static int t_System_set__securityManager(t_System *self, PyObject *arg, void *data)
    {
      {
        ::java::lang::SecurityManager value((jobject) NULL);
        if (!parseArg(arg, "k", ::java::lang::SecurityManager::initializeClass, &value))
        {
          INT_CALL(self->object.setSecurityManager(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "securityManager", arg);
      return -1;
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/cdm/AdditionalCovarianceMetadata.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *AdditionalCovarianceMetadata::class$ = NULL;
            jmethodID *AdditionalCovarianceMetadata::mids$ = NULL;
            bool AdditionalCovarianceMetadata::live$ = false;

            jclass AdditionalCovarianceMetadata::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/AdditionalCovarianceMetadata");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_getDcpSensitivityVectorPosition_25e1757a36c4dde2] = env->getMethodID(cls, "getDcpSensitivityVectorPosition", "()[D");
                mids$[mid_getDcpSensitivityVectorVelocity_25e1757a36c4dde2] = env->getMethodID(cls, "getDcpSensitivityVectorVelocity", "()[D");
                mids$[mid_getDensityForecastUncertainty_b74f83833fdad017] = env->getMethodID(cls, "getDensityForecastUncertainty", "()D");
                mids$[mid_getScreeningDataSource_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getScreeningDataSource", "()Ljava/lang/String;");
                mids$[mid_getcScaleFactor_b74f83833fdad017] = env->getMethodID(cls, "getcScaleFactor", "()D");
                mids$[mid_getcScaleFactorMax_b74f83833fdad017] = env->getMethodID(cls, "getcScaleFactorMax", "()D");
                mids$[mid_getcScaleFactorMin_b74f83833fdad017] = env->getMethodID(cls, "getcScaleFactorMin", "()D");
                mids$[mid_setDcpSensitivityVectorPosition_ab69da052b88f50c] = env->getMethodID(cls, "setDcpSensitivityVectorPosition", "([D)V");
                mids$[mid_setDcpSensitivityVectorVelocity_ab69da052b88f50c] = env->getMethodID(cls, "setDcpSensitivityVectorVelocity", "([D)V");
                mids$[mid_setDensityForecastUncertainty_8ba9fe7a847cecad] = env->getMethodID(cls, "setDensityForecastUncertainty", "(D)V");
                mids$[mid_setScreeningDataSource_734b91ac30d5f9b4] = env->getMethodID(cls, "setScreeningDataSource", "(Ljava/lang/String;)V");
                mids$[mid_setcScaleFactor_8ba9fe7a847cecad] = env->getMethodID(cls, "setcScaleFactor", "(D)V");
                mids$[mid_setcScaleFactorMax_8ba9fe7a847cecad] = env->getMethodID(cls, "setcScaleFactorMax", "(D)V");
                mids$[mid_setcScaleFactorMin_8ba9fe7a847cecad] = env->getMethodID(cls, "setcScaleFactorMin", "(D)V");
                mids$[mid_validate_8ba9fe7a847cecad] = env->getMethodID(cls, "validate", "(D)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            AdditionalCovarianceMetadata::AdditionalCovarianceMetadata() : ::org::orekit::files::ccsds::section::CommentsContainer(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

            JArray< jdouble > AdditionalCovarianceMetadata::getDcpSensitivityVectorPosition() const
            {
              return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getDcpSensitivityVectorPosition_25e1757a36c4dde2]));
            }

            JArray< jdouble > AdditionalCovarianceMetadata::getDcpSensitivityVectorVelocity() const
            {
              return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getDcpSensitivityVectorVelocity_25e1757a36c4dde2]));
            }

            jdouble AdditionalCovarianceMetadata::getDensityForecastUncertainty() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getDensityForecastUncertainty_b74f83833fdad017]);
            }

            ::java::lang::String AdditionalCovarianceMetadata::getScreeningDataSource() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getScreeningDataSource_1c1fa1e935d6cdcf]));
            }

            jdouble AdditionalCovarianceMetadata::getcScaleFactor() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getcScaleFactor_b74f83833fdad017]);
            }

            jdouble AdditionalCovarianceMetadata::getcScaleFactorMax() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getcScaleFactorMax_b74f83833fdad017]);
            }

            jdouble AdditionalCovarianceMetadata::getcScaleFactorMin() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getcScaleFactorMin_b74f83833fdad017]);
            }

            void AdditionalCovarianceMetadata::setDcpSensitivityVectorPosition(const JArray< jdouble > & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setDcpSensitivityVectorPosition_ab69da052b88f50c], a0.this$);
            }

            void AdditionalCovarianceMetadata::setDcpSensitivityVectorVelocity(const JArray< jdouble > & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setDcpSensitivityVectorVelocity_ab69da052b88f50c], a0.this$);
            }

            void AdditionalCovarianceMetadata::setDensityForecastUncertainty(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setDensityForecastUncertainty_8ba9fe7a847cecad], a0);
            }

            void AdditionalCovarianceMetadata::setScreeningDataSource(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setScreeningDataSource_734b91ac30d5f9b4], a0.this$);
            }

            void AdditionalCovarianceMetadata::setcScaleFactor(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setcScaleFactor_8ba9fe7a847cecad], a0);
            }

            void AdditionalCovarianceMetadata::setcScaleFactorMax(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setcScaleFactorMax_8ba9fe7a847cecad], a0);
            }

            void AdditionalCovarianceMetadata::setcScaleFactorMin(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setcScaleFactorMin_8ba9fe7a847cecad], a0);
            }

            void AdditionalCovarianceMetadata::validate(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_validate_8ba9fe7a847cecad], a0);
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
            static PyObject *t_AdditionalCovarianceMetadata_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AdditionalCovarianceMetadata_instance_(PyTypeObject *type, PyObject *arg);
            static int t_AdditionalCovarianceMetadata_init_(t_AdditionalCovarianceMetadata *self, PyObject *args, PyObject *kwds);
            static PyObject *t_AdditionalCovarianceMetadata_getDcpSensitivityVectorPosition(t_AdditionalCovarianceMetadata *self);
            static PyObject *t_AdditionalCovarianceMetadata_getDcpSensitivityVectorVelocity(t_AdditionalCovarianceMetadata *self);
            static PyObject *t_AdditionalCovarianceMetadata_getDensityForecastUncertainty(t_AdditionalCovarianceMetadata *self);
            static PyObject *t_AdditionalCovarianceMetadata_getScreeningDataSource(t_AdditionalCovarianceMetadata *self);
            static PyObject *t_AdditionalCovarianceMetadata_getcScaleFactor(t_AdditionalCovarianceMetadata *self);
            static PyObject *t_AdditionalCovarianceMetadata_getcScaleFactorMax(t_AdditionalCovarianceMetadata *self);
            static PyObject *t_AdditionalCovarianceMetadata_getcScaleFactorMin(t_AdditionalCovarianceMetadata *self);
            static PyObject *t_AdditionalCovarianceMetadata_setDcpSensitivityVectorPosition(t_AdditionalCovarianceMetadata *self, PyObject *arg);
            static PyObject *t_AdditionalCovarianceMetadata_setDcpSensitivityVectorVelocity(t_AdditionalCovarianceMetadata *self, PyObject *arg);
            static PyObject *t_AdditionalCovarianceMetadata_setDensityForecastUncertainty(t_AdditionalCovarianceMetadata *self, PyObject *arg);
            static PyObject *t_AdditionalCovarianceMetadata_setScreeningDataSource(t_AdditionalCovarianceMetadata *self, PyObject *arg);
            static PyObject *t_AdditionalCovarianceMetadata_setcScaleFactor(t_AdditionalCovarianceMetadata *self, PyObject *arg);
            static PyObject *t_AdditionalCovarianceMetadata_setcScaleFactorMax(t_AdditionalCovarianceMetadata *self, PyObject *arg);
            static PyObject *t_AdditionalCovarianceMetadata_setcScaleFactorMin(t_AdditionalCovarianceMetadata *self, PyObject *arg);
            static PyObject *t_AdditionalCovarianceMetadata_validate(t_AdditionalCovarianceMetadata *self, PyObject *args);
            static PyObject *t_AdditionalCovarianceMetadata_get__cScaleFactor(t_AdditionalCovarianceMetadata *self, void *data);
            static int t_AdditionalCovarianceMetadata_set__cScaleFactor(t_AdditionalCovarianceMetadata *self, PyObject *arg, void *data);
            static PyObject *t_AdditionalCovarianceMetadata_get__cScaleFactorMax(t_AdditionalCovarianceMetadata *self, void *data);
            static int t_AdditionalCovarianceMetadata_set__cScaleFactorMax(t_AdditionalCovarianceMetadata *self, PyObject *arg, void *data);
            static PyObject *t_AdditionalCovarianceMetadata_get__cScaleFactorMin(t_AdditionalCovarianceMetadata *self, void *data);
            static int t_AdditionalCovarianceMetadata_set__cScaleFactorMin(t_AdditionalCovarianceMetadata *self, PyObject *arg, void *data);
            static PyObject *t_AdditionalCovarianceMetadata_get__dcpSensitivityVectorPosition(t_AdditionalCovarianceMetadata *self, void *data);
            static int t_AdditionalCovarianceMetadata_set__dcpSensitivityVectorPosition(t_AdditionalCovarianceMetadata *self, PyObject *arg, void *data);
            static PyObject *t_AdditionalCovarianceMetadata_get__dcpSensitivityVectorVelocity(t_AdditionalCovarianceMetadata *self, void *data);
            static int t_AdditionalCovarianceMetadata_set__dcpSensitivityVectorVelocity(t_AdditionalCovarianceMetadata *self, PyObject *arg, void *data);
            static PyObject *t_AdditionalCovarianceMetadata_get__densityForecastUncertainty(t_AdditionalCovarianceMetadata *self, void *data);
            static int t_AdditionalCovarianceMetadata_set__densityForecastUncertainty(t_AdditionalCovarianceMetadata *self, PyObject *arg, void *data);
            static PyObject *t_AdditionalCovarianceMetadata_get__screeningDataSource(t_AdditionalCovarianceMetadata *self, void *data);
            static int t_AdditionalCovarianceMetadata_set__screeningDataSource(t_AdditionalCovarianceMetadata *self, PyObject *arg, void *data);
            static PyGetSetDef t_AdditionalCovarianceMetadata__fields_[] = {
              DECLARE_GETSET_FIELD(t_AdditionalCovarianceMetadata, cScaleFactor),
              DECLARE_GETSET_FIELD(t_AdditionalCovarianceMetadata, cScaleFactorMax),
              DECLARE_GETSET_FIELD(t_AdditionalCovarianceMetadata, cScaleFactorMin),
              DECLARE_GETSET_FIELD(t_AdditionalCovarianceMetadata, dcpSensitivityVectorPosition),
              DECLARE_GETSET_FIELD(t_AdditionalCovarianceMetadata, dcpSensitivityVectorVelocity),
              DECLARE_GETSET_FIELD(t_AdditionalCovarianceMetadata, densityForecastUncertainty),
              DECLARE_GETSET_FIELD(t_AdditionalCovarianceMetadata, screeningDataSource),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_AdditionalCovarianceMetadata__methods_[] = {
              DECLARE_METHOD(t_AdditionalCovarianceMetadata, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AdditionalCovarianceMetadata, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AdditionalCovarianceMetadata, getDcpSensitivityVectorPosition, METH_NOARGS),
              DECLARE_METHOD(t_AdditionalCovarianceMetadata, getDcpSensitivityVectorVelocity, METH_NOARGS),
              DECLARE_METHOD(t_AdditionalCovarianceMetadata, getDensityForecastUncertainty, METH_NOARGS),
              DECLARE_METHOD(t_AdditionalCovarianceMetadata, getScreeningDataSource, METH_NOARGS),
              DECLARE_METHOD(t_AdditionalCovarianceMetadata, getcScaleFactor, METH_NOARGS),
              DECLARE_METHOD(t_AdditionalCovarianceMetadata, getcScaleFactorMax, METH_NOARGS),
              DECLARE_METHOD(t_AdditionalCovarianceMetadata, getcScaleFactorMin, METH_NOARGS),
              DECLARE_METHOD(t_AdditionalCovarianceMetadata, setDcpSensitivityVectorPosition, METH_O),
              DECLARE_METHOD(t_AdditionalCovarianceMetadata, setDcpSensitivityVectorVelocity, METH_O),
              DECLARE_METHOD(t_AdditionalCovarianceMetadata, setDensityForecastUncertainty, METH_O),
              DECLARE_METHOD(t_AdditionalCovarianceMetadata, setScreeningDataSource, METH_O),
              DECLARE_METHOD(t_AdditionalCovarianceMetadata, setcScaleFactor, METH_O),
              DECLARE_METHOD(t_AdditionalCovarianceMetadata, setcScaleFactorMax, METH_O),
              DECLARE_METHOD(t_AdditionalCovarianceMetadata, setcScaleFactorMin, METH_O),
              DECLARE_METHOD(t_AdditionalCovarianceMetadata, validate, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(AdditionalCovarianceMetadata)[] = {
              { Py_tp_methods, t_AdditionalCovarianceMetadata__methods_ },
              { Py_tp_init, (void *) t_AdditionalCovarianceMetadata_init_ },
              { Py_tp_getset, t_AdditionalCovarianceMetadata__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(AdditionalCovarianceMetadata)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::section::CommentsContainer),
              NULL
            };

            DEFINE_TYPE(AdditionalCovarianceMetadata, t_AdditionalCovarianceMetadata, AdditionalCovarianceMetadata);

            void t_AdditionalCovarianceMetadata::install(PyObject *module)
            {
              installType(&PY_TYPE(AdditionalCovarianceMetadata), &PY_TYPE_DEF(AdditionalCovarianceMetadata), module, "AdditionalCovarianceMetadata", 0);
            }

            void t_AdditionalCovarianceMetadata::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalCovarianceMetadata), "class_", make_descriptor(AdditionalCovarianceMetadata::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalCovarianceMetadata), "wrapfn_", make_descriptor(t_AdditionalCovarianceMetadata::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalCovarianceMetadata), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_AdditionalCovarianceMetadata_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, AdditionalCovarianceMetadata::initializeClass, 1)))
                return NULL;
              return t_AdditionalCovarianceMetadata::wrap_Object(AdditionalCovarianceMetadata(((t_AdditionalCovarianceMetadata *) arg)->object.this$));
            }
            static PyObject *t_AdditionalCovarianceMetadata_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, AdditionalCovarianceMetadata::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_AdditionalCovarianceMetadata_init_(t_AdditionalCovarianceMetadata *self, PyObject *args, PyObject *kwds)
            {
              AdditionalCovarianceMetadata object((jobject) NULL);

              INT_CALL(object = AdditionalCovarianceMetadata());
              self->object = object;

              return 0;
            }

            static PyObject *t_AdditionalCovarianceMetadata_getDcpSensitivityVectorPosition(t_AdditionalCovarianceMetadata *self)
            {
              JArray< jdouble > result((jobject) NULL);
              OBJ_CALL(result = self->object.getDcpSensitivityVectorPosition());
              return result.wrap();
            }

            static PyObject *t_AdditionalCovarianceMetadata_getDcpSensitivityVectorVelocity(t_AdditionalCovarianceMetadata *self)
            {
              JArray< jdouble > result((jobject) NULL);
              OBJ_CALL(result = self->object.getDcpSensitivityVectorVelocity());
              return result.wrap();
            }

            static PyObject *t_AdditionalCovarianceMetadata_getDensityForecastUncertainty(t_AdditionalCovarianceMetadata *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getDensityForecastUncertainty());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AdditionalCovarianceMetadata_getScreeningDataSource(t_AdditionalCovarianceMetadata *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getScreeningDataSource());
              return j2p(result);
            }

            static PyObject *t_AdditionalCovarianceMetadata_getcScaleFactor(t_AdditionalCovarianceMetadata *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getcScaleFactor());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AdditionalCovarianceMetadata_getcScaleFactorMax(t_AdditionalCovarianceMetadata *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getcScaleFactorMax());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AdditionalCovarianceMetadata_getcScaleFactorMin(t_AdditionalCovarianceMetadata *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getcScaleFactorMin());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AdditionalCovarianceMetadata_setDcpSensitivityVectorPosition(t_AdditionalCovarianceMetadata *self, PyObject *arg)
            {
              JArray< jdouble > a0((jobject) NULL);

              if (!parseArg(arg, "[D", &a0))
              {
                OBJ_CALL(self->object.setDcpSensitivityVectorPosition(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setDcpSensitivityVectorPosition", arg);
              return NULL;
            }

            static PyObject *t_AdditionalCovarianceMetadata_setDcpSensitivityVectorVelocity(t_AdditionalCovarianceMetadata *self, PyObject *arg)
            {
              JArray< jdouble > a0((jobject) NULL);

              if (!parseArg(arg, "[D", &a0))
              {
                OBJ_CALL(self->object.setDcpSensitivityVectorVelocity(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setDcpSensitivityVectorVelocity", arg);
              return NULL;
            }

            static PyObject *t_AdditionalCovarianceMetadata_setDensityForecastUncertainty(t_AdditionalCovarianceMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setDensityForecastUncertainty(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setDensityForecastUncertainty", arg);
              return NULL;
            }

            static PyObject *t_AdditionalCovarianceMetadata_setScreeningDataSource(t_AdditionalCovarianceMetadata *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(self->object.setScreeningDataSource(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setScreeningDataSource", arg);
              return NULL;
            }

            static PyObject *t_AdditionalCovarianceMetadata_setcScaleFactor(t_AdditionalCovarianceMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setcScaleFactor(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setcScaleFactor", arg);
              return NULL;
            }

            static PyObject *t_AdditionalCovarianceMetadata_setcScaleFactorMax(t_AdditionalCovarianceMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setcScaleFactorMax(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setcScaleFactorMax", arg);
              return NULL;
            }

            static PyObject *t_AdditionalCovarianceMetadata_setcScaleFactorMin(t_AdditionalCovarianceMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setcScaleFactorMin(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setcScaleFactorMin", arg);
              return NULL;
            }

            static PyObject *t_AdditionalCovarianceMetadata_validate(t_AdditionalCovarianceMetadata *self, PyObject *args)
            {
              jdouble a0;

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(self->object.validate(a0));
                Py_RETURN_NONE;
              }

              return callSuper(PY_TYPE(AdditionalCovarianceMetadata), (PyObject *) self, "validate", args, 2);
            }

            static PyObject *t_AdditionalCovarianceMetadata_get__cScaleFactor(t_AdditionalCovarianceMetadata *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getcScaleFactor());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AdditionalCovarianceMetadata_set__cScaleFactor(t_AdditionalCovarianceMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setcScaleFactor(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cScaleFactor", arg);
              return -1;
            }

            static PyObject *t_AdditionalCovarianceMetadata_get__cScaleFactorMax(t_AdditionalCovarianceMetadata *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getcScaleFactorMax());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AdditionalCovarianceMetadata_set__cScaleFactorMax(t_AdditionalCovarianceMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setcScaleFactorMax(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cScaleFactorMax", arg);
              return -1;
            }

            static PyObject *t_AdditionalCovarianceMetadata_get__cScaleFactorMin(t_AdditionalCovarianceMetadata *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getcScaleFactorMin());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AdditionalCovarianceMetadata_set__cScaleFactorMin(t_AdditionalCovarianceMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setcScaleFactorMin(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cScaleFactorMin", arg);
              return -1;
            }

            static PyObject *t_AdditionalCovarianceMetadata_get__dcpSensitivityVectorPosition(t_AdditionalCovarianceMetadata *self, void *data)
            {
              JArray< jdouble > value((jobject) NULL);
              OBJ_CALL(value = self->object.getDcpSensitivityVectorPosition());
              return value.wrap();
            }
            static int t_AdditionalCovarianceMetadata_set__dcpSensitivityVectorPosition(t_AdditionalCovarianceMetadata *self, PyObject *arg, void *data)
            {
              {
                JArray< jdouble > value((jobject) NULL);
                if (!parseArg(arg, "[D", &value))
                {
                  INT_CALL(self->object.setDcpSensitivityVectorPosition(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "dcpSensitivityVectorPosition", arg);
              return -1;
            }

            static PyObject *t_AdditionalCovarianceMetadata_get__dcpSensitivityVectorVelocity(t_AdditionalCovarianceMetadata *self, void *data)
            {
              JArray< jdouble > value((jobject) NULL);
              OBJ_CALL(value = self->object.getDcpSensitivityVectorVelocity());
              return value.wrap();
            }
            static int t_AdditionalCovarianceMetadata_set__dcpSensitivityVectorVelocity(t_AdditionalCovarianceMetadata *self, PyObject *arg, void *data)
            {
              {
                JArray< jdouble > value((jobject) NULL);
                if (!parseArg(arg, "[D", &value))
                {
                  INT_CALL(self->object.setDcpSensitivityVectorVelocity(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "dcpSensitivityVectorVelocity", arg);
              return -1;
            }

            static PyObject *t_AdditionalCovarianceMetadata_get__densityForecastUncertainty(t_AdditionalCovarianceMetadata *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getDensityForecastUncertainty());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AdditionalCovarianceMetadata_set__densityForecastUncertainty(t_AdditionalCovarianceMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setDensityForecastUncertainty(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "densityForecastUncertainty", arg);
              return -1;
            }

            static PyObject *t_AdditionalCovarianceMetadata_get__screeningDataSource(t_AdditionalCovarianceMetadata *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getScreeningDataSource());
              return j2p(value);
            }
            static int t_AdditionalCovarianceMetadata_set__screeningDataSource(t_AdditionalCovarianceMetadata *self, PyObject *arg, void *data)
            {
              {
                ::java::lang::String value((jobject) NULL);
                if (!parseArg(arg, "s", &value))
                {
                  INT_CALL(self->object.setScreeningDataSource(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "screeningDataSource", arg);
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
#include "org/orekit/files/ccsds/ndm/adm/apm/InertiaKey.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/Inertia.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/InertiaKey.h"
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
            namespace apm {

              ::java::lang::Class *InertiaKey::class$ = NULL;
              jmethodID *InertiaKey::mids$ = NULL;
              bool InertiaKey::live$ = false;
              InertiaKey *InertiaKey::COMMENT = NULL;
              InertiaKey *InertiaKey::I11 = NULL;
              InertiaKey *InertiaKey::I12 = NULL;
              InertiaKey *InertiaKey::I13 = NULL;
              InertiaKey *InertiaKey::I22 = NULL;
              InertiaKey *InertiaKey::I23 = NULL;
              InertiaKey *InertiaKey::I33 = NULL;
              InertiaKey *InertiaKey::INERTIA_REF_FRAME = NULL;
              InertiaKey *InertiaKey::IXX = NULL;
              InertiaKey *InertiaKey::IXY = NULL;
              InertiaKey *InertiaKey::IXZ = NULL;
              InertiaKey *InertiaKey::IYY = NULL;
              InertiaKey *InertiaKey::IYZ = NULL;
              InertiaKey *InertiaKey::IZZ = NULL;

              jclass InertiaKey::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/apm/InertiaKey");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_process_444814c9d6c9c016] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/adm/apm/Inertia;)Z");
                  mids$[mid_valueOf_49f94656caaeff1a] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/adm/apm/InertiaKey;");
                  mids$[mid_values_066629376f57f58c] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/adm/apm/InertiaKey;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  COMMENT = new InertiaKey(env->getStaticObjectField(cls, "COMMENT", "Lorg/orekit/files/ccsds/ndm/adm/apm/InertiaKey;"));
                  I11 = new InertiaKey(env->getStaticObjectField(cls, "I11", "Lorg/orekit/files/ccsds/ndm/adm/apm/InertiaKey;"));
                  I12 = new InertiaKey(env->getStaticObjectField(cls, "I12", "Lorg/orekit/files/ccsds/ndm/adm/apm/InertiaKey;"));
                  I13 = new InertiaKey(env->getStaticObjectField(cls, "I13", "Lorg/orekit/files/ccsds/ndm/adm/apm/InertiaKey;"));
                  I22 = new InertiaKey(env->getStaticObjectField(cls, "I22", "Lorg/orekit/files/ccsds/ndm/adm/apm/InertiaKey;"));
                  I23 = new InertiaKey(env->getStaticObjectField(cls, "I23", "Lorg/orekit/files/ccsds/ndm/adm/apm/InertiaKey;"));
                  I33 = new InertiaKey(env->getStaticObjectField(cls, "I33", "Lorg/orekit/files/ccsds/ndm/adm/apm/InertiaKey;"));
                  INERTIA_REF_FRAME = new InertiaKey(env->getStaticObjectField(cls, "INERTIA_REF_FRAME", "Lorg/orekit/files/ccsds/ndm/adm/apm/InertiaKey;"));
                  IXX = new InertiaKey(env->getStaticObjectField(cls, "IXX", "Lorg/orekit/files/ccsds/ndm/adm/apm/InertiaKey;"));
                  IXY = new InertiaKey(env->getStaticObjectField(cls, "IXY", "Lorg/orekit/files/ccsds/ndm/adm/apm/InertiaKey;"));
                  IXZ = new InertiaKey(env->getStaticObjectField(cls, "IXZ", "Lorg/orekit/files/ccsds/ndm/adm/apm/InertiaKey;"));
                  IYY = new InertiaKey(env->getStaticObjectField(cls, "IYY", "Lorg/orekit/files/ccsds/ndm/adm/apm/InertiaKey;"));
                  IYZ = new InertiaKey(env->getStaticObjectField(cls, "IYZ", "Lorg/orekit/files/ccsds/ndm/adm/apm/InertiaKey;"));
                  IZZ = new InertiaKey(env->getStaticObjectField(cls, "IZZ", "Lorg/orekit/files/ccsds/ndm/adm/apm/InertiaKey;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              jboolean InertiaKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::adm::apm::Inertia & a2) const
              {
                return env->callBooleanMethod(this$, mids$[mid_process_444814c9d6c9c016], a0.this$, a1.this$, a2.this$);
              }

              InertiaKey InertiaKey::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return InertiaKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_49f94656caaeff1a], a0.this$));
              }

              JArray< InertiaKey > InertiaKey::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< InertiaKey >(env->callStaticObjectMethod(cls, mids$[mid_values_066629376f57f58c]));
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
              static PyObject *t_InertiaKey_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_InertiaKey_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_InertiaKey_of_(t_InertiaKey *self, PyObject *args);
              static PyObject *t_InertiaKey_process(t_InertiaKey *self, PyObject *args);
              static PyObject *t_InertiaKey_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_InertiaKey_values(PyTypeObject *type);
              static PyObject *t_InertiaKey_get__parameters_(t_InertiaKey *self, void *data);
              static PyGetSetDef t_InertiaKey__fields_[] = {
                DECLARE_GET_FIELD(t_InertiaKey, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_InertiaKey__methods_[] = {
                DECLARE_METHOD(t_InertiaKey, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_InertiaKey, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_InertiaKey, of_, METH_VARARGS),
                DECLARE_METHOD(t_InertiaKey, process, METH_VARARGS),
                DECLARE_METHOD(t_InertiaKey, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_InertiaKey, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(InertiaKey)[] = {
                { Py_tp_methods, t_InertiaKey__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_InertiaKey__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(InertiaKey)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(InertiaKey, t_InertiaKey, InertiaKey);
              PyObject *t_InertiaKey::wrap_Object(const InertiaKey& object, PyTypeObject *p0)
              {
                PyObject *obj = t_InertiaKey::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_InertiaKey *self = (t_InertiaKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_InertiaKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_InertiaKey::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_InertiaKey *self = (t_InertiaKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_InertiaKey::install(PyObject *module)
              {
                installType(&PY_TYPE(InertiaKey), &PY_TYPE_DEF(InertiaKey), module, "InertiaKey", 0);
              }

              void t_InertiaKey::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(InertiaKey), "class_", make_descriptor(InertiaKey::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(InertiaKey), "wrapfn_", make_descriptor(t_InertiaKey::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(InertiaKey), "boxfn_", make_descriptor(boxObject));
                env->getClass(InertiaKey::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(InertiaKey), "COMMENT", make_descriptor(t_InertiaKey::wrap_Object(*InertiaKey::COMMENT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(InertiaKey), "I11", make_descriptor(t_InertiaKey::wrap_Object(*InertiaKey::I11)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(InertiaKey), "I12", make_descriptor(t_InertiaKey::wrap_Object(*InertiaKey::I12)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(InertiaKey), "I13", make_descriptor(t_InertiaKey::wrap_Object(*InertiaKey::I13)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(InertiaKey), "I22", make_descriptor(t_InertiaKey::wrap_Object(*InertiaKey::I22)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(InertiaKey), "I23", make_descriptor(t_InertiaKey::wrap_Object(*InertiaKey::I23)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(InertiaKey), "I33", make_descriptor(t_InertiaKey::wrap_Object(*InertiaKey::I33)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(InertiaKey), "INERTIA_REF_FRAME", make_descriptor(t_InertiaKey::wrap_Object(*InertiaKey::INERTIA_REF_FRAME)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(InertiaKey), "IXX", make_descriptor(t_InertiaKey::wrap_Object(*InertiaKey::IXX)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(InertiaKey), "IXY", make_descriptor(t_InertiaKey::wrap_Object(*InertiaKey::IXY)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(InertiaKey), "IXZ", make_descriptor(t_InertiaKey::wrap_Object(*InertiaKey::IXZ)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(InertiaKey), "IYY", make_descriptor(t_InertiaKey::wrap_Object(*InertiaKey::IYY)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(InertiaKey), "IYZ", make_descriptor(t_InertiaKey::wrap_Object(*InertiaKey::IYZ)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(InertiaKey), "IZZ", make_descriptor(t_InertiaKey::wrap_Object(*InertiaKey::IZZ)));
              }

              static PyObject *t_InertiaKey_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, InertiaKey::initializeClass, 1)))
                  return NULL;
                return t_InertiaKey::wrap_Object(InertiaKey(((t_InertiaKey *) arg)->object.this$));
              }
              static PyObject *t_InertiaKey_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, InertiaKey::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_InertiaKey_of_(t_InertiaKey *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_InertiaKey_process(t_InertiaKey *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
                ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::adm::apm::Inertia a2((jobject) NULL);
                jboolean result;

                if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::adm::apm::Inertia::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.process(a0, a1, a2));
                  Py_RETURN_BOOL(result);
                }

                PyErr_SetArgsError((PyObject *) self, "process", args);
                return NULL;
              }

              static PyObject *t_InertiaKey_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                InertiaKey result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::apm::InertiaKey::valueOf(a0));
                  return t_InertiaKey::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_InertiaKey_values(PyTypeObject *type)
              {
                JArray< InertiaKey > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::apm::InertiaKey::values());
                return JArray<jobject>(result.this$).wrap(t_InertiaKey::wrap_jobject);
              }
              static PyObject *t_InertiaKey_get__parameters_(t_InertiaKey *self, void *data)
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

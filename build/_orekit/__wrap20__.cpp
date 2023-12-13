#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/dfp/DfpField.h"
#include "org/hipparchus/dfp/Dfp.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/dfp/DfpField$RoundingMode.h"
#include "org/hipparchus/dfp/DfpField.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace dfp {

      ::java::lang::Class *DfpField::class$ = NULL;
      jmethodID *DfpField::mids$ = NULL;
      bool DfpField::live$ = false;
      jint DfpField::FLAG_DIV_ZERO = (jint) 0;
      jint DfpField::FLAG_INEXACT = (jint) 0;
      jint DfpField::FLAG_INVALID = (jint) 0;
      jint DfpField::FLAG_OVERFLOW = (jint) 0;
      jint DfpField::FLAG_UNDERFLOW = (jint) 0;

      jclass DfpField::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/dfp/DfpField");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_44ed599e93e8a30c] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_clearIEEEFlags_a1fa5dae97ea5ed2] = env->getMethodID(cls, "clearIEEEFlags", "()V");
          mids$[mid_computeExp_cd2054800f3587f2] = env->getStaticMethodID(cls, "computeExp", "(Lorg/hipparchus/dfp/Dfp;Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_computeLn_da0be084c071642e] = env->getStaticMethodID(cls, "computeLn", "(Lorg/hipparchus/dfp/Dfp;Lorg/hipparchus/dfp/Dfp;Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_equals_460c5e2d9d51c6cc] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_getDegToRad_2b93193437c3f00d] = env->getMethodID(cls, "getDegToRad", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_getE_2b93193437c3f00d] = env->getMethodID(cls, "getE", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_getESplit_e7edd720248d9ae1] = env->getMethodID(cls, "getESplit", "()[Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_getExtendedField_3f5b091477f8c156] = env->getMethodID(cls, "getExtendedField", "(IZ)Lorg/hipparchus/dfp/DfpField;");
          mids$[mid_getIEEEFlags_55546ef6a647f39b] = env->getMethodID(cls, "getIEEEFlags", "()I");
          mids$[mid_getLn10_2b93193437c3f00d] = env->getMethodID(cls, "getLn10", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_getLn2_2b93193437c3f00d] = env->getMethodID(cls, "getLn2", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_getLn2Split_e7edd720248d9ae1] = env->getMethodID(cls, "getLn2Split", "()[Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_getLn5_2b93193437c3f00d] = env->getMethodID(cls, "getLn5", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_getLn5Split_e7edd720248d9ae1] = env->getMethodID(cls, "getLn5Split", "()[Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_getOne_2b93193437c3f00d] = env->getMethodID(cls, "getOne", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_getPi_2b93193437c3f00d] = env->getMethodID(cls, "getPi", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_getPiSplit_e7edd720248d9ae1] = env->getMethodID(cls, "getPiSplit", "()[Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_getRadToDeg_2b93193437c3f00d] = env->getMethodID(cls, "getRadToDeg", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_getRadixDigits_55546ef6a647f39b] = env->getMethodID(cls, "getRadixDigits", "()I");
          mids$[mid_getRoundingMode_bf0385b3132fa276] = env->getMethodID(cls, "getRoundingMode", "()Lorg/hipparchus/dfp/DfpField$RoundingMode;");
          mids$[mid_getRuntimeClass_1aeb0737a960d371] = env->getMethodID(cls, "getRuntimeClass", "()Ljava/lang/Class;");
          mids$[mid_getSqr2_2b93193437c3f00d] = env->getMethodID(cls, "getSqr2", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_getSqr2Reciprocal_2b93193437c3f00d] = env->getMethodID(cls, "getSqr2Reciprocal", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_getSqr2Split_e7edd720248d9ae1] = env->getMethodID(cls, "getSqr2Split", "()[Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_getSqr3_2b93193437c3f00d] = env->getMethodID(cls, "getSqr3", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_getSqr3Reciprocal_2b93193437c3f00d] = env->getMethodID(cls, "getSqr3Reciprocal", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_getTwo_2b93193437c3f00d] = env->getMethodID(cls, "getTwo", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_getZero_2b93193437c3f00d] = env->getMethodID(cls, "getZero", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_hashCode_55546ef6a647f39b] = env->getMethodID(cls, "hashCode", "()I");
          mids$[mid_newDfp_2b93193437c3f00d] = env->getMethodID(cls, "newDfp", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_newDfp_844df78cba5c1168] = env->getMethodID(cls, "newDfp", "(Ljava/lang/String;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_newDfp_a714269abf022321] = env->getMethodID(cls, "newDfp", "(Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_newDfp_3dbae42c27edb89e] = env->getMethodID(cls, "newDfp", "(B)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_newDfp_757f32f1791cffc4] = env->getMethodID(cls, "newDfp", "(D)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_newDfp_026cdd2d1c22b25b] = env->getMethodID(cls, "newDfp", "(I)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_newDfp_a276979b31da24ca] = env->getMethodID(cls, "newDfp", "(J)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_newDfp_65a23ba49b68f64d] = env->getMethodID(cls, "newDfp", "(BB)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_setIEEEFlags_44ed599e93e8a30c] = env->getMethodID(cls, "setIEEEFlags", "(I)V");
          mids$[mid_setIEEEFlagsBits_44ed599e93e8a30c] = env->getMethodID(cls, "setIEEEFlagsBits", "(I)V");
          mids$[mid_setRoundingMode_a5811dede3ca4549] = env->getMethodID(cls, "setRoundingMode", "(Lorg/hipparchus/dfp/DfpField$RoundingMode;)V");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          FLAG_DIV_ZERO = env->getStaticIntField(cls, "FLAG_DIV_ZERO");
          FLAG_INEXACT = env->getStaticIntField(cls, "FLAG_INEXACT");
          FLAG_INVALID = env->getStaticIntField(cls, "FLAG_INVALID");
          FLAG_OVERFLOW = env->getStaticIntField(cls, "FLAG_OVERFLOW");
          FLAG_UNDERFLOW = env->getStaticIntField(cls, "FLAG_UNDERFLOW");
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      DfpField::DfpField(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_44ed599e93e8a30c, a0)) {}

      void DfpField::clearIEEEFlags() const
      {
        env->callVoidMethod(this$, mids$[mid_clearIEEEFlags_a1fa5dae97ea5ed2]);
      }

      ::org::hipparchus::dfp::Dfp DfpField::computeExp(const ::org::hipparchus::dfp::Dfp & a0, const ::org::hipparchus::dfp::Dfp & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::dfp::Dfp(env->callStaticObjectMethod(cls, mids$[mid_computeExp_cd2054800f3587f2], a0.this$, a1.this$));
      }

      ::org::hipparchus::dfp::Dfp DfpField::computeLn(const ::org::hipparchus::dfp::Dfp & a0, const ::org::hipparchus::dfp::Dfp & a1, const ::org::hipparchus::dfp::Dfp & a2)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::dfp::Dfp(env->callStaticObjectMethod(cls, mids$[mid_computeLn_da0be084c071642e], a0.this$, a1.this$, a2.this$));
      }

      jboolean DfpField::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_460c5e2d9d51c6cc], a0.this$);
      }

      ::org::hipparchus::dfp::Dfp DfpField::getDegToRad() const
      {
        return ::org::hipparchus::dfp::Dfp(env->callObjectMethod(this$, mids$[mid_getDegToRad_2b93193437c3f00d]));
      }

      ::org::hipparchus::dfp::Dfp DfpField::getE() const
      {
        return ::org::hipparchus::dfp::Dfp(env->callObjectMethod(this$, mids$[mid_getE_2b93193437c3f00d]));
      }

      JArray< ::org::hipparchus::dfp::Dfp > DfpField::getESplit() const
      {
        return JArray< ::org::hipparchus::dfp::Dfp >(env->callObjectMethod(this$, mids$[mid_getESplit_e7edd720248d9ae1]));
      }

      DfpField DfpField::getExtendedField(jint a0, jboolean a1) const
      {
        return DfpField(env->callObjectMethod(this$, mids$[mid_getExtendedField_3f5b091477f8c156], a0, a1));
      }

      jint DfpField::getIEEEFlags() const
      {
        return env->callIntMethod(this$, mids$[mid_getIEEEFlags_55546ef6a647f39b]);
      }

      ::org::hipparchus::dfp::Dfp DfpField::getLn10() const
      {
        return ::org::hipparchus::dfp::Dfp(env->callObjectMethod(this$, mids$[mid_getLn10_2b93193437c3f00d]));
      }

      ::org::hipparchus::dfp::Dfp DfpField::getLn2() const
      {
        return ::org::hipparchus::dfp::Dfp(env->callObjectMethod(this$, mids$[mid_getLn2_2b93193437c3f00d]));
      }

      JArray< ::org::hipparchus::dfp::Dfp > DfpField::getLn2Split() const
      {
        return JArray< ::org::hipparchus::dfp::Dfp >(env->callObjectMethod(this$, mids$[mid_getLn2Split_e7edd720248d9ae1]));
      }

      ::org::hipparchus::dfp::Dfp DfpField::getLn5() const
      {
        return ::org::hipparchus::dfp::Dfp(env->callObjectMethod(this$, mids$[mid_getLn5_2b93193437c3f00d]));
      }

      JArray< ::org::hipparchus::dfp::Dfp > DfpField::getLn5Split() const
      {
        return JArray< ::org::hipparchus::dfp::Dfp >(env->callObjectMethod(this$, mids$[mid_getLn5Split_e7edd720248d9ae1]));
      }

      ::org::hipparchus::dfp::Dfp DfpField::getOne() const
      {
        return ::org::hipparchus::dfp::Dfp(env->callObjectMethod(this$, mids$[mid_getOne_2b93193437c3f00d]));
      }

      ::org::hipparchus::dfp::Dfp DfpField::getPi() const
      {
        return ::org::hipparchus::dfp::Dfp(env->callObjectMethod(this$, mids$[mid_getPi_2b93193437c3f00d]));
      }

      JArray< ::org::hipparchus::dfp::Dfp > DfpField::getPiSplit() const
      {
        return JArray< ::org::hipparchus::dfp::Dfp >(env->callObjectMethod(this$, mids$[mid_getPiSplit_e7edd720248d9ae1]));
      }

      ::org::hipparchus::dfp::Dfp DfpField::getRadToDeg() const
      {
        return ::org::hipparchus::dfp::Dfp(env->callObjectMethod(this$, mids$[mid_getRadToDeg_2b93193437c3f00d]));
      }

      jint DfpField::getRadixDigits() const
      {
        return env->callIntMethod(this$, mids$[mid_getRadixDigits_55546ef6a647f39b]);
      }

      ::org::hipparchus::dfp::DfpField$RoundingMode DfpField::getRoundingMode() const
      {
        return ::org::hipparchus::dfp::DfpField$RoundingMode(env->callObjectMethod(this$, mids$[mid_getRoundingMode_bf0385b3132fa276]));
      }

      ::java::lang::Class DfpField::getRuntimeClass() const
      {
        return ::java::lang::Class(env->callObjectMethod(this$, mids$[mid_getRuntimeClass_1aeb0737a960d371]));
      }

      ::org::hipparchus::dfp::Dfp DfpField::getSqr2() const
      {
        return ::org::hipparchus::dfp::Dfp(env->callObjectMethod(this$, mids$[mid_getSqr2_2b93193437c3f00d]));
      }

      ::org::hipparchus::dfp::Dfp DfpField::getSqr2Reciprocal() const
      {
        return ::org::hipparchus::dfp::Dfp(env->callObjectMethod(this$, mids$[mid_getSqr2Reciprocal_2b93193437c3f00d]));
      }

      JArray< ::org::hipparchus::dfp::Dfp > DfpField::getSqr2Split() const
      {
        return JArray< ::org::hipparchus::dfp::Dfp >(env->callObjectMethod(this$, mids$[mid_getSqr2Split_e7edd720248d9ae1]));
      }

      ::org::hipparchus::dfp::Dfp DfpField::getSqr3() const
      {
        return ::org::hipparchus::dfp::Dfp(env->callObjectMethod(this$, mids$[mid_getSqr3_2b93193437c3f00d]));
      }

      ::org::hipparchus::dfp::Dfp DfpField::getSqr3Reciprocal() const
      {
        return ::org::hipparchus::dfp::Dfp(env->callObjectMethod(this$, mids$[mid_getSqr3Reciprocal_2b93193437c3f00d]));
      }

      ::org::hipparchus::dfp::Dfp DfpField::getTwo() const
      {
        return ::org::hipparchus::dfp::Dfp(env->callObjectMethod(this$, mids$[mid_getTwo_2b93193437c3f00d]));
      }

      ::org::hipparchus::dfp::Dfp DfpField::getZero() const
      {
        return ::org::hipparchus::dfp::Dfp(env->callObjectMethod(this$, mids$[mid_getZero_2b93193437c3f00d]));
      }

      jint DfpField::hashCode() const
      {
        return env->callIntMethod(this$, mids$[mid_hashCode_55546ef6a647f39b]);
      }

      ::org::hipparchus::dfp::Dfp DfpField::newDfp() const
      {
        return ::org::hipparchus::dfp::Dfp(env->callObjectMethod(this$, mids$[mid_newDfp_2b93193437c3f00d]));
      }

      ::org::hipparchus::dfp::Dfp DfpField::newDfp(const ::java::lang::String & a0) const
      {
        return ::org::hipparchus::dfp::Dfp(env->callObjectMethod(this$, mids$[mid_newDfp_844df78cba5c1168], a0.this$));
      }

      ::org::hipparchus::dfp::Dfp DfpField::newDfp(const ::org::hipparchus::dfp::Dfp & a0) const
      {
        return ::org::hipparchus::dfp::Dfp(env->callObjectMethod(this$, mids$[mid_newDfp_a714269abf022321], a0.this$));
      }

      ::org::hipparchus::dfp::Dfp DfpField::newDfp(jbyte a0) const
      {
        return ::org::hipparchus::dfp::Dfp(env->callObjectMethod(this$, mids$[mid_newDfp_3dbae42c27edb89e], a0));
      }

      ::org::hipparchus::dfp::Dfp DfpField::newDfp(jdouble a0) const
      {
        return ::org::hipparchus::dfp::Dfp(env->callObjectMethod(this$, mids$[mid_newDfp_757f32f1791cffc4], a0));
      }

      ::org::hipparchus::dfp::Dfp DfpField::newDfp(jint a0) const
      {
        return ::org::hipparchus::dfp::Dfp(env->callObjectMethod(this$, mids$[mid_newDfp_026cdd2d1c22b25b], a0));
      }

      ::org::hipparchus::dfp::Dfp DfpField::newDfp(jlong a0) const
      {
        return ::org::hipparchus::dfp::Dfp(env->callObjectMethod(this$, mids$[mid_newDfp_a276979b31da24ca], a0));
      }

      ::org::hipparchus::dfp::Dfp DfpField::newDfp(jbyte a0, jbyte a1) const
      {
        return ::org::hipparchus::dfp::Dfp(env->callObjectMethod(this$, mids$[mid_newDfp_65a23ba49b68f64d], a0, a1));
      }

      void DfpField::setIEEEFlags(jint a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setIEEEFlags_44ed599e93e8a30c], a0);
      }

      void DfpField::setIEEEFlagsBits(jint a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setIEEEFlagsBits_44ed599e93e8a30c], a0);
      }

      void DfpField::setRoundingMode(const ::org::hipparchus::dfp::DfpField$RoundingMode & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setRoundingMode_a5811dede3ca4549], a0.this$);
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
      static PyObject *t_DfpField_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DfpField_instance_(PyTypeObject *type, PyObject *arg);
      static int t_DfpField_init_(t_DfpField *self, PyObject *args, PyObject *kwds);
      static PyObject *t_DfpField_clearIEEEFlags(t_DfpField *self);
      static PyObject *t_DfpField_computeExp(PyTypeObject *type, PyObject *args);
      static PyObject *t_DfpField_computeLn(PyTypeObject *type, PyObject *args);
      static PyObject *t_DfpField_equals(t_DfpField *self, PyObject *args);
      static PyObject *t_DfpField_getDegToRad(t_DfpField *self);
      static PyObject *t_DfpField_getE(t_DfpField *self);
      static PyObject *t_DfpField_getESplit(t_DfpField *self);
      static PyObject *t_DfpField_getExtendedField(t_DfpField *self, PyObject *args);
      static PyObject *t_DfpField_getIEEEFlags(t_DfpField *self);
      static PyObject *t_DfpField_getLn10(t_DfpField *self);
      static PyObject *t_DfpField_getLn2(t_DfpField *self);
      static PyObject *t_DfpField_getLn2Split(t_DfpField *self);
      static PyObject *t_DfpField_getLn5(t_DfpField *self);
      static PyObject *t_DfpField_getLn5Split(t_DfpField *self);
      static PyObject *t_DfpField_getOne(t_DfpField *self);
      static PyObject *t_DfpField_getPi(t_DfpField *self);
      static PyObject *t_DfpField_getPiSplit(t_DfpField *self);
      static PyObject *t_DfpField_getRadToDeg(t_DfpField *self);
      static PyObject *t_DfpField_getRadixDigits(t_DfpField *self);
      static PyObject *t_DfpField_getRoundingMode(t_DfpField *self);
      static PyObject *t_DfpField_getRuntimeClass(t_DfpField *self);
      static PyObject *t_DfpField_getSqr2(t_DfpField *self);
      static PyObject *t_DfpField_getSqr2Reciprocal(t_DfpField *self);
      static PyObject *t_DfpField_getSqr2Split(t_DfpField *self);
      static PyObject *t_DfpField_getSqr3(t_DfpField *self);
      static PyObject *t_DfpField_getSqr3Reciprocal(t_DfpField *self);
      static PyObject *t_DfpField_getTwo(t_DfpField *self);
      static PyObject *t_DfpField_getZero(t_DfpField *self);
      static PyObject *t_DfpField_hashCode(t_DfpField *self, PyObject *args);
      static PyObject *t_DfpField_newDfp(t_DfpField *self, PyObject *args);
      static PyObject *t_DfpField_setIEEEFlags(t_DfpField *self, PyObject *arg);
      static PyObject *t_DfpField_setIEEEFlagsBits(t_DfpField *self, PyObject *arg);
      static PyObject *t_DfpField_setRoundingMode(t_DfpField *self, PyObject *arg);
      static PyObject *t_DfpField_get__degToRad(t_DfpField *self, void *data);
      static PyObject *t_DfpField_get__e(t_DfpField *self, void *data);
      static PyObject *t_DfpField_get__eSplit(t_DfpField *self, void *data);
      static PyObject *t_DfpField_get__iEEEFlags(t_DfpField *self, void *data);
      static int t_DfpField_set__iEEEFlags(t_DfpField *self, PyObject *arg, void *data);
      static int t_DfpField_set__iEEEFlagsBits(t_DfpField *self, PyObject *arg, void *data);
      static PyObject *t_DfpField_get__ln10(t_DfpField *self, void *data);
      static PyObject *t_DfpField_get__ln2(t_DfpField *self, void *data);
      static PyObject *t_DfpField_get__ln2Split(t_DfpField *self, void *data);
      static PyObject *t_DfpField_get__ln5(t_DfpField *self, void *data);
      static PyObject *t_DfpField_get__ln5Split(t_DfpField *self, void *data);
      static PyObject *t_DfpField_get__one(t_DfpField *self, void *data);
      static PyObject *t_DfpField_get__pi(t_DfpField *self, void *data);
      static PyObject *t_DfpField_get__piSplit(t_DfpField *self, void *data);
      static PyObject *t_DfpField_get__radToDeg(t_DfpField *self, void *data);
      static PyObject *t_DfpField_get__radixDigits(t_DfpField *self, void *data);
      static PyObject *t_DfpField_get__roundingMode(t_DfpField *self, void *data);
      static int t_DfpField_set__roundingMode(t_DfpField *self, PyObject *arg, void *data);
      static PyObject *t_DfpField_get__runtimeClass(t_DfpField *self, void *data);
      static PyObject *t_DfpField_get__sqr2(t_DfpField *self, void *data);
      static PyObject *t_DfpField_get__sqr2Reciprocal(t_DfpField *self, void *data);
      static PyObject *t_DfpField_get__sqr2Split(t_DfpField *self, void *data);
      static PyObject *t_DfpField_get__sqr3(t_DfpField *self, void *data);
      static PyObject *t_DfpField_get__sqr3Reciprocal(t_DfpField *self, void *data);
      static PyObject *t_DfpField_get__two(t_DfpField *self, void *data);
      static PyObject *t_DfpField_get__zero(t_DfpField *self, void *data);
      static PyGetSetDef t_DfpField__fields_[] = {
        DECLARE_GET_FIELD(t_DfpField, degToRad),
        DECLARE_GET_FIELD(t_DfpField, e),
        DECLARE_GET_FIELD(t_DfpField, eSplit),
        DECLARE_GETSET_FIELD(t_DfpField, iEEEFlags),
        DECLARE_SET_FIELD(t_DfpField, iEEEFlagsBits),
        DECLARE_GET_FIELD(t_DfpField, ln10),
        DECLARE_GET_FIELD(t_DfpField, ln2),
        DECLARE_GET_FIELD(t_DfpField, ln2Split),
        DECLARE_GET_FIELD(t_DfpField, ln5),
        DECLARE_GET_FIELD(t_DfpField, ln5Split),
        DECLARE_GET_FIELD(t_DfpField, one),
        DECLARE_GET_FIELD(t_DfpField, pi),
        DECLARE_GET_FIELD(t_DfpField, piSplit),
        DECLARE_GET_FIELD(t_DfpField, radToDeg),
        DECLARE_GET_FIELD(t_DfpField, radixDigits),
        DECLARE_GETSET_FIELD(t_DfpField, roundingMode),
        DECLARE_GET_FIELD(t_DfpField, runtimeClass),
        DECLARE_GET_FIELD(t_DfpField, sqr2),
        DECLARE_GET_FIELD(t_DfpField, sqr2Reciprocal),
        DECLARE_GET_FIELD(t_DfpField, sqr2Split),
        DECLARE_GET_FIELD(t_DfpField, sqr3),
        DECLARE_GET_FIELD(t_DfpField, sqr3Reciprocal),
        DECLARE_GET_FIELD(t_DfpField, two),
        DECLARE_GET_FIELD(t_DfpField, zero),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_DfpField__methods_[] = {
        DECLARE_METHOD(t_DfpField, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DfpField, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DfpField, clearIEEEFlags, METH_NOARGS),
        DECLARE_METHOD(t_DfpField, computeExp, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_DfpField, computeLn, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_DfpField, equals, METH_VARARGS),
        DECLARE_METHOD(t_DfpField, getDegToRad, METH_NOARGS),
        DECLARE_METHOD(t_DfpField, getE, METH_NOARGS),
        DECLARE_METHOD(t_DfpField, getESplit, METH_NOARGS),
        DECLARE_METHOD(t_DfpField, getExtendedField, METH_VARARGS),
        DECLARE_METHOD(t_DfpField, getIEEEFlags, METH_NOARGS),
        DECLARE_METHOD(t_DfpField, getLn10, METH_NOARGS),
        DECLARE_METHOD(t_DfpField, getLn2, METH_NOARGS),
        DECLARE_METHOD(t_DfpField, getLn2Split, METH_NOARGS),
        DECLARE_METHOD(t_DfpField, getLn5, METH_NOARGS),
        DECLARE_METHOD(t_DfpField, getLn5Split, METH_NOARGS),
        DECLARE_METHOD(t_DfpField, getOne, METH_NOARGS),
        DECLARE_METHOD(t_DfpField, getPi, METH_NOARGS),
        DECLARE_METHOD(t_DfpField, getPiSplit, METH_NOARGS),
        DECLARE_METHOD(t_DfpField, getRadToDeg, METH_NOARGS),
        DECLARE_METHOD(t_DfpField, getRadixDigits, METH_NOARGS),
        DECLARE_METHOD(t_DfpField, getRoundingMode, METH_NOARGS),
        DECLARE_METHOD(t_DfpField, getRuntimeClass, METH_NOARGS),
        DECLARE_METHOD(t_DfpField, getSqr2, METH_NOARGS),
        DECLARE_METHOD(t_DfpField, getSqr2Reciprocal, METH_NOARGS),
        DECLARE_METHOD(t_DfpField, getSqr2Split, METH_NOARGS),
        DECLARE_METHOD(t_DfpField, getSqr3, METH_NOARGS),
        DECLARE_METHOD(t_DfpField, getSqr3Reciprocal, METH_NOARGS),
        DECLARE_METHOD(t_DfpField, getTwo, METH_NOARGS),
        DECLARE_METHOD(t_DfpField, getZero, METH_NOARGS),
        DECLARE_METHOD(t_DfpField, hashCode, METH_VARARGS),
        DECLARE_METHOD(t_DfpField, newDfp, METH_VARARGS),
        DECLARE_METHOD(t_DfpField, setIEEEFlags, METH_O),
        DECLARE_METHOD(t_DfpField, setIEEEFlagsBits, METH_O),
        DECLARE_METHOD(t_DfpField, setRoundingMode, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(DfpField)[] = {
        { Py_tp_methods, t_DfpField__methods_ },
        { Py_tp_init, (void *) t_DfpField_init_ },
        { Py_tp_getset, t_DfpField__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(DfpField)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(DfpField, t_DfpField, DfpField);

      void t_DfpField::install(PyObject *module)
      {
        installType(&PY_TYPE(DfpField), &PY_TYPE_DEF(DfpField), module, "DfpField", 0);
        PyObject_SetAttrString((PyObject *) PY_TYPE(DfpField), "RoundingMode", make_descriptor(&PY_TYPE_DEF(DfpField$RoundingMode)));
      }

      void t_DfpField::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(DfpField), "class_", make_descriptor(DfpField::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DfpField), "wrapfn_", make_descriptor(t_DfpField::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DfpField), "boxfn_", make_descriptor(boxObject));
        env->getClass(DfpField::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(DfpField), "FLAG_DIV_ZERO", make_descriptor(DfpField::FLAG_DIV_ZERO));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DfpField), "FLAG_INEXACT", make_descriptor(DfpField::FLAG_INEXACT));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DfpField), "FLAG_INVALID", make_descriptor(DfpField::FLAG_INVALID));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DfpField), "FLAG_OVERFLOW", make_descriptor(DfpField::FLAG_OVERFLOW));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DfpField), "FLAG_UNDERFLOW", make_descriptor(DfpField::FLAG_UNDERFLOW));
      }

      static PyObject *t_DfpField_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, DfpField::initializeClass, 1)))
          return NULL;
        return t_DfpField::wrap_Object(DfpField(((t_DfpField *) arg)->object.this$));
      }
      static PyObject *t_DfpField_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, DfpField::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_DfpField_init_(t_DfpField *self, PyObject *args, PyObject *kwds)
      {
        jint a0;
        DfpField object((jobject) NULL);

        if (!parseArgs(args, "I", &a0))
        {
          INT_CALL(object = DfpField(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_DfpField_clearIEEEFlags(t_DfpField *self)
      {
        OBJ_CALL(self->object.clearIEEEFlags());
        Py_RETURN_NONE;
      }

      static PyObject *t_DfpField_computeExp(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::dfp::Dfp a0((jobject) NULL);
        ::org::hipparchus::dfp::Dfp a1((jobject) NULL);
        ::org::hipparchus::dfp::Dfp result((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::hipparchus::dfp::Dfp::initializeClass, ::org::hipparchus::dfp::Dfp::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::dfp::DfpField::computeExp(a0, a1));
          return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "computeExp", args);
        return NULL;
      }

      static PyObject *t_DfpField_computeLn(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::dfp::Dfp a0((jobject) NULL);
        ::org::hipparchus::dfp::Dfp a1((jobject) NULL);
        ::org::hipparchus::dfp::Dfp a2((jobject) NULL);
        ::org::hipparchus::dfp::Dfp result((jobject) NULL);

        if (!parseArgs(args, "kkk", ::org::hipparchus::dfp::Dfp::initializeClass, ::org::hipparchus::dfp::Dfp::initializeClass, ::org::hipparchus::dfp::Dfp::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(result = ::org::hipparchus::dfp::DfpField::computeLn(a0, a1, a2));
          return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "computeLn", args);
        return NULL;
      }

      static PyObject *t_DfpField_equals(t_DfpField *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "o", &a0))
        {
          OBJ_CALL(result = self->object.equals(a0));
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(DfpField), (PyObject *) self, "equals", args, 2);
      }

      static PyObject *t_DfpField_getDegToRad(t_DfpField *self)
      {
        ::org::hipparchus::dfp::Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.getDegToRad());
        return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
      }

      static PyObject *t_DfpField_getE(t_DfpField *self)
      {
        ::org::hipparchus::dfp::Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.getE());
        return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
      }

      static PyObject *t_DfpField_getESplit(t_DfpField *self)
      {
        JArray< ::org::hipparchus::dfp::Dfp > result((jobject) NULL);
        OBJ_CALL(result = self->object.getESplit());
        return JArray<jobject>(result.this$).wrap(::org::hipparchus::dfp::t_Dfp::wrap_jobject);
      }

      static PyObject *t_DfpField_getExtendedField(t_DfpField *self, PyObject *args)
      {
        jint a0;
        jboolean a1;
        DfpField result((jobject) NULL);

        if (!parseArgs(args, "IZ", &a0, &a1))
        {
          OBJ_CALL(result = self->object.getExtendedField(a0, a1));
          return t_DfpField::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getExtendedField", args);
        return NULL;
      }

      static PyObject *t_DfpField_getIEEEFlags(t_DfpField *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getIEEEFlags());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_DfpField_getLn10(t_DfpField *self)
      {
        ::org::hipparchus::dfp::Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.getLn10());
        return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
      }

      static PyObject *t_DfpField_getLn2(t_DfpField *self)
      {
        ::org::hipparchus::dfp::Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.getLn2());
        return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
      }

      static PyObject *t_DfpField_getLn2Split(t_DfpField *self)
      {
        JArray< ::org::hipparchus::dfp::Dfp > result((jobject) NULL);
        OBJ_CALL(result = self->object.getLn2Split());
        return JArray<jobject>(result.this$).wrap(::org::hipparchus::dfp::t_Dfp::wrap_jobject);
      }

      static PyObject *t_DfpField_getLn5(t_DfpField *self)
      {
        ::org::hipparchus::dfp::Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.getLn5());
        return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
      }

      static PyObject *t_DfpField_getLn5Split(t_DfpField *self)
      {
        JArray< ::org::hipparchus::dfp::Dfp > result((jobject) NULL);
        OBJ_CALL(result = self->object.getLn5Split());
        return JArray<jobject>(result.this$).wrap(::org::hipparchus::dfp::t_Dfp::wrap_jobject);
      }

      static PyObject *t_DfpField_getOne(t_DfpField *self)
      {
        ::org::hipparchus::dfp::Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.getOne());
        return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
      }

      static PyObject *t_DfpField_getPi(t_DfpField *self)
      {
        ::org::hipparchus::dfp::Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.getPi());
        return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
      }

      static PyObject *t_DfpField_getPiSplit(t_DfpField *self)
      {
        JArray< ::org::hipparchus::dfp::Dfp > result((jobject) NULL);
        OBJ_CALL(result = self->object.getPiSplit());
        return JArray<jobject>(result.this$).wrap(::org::hipparchus::dfp::t_Dfp::wrap_jobject);
      }

      static PyObject *t_DfpField_getRadToDeg(t_DfpField *self)
      {
        ::org::hipparchus::dfp::Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.getRadToDeg());
        return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
      }

      static PyObject *t_DfpField_getRadixDigits(t_DfpField *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getRadixDigits());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_DfpField_getRoundingMode(t_DfpField *self)
      {
        ::org::hipparchus::dfp::DfpField$RoundingMode result((jobject) NULL);
        OBJ_CALL(result = self->object.getRoundingMode());
        return ::org::hipparchus::dfp::t_DfpField$RoundingMode::wrap_Object(result);
      }

      static PyObject *t_DfpField_getRuntimeClass(t_DfpField *self)
      {
        ::java::lang::Class result((jobject) NULL);
        OBJ_CALL(result = self->object.getRuntimeClass());
        return ::java::lang::t_Class::wrap_Object(result, ::org::hipparchus::dfp::PY_TYPE(Dfp));
      }

      static PyObject *t_DfpField_getSqr2(t_DfpField *self)
      {
        ::org::hipparchus::dfp::Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.getSqr2());
        return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
      }

      static PyObject *t_DfpField_getSqr2Reciprocal(t_DfpField *self)
      {
        ::org::hipparchus::dfp::Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.getSqr2Reciprocal());
        return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
      }

      static PyObject *t_DfpField_getSqr2Split(t_DfpField *self)
      {
        JArray< ::org::hipparchus::dfp::Dfp > result((jobject) NULL);
        OBJ_CALL(result = self->object.getSqr2Split());
        return JArray<jobject>(result.this$).wrap(::org::hipparchus::dfp::t_Dfp::wrap_jobject);
      }

      static PyObject *t_DfpField_getSqr3(t_DfpField *self)
      {
        ::org::hipparchus::dfp::Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.getSqr3());
        return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
      }

      static PyObject *t_DfpField_getSqr3Reciprocal(t_DfpField *self)
      {
        ::org::hipparchus::dfp::Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.getSqr3Reciprocal());
        return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
      }

      static PyObject *t_DfpField_getTwo(t_DfpField *self)
      {
        ::org::hipparchus::dfp::Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.getTwo());
        return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
      }

      static PyObject *t_DfpField_getZero(t_DfpField *self)
      {
        ::org::hipparchus::dfp::Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.getZero());
        return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
      }

      static PyObject *t_DfpField_hashCode(t_DfpField *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hashCode());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(DfpField), (PyObject *) self, "hashCode", args, 2);
      }

      static PyObject *t_DfpField_newDfp(t_DfpField *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ::org::hipparchus::dfp::Dfp result((jobject) NULL);
            OBJ_CALL(result = self->object.newDfp());
            return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
          }
          break;
         case 1:
          {
            ::java::lang::String a0((jobject) NULL);
            ::org::hipparchus::dfp::Dfp result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = self->object.newDfp(a0));
              return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::dfp::Dfp a0((jobject) NULL);
            ::org::hipparchus::dfp::Dfp result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::dfp::Dfp::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.newDfp(a0));
              return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
            }
          }
          {
            jbyte a0;
            ::org::hipparchus::dfp::Dfp result((jobject) NULL);

            if (!parseArgs(args, "B", &a0))
            {
              OBJ_CALL(result = self->object.newDfp(a0));
              return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            ::org::hipparchus::dfp::Dfp result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.newDfp(a0));
              return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
            }
          }
          {
            jint a0;
            ::org::hipparchus::dfp::Dfp result((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.newDfp(a0));
              return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
            }
          }
          {
            jlong a0;
            ::org::hipparchus::dfp::Dfp result((jobject) NULL);

            if (!parseArgs(args, "J", &a0))
            {
              OBJ_CALL(result = self->object.newDfp(a0));
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
              OBJ_CALL(result = self->object.newDfp(a0, a1));
              return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "newDfp", args);
        return NULL;
      }

      static PyObject *t_DfpField_setIEEEFlags(t_DfpField *self, PyObject *arg)
      {
        jint a0;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(self->object.setIEEEFlags(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setIEEEFlags", arg);
        return NULL;
      }

      static PyObject *t_DfpField_setIEEEFlagsBits(t_DfpField *self, PyObject *arg)
      {
        jint a0;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(self->object.setIEEEFlagsBits(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setIEEEFlagsBits", arg);
        return NULL;
      }

      static PyObject *t_DfpField_setRoundingMode(t_DfpField *self, PyObject *arg)
      {
        ::org::hipparchus::dfp::DfpField$RoundingMode a0((jobject) NULL);
        PyTypeObject **p0;

        if (!parseArg(arg, "K", ::org::hipparchus::dfp::DfpField$RoundingMode::initializeClass, &a0, &p0, ::org::hipparchus::dfp::t_DfpField$RoundingMode::parameters_))
        {
          OBJ_CALL(self->object.setRoundingMode(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setRoundingMode", arg);
        return NULL;
      }

      static PyObject *t_DfpField_get__degToRad(t_DfpField *self, void *data)
      {
        ::org::hipparchus::dfp::Dfp value((jobject) NULL);
        OBJ_CALL(value = self->object.getDegToRad());
        return ::org::hipparchus::dfp::t_Dfp::wrap_Object(value);
      }

      static PyObject *t_DfpField_get__e(t_DfpField *self, void *data)
      {
        ::org::hipparchus::dfp::Dfp value((jobject) NULL);
        OBJ_CALL(value = self->object.getE());
        return ::org::hipparchus::dfp::t_Dfp::wrap_Object(value);
      }

      static PyObject *t_DfpField_get__eSplit(t_DfpField *self, void *data)
      {
        JArray< ::org::hipparchus::dfp::Dfp > value((jobject) NULL);
        OBJ_CALL(value = self->object.getESplit());
        return JArray<jobject>(value.this$).wrap(::org::hipparchus::dfp::t_Dfp::wrap_jobject);
      }

      static PyObject *t_DfpField_get__iEEEFlags(t_DfpField *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getIEEEFlags());
        return PyLong_FromLong((long) value);
      }
      static int t_DfpField_set__iEEEFlags(t_DfpField *self, PyObject *arg, void *data)
      {
        {
          jint value;
          if (!parseArg(arg, "I", &value))
          {
            INT_CALL(self->object.setIEEEFlags(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "iEEEFlags", arg);
        return -1;
      }

      static int t_DfpField_set__iEEEFlagsBits(t_DfpField *self, PyObject *arg, void *data)
      {
        {
          jint value;
          if (!parseArg(arg, "I", &value))
          {
            INT_CALL(self->object.setIEEEFlagsBits(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "iEEEFlagsBits", arg);
        return -1;
      }

      static PyObject *t_DfpField_get__ln10(t_DfpField *self, void *data)
      {
        ::org::hipparchus::dfp::Dfp value((jobject) NULL);
        OBJ_CALL(value = self->object.getLn10());
        return ::org::hipparchus::dfp::t_Dfp::wrap_Object(value);
      }

      static PyObject *t_DfpField_get__ln2(t_DfpField *self, void *data)
      {
        ::org::hipparchus::dfp::Dfp value((jobject) NULL);
        OBJ_CALL(value = self->object.getLn2());
        return ::org::hipparchus::dfp::t_Dfp::wrap_Object(value);
      }

      static PyObject *t_DfpField_get__ln2Split(t_DfpField *self, void *data)
      {
        JArray< ::org::hipparchus::dfp::Dfp > value((jobject) NULL);
        OBJ_CALL(value = self->object.getLn2Split());
        return JArray<jobject>(value.this$).wrap(::org::hipparchus::dfp::t_Dfp::wrap_jobject);
      }

      static PyObject *t_DfpField_get__ln5(t_DfpField *self, void *data)
      {
        ::org::hipparchus::dfp::Dfp value((jobject) NULL);
        OBJ_CALL(value = self->object.getLn5());
        return ::org::hipparchus::dfp::t_Dfp::wrap_Object(value);
      }

      static PyObject *t_DfpField_get__ln5Split(t_DfpField *self, void *data)
      {
        JArray< ::org::hipparchus::dfp::Dfp > value((jobject) NULL);
        OBJ_CALL(value = self->object.getLn5Split());
        return JArray<jobject>(value.this$).wrap(::org::hipparchus::dfp::t_Dfp::wrap_jobject);
      }

      static PyObject *t_DfpField_get__one(t_DfpField *self, void *data)
      {
        ::org::hipparchus::dfp::Dfp value((jobject) NULL);
        OBJ_CALL(value = self->object.getOne());
        return ::org::hipparchus::dfp::t_Dfp::wrap_Object(value);
      }

      static PyObject *t_DfpField_get__pi(t_DfpField *self, void *data)
      {
        ::org::hipparchus::dfp::Dfp value((jobject) NULL);
        OBJ_CALL(value = self->object.getPi());
        return ::org::hipparchus::dfp::t_Dfp::wrap_Object(value);
      }

      static PyObject *t_DfpField_get__piSplit(t_DfpField *self, void *data)
      {
        JArray< ::org::hipparchus::dfp::Dfp > value((jobject) NULL);
        OBJ_CALL(value = self->object.getPiSplit());
        return JArray<jobject>(value.this$).wrap(::org::hipparchus::dfp::t_Dfp::wrap_jobject);
      }

      static PyObject *t_DfpField_get__radToDeg(t_DfpField *self, void *data)
      {
        ::org::hipparchus::dfp::Dfp value((jobject) NULL);
        OBJ_CALL(value = self->object.getRadToDeg());
        return ::org::hipparchus::dfp::t_Dfp::wrap_Object(value);
      }

      static PyObject *t_DfpField_get__radixDigits(t_DfpField *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getRadixDigits());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_DfpField_get__roundingMode(t_DfpField *self, void *data)
      {
        ::org::hipparchus::dfp::DfpField$RoundingMode value((jobject) NULL);
        OBJ_CALL(value = self->object.getRoundingMode());
        return ::org::hipparchus::dfp::t_DfpField$RoundingMode::wrap_Object(value);
      }
      static int t_DfpField_set__roundingMode(t_DfpField *self, PyObject *arg, void *data)
      {
        {
          ::org::hipparchus::dfp::DfpField$RoundingMode value((jobject) NULL);
          if (!parseArg(arg, "k", ::org::hipparchus::dfp::DfpField$RoundingMode::initializeClass, &value))
          {
            INT_CALL(self->object.setRoundingMode(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "roundingMode", arg);
        return -1;
      }

      static PyObject *t_DfpField_get__runtimeClass(t_DfpField *self, void *data)
      {
        ::java::lang::Class value((jobject) NULL);
        OBJ_CALL(value = self->object.getRuntimeClass());
        return ::java::lang::t_Class::wrap_Object(value);
      }

      static PyObject *t_DfpField_get__sqr2(t_DfpField *self, void *data)
      {
        ::org::hipparchus::dfp::Dfp value((jobject) NULL);
        OBJ_CALL(value = self->object.getSqr2());
        return ::org::hipparchus::dfp::t_Dfp::wrap_Object(value);
      }

      static PyObject *t_DfpField_get__sqr2Reciprocal(t_DfpField *self, void *data)
      {
        ::org::hipparchus::dfp::Dfp value((jobject) NULL);
        OBJ_CALL(value = self->object.getSqr2Reciprocal());
        return ::org::hipparchus::dfp::t_Dfp::wrap_Object(value);
      }

      static PyObject *t_DfpField_get__sqr2Split(t_DfpField *self, void *data)
      {
        JArray< ::org::hipparchus::dfp::Dfp > value((jobject) NULL);
        OBJ_CALL(value = self->object.getSqr2Split());
        return JArray<jobject>(value.this$).wrap(::org::hipparchus::dfp::t_Dfp::wrap_jobject);
      }

      static PyObject *t_DfpField_get__sqr3(t_DfpField *self, void *data)
      {
        ::org::hipparchus::dfp::Dfp value((jobject) NULL);
        OBJ_CALL(value = self->object.getSqr3());
        return ::org::hipparchus::dfp::t_Dfp::wrap_Object(value);
      }

      static PyObject *t_DfpField_get__sqr3Reciprocal(t_DfpField *self, void *data)
      {
        ::org::hipparchus::dfp::Dfp value((jobject) NULL);
        OBJ_CALL(value = self->object.getSqr3Reciprocal());
        return ::org::hipparchus::dfp::t_Dfp::wrap_Object(value);
      }

      static PyObject *t_DfpField_get__two(t_DfpField *self, void *data)
      {
        ::org::hipparchus::dfp::Dfp value((jobject) NULL);
        OBJ_CALL(value = self->object.getTwo());
        return ::org::hipparchus::dfp::t_Dfp::wrap_Object(value);
      }

      static PyObject *t_DfpField_get__zero(t_DfpField *self, void *data)
      {
        ::org::hipparchus::dfp::Dfp value((jobject) NULL);
        OBJ_CALL(value = self->object.getZero());
        return ::org::hipparchus::dfp::t_Dfp::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/attitudes/PythonSwitchHandler.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/attitudes/AttitudesSequence$SwitchHandler.h"
#include "java/lang/Throwable.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *PythonSwitchHandler::class$ = NULL;
      jmethodID *PythonSwitchHandler::mids$ = NULL;
      bool PythonSwitchHandler::live$ = false;

      jclass PythonSwitchHandler::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/PythonSwitchHandler");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");
          mids$[mid_switchOccurred_25e281172b0c00c1] = env->getMethodID(cls, "switchOccurred", "(Lorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/propagation/SpacecraftState;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonSwitchHandler::PythonSwitchHandler() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

      void PythonSwitchHandler::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
      }

      jlong PythonSwitchHandler::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
      }

      void PythonSwitchHandler::pythonExtension(jlong a0) const
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
    namespace attitudes {
      static PyObject *t_PythonSwitchHandler_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonSwitchHandler_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonSwitchHandler_init_(t_PythonSwitchHandler *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonSwitchHandler_finalize(t_PythonSwitchHandler *self);
      static PyObject *t_PythonSwitchHandler_pythonExtension(t_PythonSwitchHandler *self, PyObject *args);
      static void JNICALL t_PythonSwitchHandler_pythonDecRef0(JNIEnv *jenv, jobject jobj);
      static void JNICALL t_PythonSwitchHandler_switchOccurred1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
      static PyObject *t_PythonSwitchHandler_get__self(t_PythonSwitchHandler *self, void *data);
      static PyGetSetDef t_PythonSwitchHandler__fields_[] = {
        DECLARE_GET_FIELD(t_PythonSwitchHandler, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonSwitchHandler__methods_[] = {
        DECLARE_METHOD(t_PythonSwitchHandler, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonSwitchHandler, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonSwitchHandler, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonSwitchHandler, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonSwitchHandler)[] = {
        { Py_tp_methods, t_PythonSwitchHandler__methods_ },
        { Py_tp_init, (void *) t_PythonSwitchHandler_init_ },
        { Py_tp_getset, t_PythonSwitchHandler__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonSwitchHandler)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonSwitchHandler, t_PythonSwitchHandler, PythonSwitchHandler);

      void t_PythonSwitchHandler::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonSwitchHandler), &PY_TYPE_DEF(PythonSwitchHandler), module, "PythonSwitchHandler", 1);
      }

      void t_PythonSwitchHandler::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonSwitchHandler), "class_", make_descriptor(PythonSwitchHandler::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonSwitchHandler), "wrapfn_", make_descriptor(t_PythonSwitchHandler::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonSwitchHandler), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonSwitchHandler::initializeClass);
        JNINativeMethod methods[] = {
          { "pythonDecRef", "()V", (void *) t_PythonSwitchHandler_pythonDecRef0 },
          { "switchOccurred", "(Lorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/propagation/SpacecraftState;)V", (void *) t_PythonSwitchHandler_switchOccurred1 },
        };
        env->registerNatives(cls, methods, 2);
      }

      static PyObject *t_PythonSwitchHandler_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonSwitchHandler::initializeClass, 1)))
          return NULL;
        return t_PythonSwitchHandler::wrap_Object(PythonSwitchHandler(((t_PythonSwitchHandler *) arg)->object.this$));
      }
      static PyObject *t_PythonSwitchHandler_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonSwitchHandler::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonSwitchHandler_init_(t_PythonSwitchHandler *self, PyObject *args, PyObject *kwds)
      {
        PythonSwitchHandler object((jobject) NULL);

        INT_CALL(object = PythonSwitchHandler());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonSwitchHandler_finalize(t_PythonSwitchHandler *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonSwitchHandler_pythonExtension(t_PythonSwitchHandler *self, PyObject *args)
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

      static void JNICALL t_PythonSwitchHandler_pythonDecRef0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonSwitchHandler::mids$[PythonSwitchHandler::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonSwitchHandler::mids$[PythonSwitchHandler::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static void JNICALL t_PythonSwitchHandler_switchOccurred1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonSwitchHandler::mids$[PythonSwitchHandler::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        PyObject *o0 = ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(::org::orekit::attitudes::AttitudeProvider(a0));
        PyObject *o1 = ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(::org::orekit::attitudes::AttitudeProvider(a1));
        PyObject *o2 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a2));
        PyObject *result = PyObject_CallMethod(obj, "switchOccurred", "OOO", o0, o1, o2);
        Py_DECREF(o0);
        Py_DECREF(o1);
        Py_DECREF(o2);
        if (!result)
          throwPythonError();
        else
          Py_DECREF(result);
      }

      static PyObject *t_PythonSwitchHandler_get__self(t_PythonSwitchHandler *self, void *data)
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
#include "org/orekit/utils/FieldAngularCoordinates.h"
#include "org/orekit/utils/FieldPVCoordinates.h"
#include "org/orekit/time/FieldTimeShiftable.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldRotation.h"
#include "org/orekit/utils/AngularCoordinates.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/hipparchus/analysis/differentiation/FieldDerivativeStructure.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/analysis/differentiation/FieldUnivariateDerivative2.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/analysis/differentiation/FieldUnivariateDerivative1.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "org/orekit/utils/FieldAngularCoordinates.h"
#include "org/orekit/utils/TimeStampedFieldPVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *FieldAngularCoordinates::class$ = NULL;
      jmethodID *FieldAngularCoordinates::mids$ = NULL;
      bool FieldAngularCoordinates::live$ = false;

      jclass FieldAngularCoordinates::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/FieldAngularCoordinates");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_dda4fc5052dbc315] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;)V");
          mids$[mid_init$_006ed17eafc6f566] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
          mids$[mid_init$_b48a80a7923c10e7] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/orekit/utils/AngularCoordinates;)V");
          mids$[mid_init$_3e921d7ba937742f] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
          mids$[mid_init$_b3548fb4d05156ca] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/FieldPVCoordinates;Lorg/orekit/utils/FieldPVCoordinates;Lorg/orekit/utils/FieldPVCoordinates;Lorg/orekit/utils/FieldPVCoordinates;D)V");
          mids$[mid_addOffset_b4fca2d41d96dde7] = env->getMethodID(cls, "addOffset", "(Lorg/orekit/utils/FieldAngularCoordinates;)Lorg/orekit/utils/FieldAngularCoordinates;");
          mids$[mid_applyTo_176da7a9c87c96a5] = env->getMethodID(cls, "applyTo", "(Lorg/orekit/utils/TimeStampedFieldPVCoordinates;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
          mids$[mid_applyTo_b9efbea1bca1646b] = env->getMethodID(cls, "applyTo", "(Lorg/orekit/utils/TimeStampedPVCoordinates;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
          mids$[mid_applyTo_448b59d288b2a2ff] = env->getMethodID(cls, "applyTo", "(Lorg/orekit/utils/FieldPVCoordinates;)Lorg/orekit/utils/FieldPVCoordinates;");
          mids$[mid_applyTo_56bdb7492041db79] = env->getMethodID(cls, "applyTo", "(Lorg/orekit/utils/PVCoordinates;)Lorg/orekit/utils/FieldPVCoordinates;");
          mids$[mid_createFromModifiedRodrigues_3765c91cac246fea] = env->getStaticMethodID(cls, "createFromModifiedRodrigues", "([[Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/utils/FieldAngularCoordinates;");
          mids$[mid_estimateRate_fb3f5086e8ab09a4] = env->getStaticMethodID(cls, "estimateRate", "(Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;D)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_estimateRate_4aafef0025250c27] = env->getStaticMethodID(cls, "estimateRate", "(Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getIdentity_f9978acbd91ca763] = env->getStaticMethodID(cls, "getIdentity", "(Lorg/hipparchus/Field;)Lorg/orekit/utils/FieldAngularCoordinates;");
          mids$[mid_getModifiedRodrigues_8834de8762278880] = env->getMethodID(cls, "getModifiedRodrigues", "(D)[[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getRotation_1e54a5caa5199c2e] = env->getMethodID(cls, "getRotation", "()Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
          mids$[mid_getRotationAcceleration_ff5ac73a7b43eddd] = env->getMethodID(cls, "getRotationAcceleration", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getRotationRate_ff5ac73a7b43eddd] = env->getMethodID(cls, "getRotationRate", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_revert_c0c63601c9238de5] = env->getMethodID(cls, "revert", "()Lorg/orekit/utils/FieldAngularCoordinates;");
          mids$[mid_rotationShiftedBy_2005bf0d8214fe6a] = env->getMethodID(cls, "rotationShiftedBy", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
          mids$[mid_shiftedBy_82d5cf76a7821c9e] = env->getMethodID(cls, "shiftedBy", "(D)Lorg/orekit/utils/FieldAngularCoordinates;");
          mids$[mid_shiftedBy_e3acef3b80610ef7] = env->getMethodID(cls, "shiftedBy", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/utils/FieldAngularCoordinates;");
          mids$[mid_subtractOffset_b4fca2d41d96dde7] = env->getMethodID(cls, "subtractOffset", "(Lorg/orekit/utils/FieldAngularCoordinates;)Lorg/orekit/utils/FieldAngularCoordinates;");
          mids$[mid_toAngularCoordinates_df90fc3151533d81] = env->getMethodID(cls, "toAngularCoordinates", "()Lorg/orekit/utils/AngularCoordinates;");
          mids$[mid_toDerivativeStructureRotation_33765e3b6b59bed2] = env->getMethodID(cls, "toDerivativeStructureRotation", "(I)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
          mids$[mid_toUnivariateDerivative1Rotation_1e54a5caa5199c2e] = env->getMethodID(cls, "toUnivariateDerivative1Rotation", "()Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
          mids$[mid_toUnivariateDerivative2Rotation_1e54a5caa5199c2e] = env->getMethodID(cls, "toUnivariateDerivative2Rotation", "()Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldAngularCoordinates::FieldAngularCoordinates(const ::org::hipparchus::geometry::euclidean::threed::FieldRotation & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_dda4fc5052dbc315, a0.this$)) {}

      FieldAngularCoordinates::FieldAngularCoordinates(const ::org::hipparchus::geometry::euclidean::threed::FieldRotation & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_006ed17eafc6f566, a0.this$, a1.this$)) {}

      FieldAngularCoordinates::FieldAngularCoordinates(const ::org::hipparchus::Field & a0, const ::org::orekit::utils::AngularCoordinates & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b48a80a7923c10e7, a0.this$, a1.this$)) {}

      FieldAngularCoordinates::FieldAngularCoordinates(const ::org::hipparchus::geometry::euclidean::threed::FieldRotation & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3e921d7ba937742f, a0.this$, a1.this$, a2.this$)) {}

      FieldAngularCoordinates::FieldAngularCoordinates(const ::org::orekit::utils::FieldPVCoordinates & a0, const ::org::orekit::utils::FieldPVCoordinates & a1, const ::org::orekit::utils::FieldPVCoordinates & a2, const ::org::orekit::utils::FieldPVCoordinates & a3, jdouble a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b3548fb4d05156ca, a0.this$, a1.this$, a2.this$, a3.this$, a4)) {}

      FieldAngularCoordinates FieldAngularCoordinates::addOffset(const FieldAngularCoordinates & a0) const
      {
        return FieldAngularCoordinates(env->callObjectMethod(this$, mids$[mid_addOffset_b4fca2d41d96dde7], a0.this$));
      }

      ::org::orekit::utils::TimeStampedFieldPVCoordinates FieldAngularCoordinates::applyTo(const ::org::orekit::utils::TimeStampedFieldPVCoordinates & a0) const
      {
        return ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_applyTo_176da7a9c87c96a5], a0.this$));
      }

      ::org::orekit::utils::TimeStampedFieldPVCoordinates FieldAngularCoordinates::applyTo(const ::org::orekit::utils::TimeStampedPVCoordinates & a0) const
      {
        return ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_applyTo_b9efbea1bca1646b], a0.this$));
      }

      ::org::orekit::utils::FieldPVCoordinates FieldAngularCoordinates::applyTo(const ::org::orekit::utils::FieldPVCoordinates & a0) const
      {
        return ::org::orekit::utils::FieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_applyTo_448b59d288b2a2ff], a0.this$));
      }

      ::org::orekit::utils::FieldPVCoordinates FieldAngularCoordinates::applyTo(const ::org::orekit::utils::PVCoordinates & a0) const
      {
        return ::org::orekit::utils::FieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_applyTo_56bdb7492041db79], a0.this$));
      }

      FieldAngularCoordinates FieldAngularCoordinates::createFromModifiedRodrigues(const JArray< JArray< ::org::hipparchus::CalculusFieldElement > > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldAngularCoordinates(env->callStaticObjectMethod(cls, mids$[mid_createFromModifiedRodrigues_3765c91cac246fea], a0.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldAngularCoordinates::estimateRate(const ::org::hipparchus::geometry::euclidean::threed::FieldRotation & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldRotation & a1, jdouble a2)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callStaticObjectMethod(cls, mids$[mid_estimateRate_fb3f5086e8ab09a4], a0.this$, a1.this$, a2));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldAngularCoordinates::estimateRate(const ::org::hipparchus::geometry::euclidean::threed::FieldRotation & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldRotation & a1, const ::org::hipparchus::CalculusFieldElement & a2)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callStaticObjectMethod(cls, mids$[mid_estimateRate_4aafef0025250c27], a0.this$, a1.this$, a2.this$));
      }

      FieldAngularCoordinates FieldAngularCoordinates::getIdentity(const ::org::hipparchus::Field & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldAngularCoordinates(env->callStaticObjectMethod(cls, mids$[mid_getIdentity_f9978acbd91ca763], a0.this$));
      }

      JArray< JArray< ::org::hipparchus::CalculusFieldElement > > FieldAngularCoordinates::getModifiedRodrigues(jdouble a0) const
      {
        return JArray< JArray< ::org::hipparchus::CalculusFieldElement > >(env->callObjectMethod(this$, mids$[mid_getModifiedRodrigues_8834de8762278880], a0));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldRotation FieldAngularCoordinates::getRotation() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldRotation(env->callObjectMethod(this$, mids$[mid_getRotation_1e54a5caa5199c2e]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldAngularCoordinates::getRotationAcceleration() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getRotationAcceleration_ff5ac73a7b43eddd]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldAngularCoordinates::getRotationRate() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getRotationRate_ff5ac73a7b43eddd]));
      }

      FieldAngularCoordinates FieldAngularCoordinates::revert() const
      {
        return FieldAngularCoordinates(env->callObjectMethod(this$, mids$[mid_revert_c0c63601c9238de5]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldRotation FieldAngularCoordinates::rotationShiftedBy(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldRotation(env->callObjectMethod(this$, mids$[mid_rotationShiftedBy_2005bf0d8214fe6a], a0.this$));
      }

      FieldAngularCoordinates FieldAngularCoordinates::shiftedBy(jdouble a0) const
      {
        return FieldAngularCoordinates(env->callObjectMethod(this$, mids$[mid_shiftedBy_82d5cf76a7821c9e], a0));
      }

      FieldAngularCoordinates FieldAngularCoordinates::shiftedBy(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return FieldAngularCoordinates(env->callObjectMethod(this$, mids$[mid_shiftedBy_e3acef3b80610ef7], a0.this$));
      }

      FieldAngularCoordinates FieldAngularCoordinates::subtractOffset(const FieldAngularCoordinates & a0) const
      {
        return FieldAngularCoordinates(env->callObjectMethod(this$, mids$[mid_subtractOffset_b4fca2d41d96dde7], a0.this$));
      }

      ::org::orekit::utils::AngularCoordinates FieldAngularCoordinates::toAngularCoordinates() const
      {
        return ::org::orekit::utils::AngularCoordinates(env->callObjectMethod(this$, mids$[mid_toAngularCoordinates_df90fc3151533d81]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldRotation FieldAngularCoordinates::toDerivativeStructureRotation(jint a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldRotation(env->callObjectMethod(this$, mids$[mid_toDerivativeStructureRotation_33765e3b6b59bed2], a0));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldRotation FieldAngularCoordinates::toUnivariateDerivative1Rotation() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldRotation(env->callObjectMethod(this$, mids$[mid_toUnivariateDerivative1Rotation_1e54a5caa5199c2e]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldRotation FieldAngularCoordinates::toUnivariateDerivative2Rotation() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldRotation(env->callObjectMethod(this$, mids$[mid_toUnivariateDerivative2Rotation_1e54a5caa5199c2e]));
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
      static PyObject *t_FieldAngularCoordinates_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldAngularCoordinates_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldAngularCoordinates_of_(t_FieldAngularCoordinates *self, PyObject *args);
      static int t_FieldAngularCoordinates_init_(t_FieldAngularCoordinates *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldAngularCoordinates_addOffset(t_FieldAngularCoordinates *self, PyObject *arg);
      static PyObject *t_FieldAngularCoordinates_applyTo(t_FieldAngularCoordinates *self, PyObject *args);
      static PyObject *t_FieldAngularCoordinates_createFromModifiedRodrigues(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldAngularCoordinates_estimateRate(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldAngularCoordinates_getIdentity(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldAngularCoordinates_getModifiedRodrigues(t_FieldAngularCoordinates *self, PyObject *arg);
      static PyObject *t_FieldAngularCoordinates_getRotation(t_FieldAngularCoordinates *self);
      static PyObject *t_FieldAngularCoordinates_getRotationAcceleration(t_FieldAngularCoordinates *self);
      static PyObject *t_FieldAngularCoordinates_getRotationRate(t_FieldAngularCoordinates *self);
      static PyObject *t_FieldAngularCoordinates_revert(t_FieldAngularCoordinates *self);
      static PyObject *t_FieldAngularCoordinates_rotationShiftedBy(t_FieldAngularCoordinates *self, PyObject *arg);
      static PyObject *t_FieldAngularCoordinates_shiftedBy(t_FieldAngularCoordinates *self, PyObject *args);
      static PyObject *t_FieldAngularCoordinates_subtractOffset(t_FieldAngularCoordinates *self, PyObject *arg);
      static PyObject *t_FieldAngularCoordinates_toAngularCoordinates(t_FieldAngularCoordinates *self);
      static PyObject *t_FieldAngularCoordinates_toDerivativeStructureRotation(t_FieldAngularCoordinates *self, PyObject *arg);
      static PyObject *t_FieldAngularCoordinates_toUnivariateDerivative1Rotation(t_FieldAngularCoordinates *self);
      static PyObject *t_FieldAngularCoordinates_toUnivariateDerivative2Rotation(t_FieldAngularCoordinates *self);
      static PyObject *t_FieldAngularCoordinates_get__rotation(t_FieldAngularCoordinates *self, void *data);
      static PyObject *t_FieldAngularCoordinates_get__rotationAcceleration(t_FieldAngularCoordinates *self, void *data);
      static PyObject *t_FieldAngularCoordinates_get__rotationRate(t_FieldAngularCoordinates *self, void *data);
      static PyObject *t_FieldAngularCoordinates_get__parameters_(t_FieldAngularCoordinates *self, void *data);
      static PyGetSetDef t_FieldAngularCoordinates__fields_[] = {
        DECLARE_GET_FIELD(t_FieldAngularCoordinates, rotation),
        DECLARE_GET_FIELD(t_FieldAngularCoordinates, rotationAcceleration),
        DECLARE_GET_FIELD(t_FieldAngularCoordinates, rotationRate),
        DECLARE_GET_FIELD(t_FieldAngularCoordinates, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldAngularCoordinates__methods_[] = {
        DECLARE_METHOD(t_FieldAngularCoordinates, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldAngularCoordinates, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldAngularCoordinates, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldAngularCoordinates, addOffset, METH_O),
        DECLARE_METHOD(t_FieldAngularCoordinates, applyTo, METH_VARARGS),
        DECLARE_METHOD(t_FieldAngularCoordinates, createFromModifiedRodrigues, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldAngularCoordinates, estimateRate, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FieldAngularCoordinates, getIdentity, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldAngularCoordinates, getModifiedRodrigues, METH_O),
        DECLARE_METHOD(t_FieldAngularCoordinates, getRotation, METH_NOARGS),
        DECLARE_METHOD(t_FieldAngularCoordinates, getRotationAcceleration, METH_NOARGS),
        DECLARE_METHOD(t_FieldAngularCoordinates, getRotationRate, METH_NOARGS),
        DECLARE_METHOD(t_FieldAngularCoordinates, revert, METH_NOARGS),
        DECLARE_METHOD(t_FieldAngularCoordinates, rotationShiftedBy, METH_O),
        DECLARE_METHOD(t_FieldAngularCoordinates, shiftedBy, METH_VARARGS),
        DECLARE_METHOD(t_FieldAngularCoordinates, subtractOffset, METH_O),
        DECLARE_METHOD(t_FieldAngularCoordinates, toAngularCoordinates, METH_NOARGS),
        DECLARE_METHOD(t_FieldAngularCoordinates, toDerivativeStructureRotation, METH_O),
        DECLARE_METHOD(t_FieldAngularCoordinates, toUnivariateDerivative1Rotation, METH_NOARGS),
        DECLARE_METHOD(t_FieldAngularCoordinates, toUnivariateDerivative2Rotation, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldAngularCoordinates)[] = {
        { Py_tp_methods, t_FieldAngularCoordinates__methods_ },
        { Py_tp_init, (void *) t_FieldAngularCoordinates_init_ },
        { Py_tp_getset, t_FieldAngularCoordinates__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldAngularCoordinates)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldAngularCoordinates, t_FieldAngularCoordinates, FieldAngularCoordinates);
      PyObject *t_FieldAngularCoordinates::wrap_Object(const FieldAngularCoordinates& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldAngularCoordinates::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldAngularCoordinates *self = (t_FieldAngularCoordinates *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldAngularCoordinates::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldAngularCoordinates::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldAngularCoordinates *self = (t_FieldAngularCoordinates *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldAngularCoordinates::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldAngularCoordinates), &PY_TYPE_DEF(FieldAngularCoordinates), module, "FieldAngularCoordinates", 0);
      }

      void t_FieldAngularCoordinates::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAngularCoordinates), "class_", make_descriptor(FieldAngularCoordinates::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAngularCoordinates), "wrapfn_", make_descriptor(t_FieldAngularCoordinates::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAngularCoordinates), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldAngularCoordinates_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldAngularCoordinates::initializeClass, 1)))
          return NULL;
        return t_FieldAngularCoordinates::wrap_Object(FieldAngularCoordinates(((t_FieldAngularCoordinates *) arg)->object.this$));
      }
      static PyObject *t_FieldAngularCoordinates_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldAngularCoordinates::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldAngularCoordinates_of_(t_FieldAngularCoordinates *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldAngularCoordinates_init_(t_FieldAngularCoordinates *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::geometry::euclidean::threed::FieldRotation a0((jobject) NULL);
            PyTypeObject **p0;
            FieldAngularCoordinates object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::geometry::euclidean::threed::FieldRotation::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::parameters_))
            {
              INT_CALL(object = FieldAngularCoordinates(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::org::hipparchus::geometry::euclidean::threed::FieldRotation a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
            PyTypeObject **p1;
            FieldAngularCoordinates object((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::hipparchus::geometry::euclidean::threed::FieldRotation::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
            {
              INT_CALL(object = FieldAngularCoordinates(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::utils::AngularCoordinates a1((jobject) NULL);
            FieldAngularCoordinates object((jobject) NULL);

            if (!parseArgs(args, "Kk", ::org::hipparchus::Field::initializeClass, ::org::orekit::utils::AngularCoordinates::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
            {
              INT_CALL(object = FieldAngularCoordinates(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::org::hipparchus::geometry::euclidean::threed::FieldRotation a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a2((jobject) NULL);
            PyTypeObject **p2;
            FieldAngularCoordinates object((jobject) NULL);

            if (!parseArgs(args, "KKK", ::org::hipparchus::geometry::euclidean::threed::FieldRotation::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a2, &p2, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
            {
              INT_CALL(object = FieldAngularCoordinates(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 5:
          {
            ::org::orekit::utils::FieldPVCoordinates a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::utils::FieldPVCoordinates a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::FieldPVCoordinates a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::utils::FieldPVCoordinates a3((jobject) NULL);
            PyTypeObject **p3;
            jdouble a4;
            FieldAngularCoordinates object((jobject) NULL);

            if (!parseArgs(args, "KKKKD", ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a1, &p1, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a2, &p2, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a3, &p3, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a4))
            {
              INT_CALL(object = FieldAngularCoordinates(a0, a1, a2, a3, a4));
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

      static PyObject *t_FieldAngularCoordinates_addOffset(t_FieldAngularCoordinates *self, PyObject *arg)
      {
        FieldAngularCoordinates a0((jobject) NULL);
        PyTypeObject **p0;
        FieldAngularCoordinates result((jobject) NULL);

        if (!parseArg(arg, "K", FieldAngularCoordinates::initializeClass, &a0, &p0, t_FieldAngularCoordinates::parameters_))
        {
          OBJ_CALL(result = self->object.addOffset(a0));
          return t_FieldAngularCoordinates::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "addOffset", arg);
        return NULL;
      }

      static PyObject *t_FieldAngularCoordinates_applyTo(t_FieldAngularCoordinates *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::utils::TimeStampedFieldPVCoordinates a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::utils::TimeStampedFieldPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::utils::TimeStampedFieldPVCoordinates::initializeClass, &a0, &p0, ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::parameters_))
            {
              OBJ_CALL(result = self->object.applyTo(a0));
              return ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::orekit::utils::TimeStampedPVCoordinates a0((jobject) NULL);
            ::org::orekit::utils::TimeStampedFieldPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::utils::TimeStampedPVCoordinates::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.applyTo(a0));
              return ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::orekit::utils::FieldPVCoordinates a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::utils::FieldPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
            {
              OBJ_CALL(result = self->object.applyTo(a0));
              return ::org::orekit::utils::t_FieldPVCoordinates::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::orekit::utils::PVCoordinates a0((jobject) NULL);
            ::org::orekit::utils::FieldPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::utils::PVCoordinates::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.applyTo(a0));
              return ::org::orekit::utils::t_FieldPVCoordinates::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "applyTo", args);
        return NULL;
      }

      static PyObject *t_FieldAngularCoordinates_createFromModifiedRodrigues(PyTypeObject *type, PyObject *arg)
      {
        JArray< JArray< ::org::hipparchus::CalculusFieldElement > > a0((jobject) NULL);
        PyTypeObject **p0;
        FieldAngularCoordinates result((jobject) NULL);

        if (!parseArg(arg, "[[K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::utils::FieldAngularCoordinates::createFromModifiedRodrigues(a0));
          return t_FieldAngularCoordinates::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "createFromModifiedRodrigues", arg);
        return NULL;
      }

      static PyObject *t_FieldAngularCoordinates_estimateRate(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::hipparchus::geometry::euclidean::threed::FieldRotation a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldRotation a1((jobject) NULL);
            PyTypeObject **p1;
            jdouble a2;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

            if (!parseArgs(args, "KKD", ::org::hipparchus::geometry::euclidean::threed::FieldRotation::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldRotation::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::parameters_, &a2))
            {
              OBJ_CALL(result = ::org::orekit::utils::FieldAngularCoordinates::estimateRate(a0, a1, a2));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::geometry::euclidean::threed::FieldRotation a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldRotation a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

            if (!parseArgs(args, "KKK", ::org::hipparchus::geometry::euclidean::threed::FieldRotation::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldRotation::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::orekit::utils::FieldAngularCoordinates::estimateRate(a0, a1, a2));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "estimateRate", args);
        return NULL;
      }

      static PyObject *t_FieldAngularCoordinates_getIdentity(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        FieldAngularCoordinates result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::utils::FieldAngularCoordinates::getIdentity(a0));
          return t_FieldAngularCoordinates::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getIdentity", arg);
        return NULL;
      }

      static PyObject *t_FieldAngularCoordinates_getModifiedRodrigues(t_FieldAngularCoordinates *self, PyObject *arg)
      {
        jdouble a0;
        JArray< JArray< ::org::hipparchus::CalculusFieldElement > > result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.getModifiedRodrigues(a0));
          return JArray<jobject>(result.this$).wrap(NULL);
        }

        PyErr_SetArgsError((PyObject *) self, "getModifiedRodrigues", arg);
        return NULL;
      }

      static PyObject *t_FieldAngularCoordinates_getRotation(t_FieldAngularCoordinates *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldRotation result((jobject) NULL);
        OBJ_CALL(result = self->object.getRotation());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldAngularCoordinates_getRotationAcceleration(t_FieldAngularCoordinates *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getRotationAcceleration());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldAngularCoordinates_getRotationRate(t_FieldAngularCoordinates *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getRotationRate());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldAngularCoordinates_revert(t_FieldAngularCoordinates *self)
      {
        FieldAngularCoordinates result((jobject) NULL);
        OBJ_CALL(result = self->object.revert());
        return t_FieldAngularCoordinates::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldAngularCoordinates_rotationShiftedBy(t_FieldAngularCoordinates *self, PyObject *arg)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::geometry::euclidean::threed::FieldRotation result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.rotationShiftedBy(a0));
          return ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "rotationShiftedBy", arg);
        return NULL;
      }

      static PyObject *t_FieldAngularCoordinates_shiftedBy(t_FieldAngularCoordinates *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            FieldAngularCoordinates result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.shiftedBy(a0));
              return t_FieldAngularCoordinates::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            FieldAngularCoordinates result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = self->object.shiftedBy(a0));
              return t_FieldAngularCoordinates::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "shiftedBy", args);
        return NULL;
      }

      static PyObject *t_FieldAngularCoordinates_subtractOffset(t_FieldAngularCoordinates *self, PyObject *arg)
      {
        FieldAngularCoordinates a0((jobject) NULL);
        PyTypeObject **p0;
        FieldAngularCoordinates result((jobject) NULL);

        if (!parseArg(arg, "K", FieldAngularCoordinates::initializeClass, &a0, &p0, t_FieldAngularCoordinates::parameters_))
        {
          OBJ_CALL(result = self->object.subtractOffset(a0));
          return t_FieldAngularCoordinates::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "subtractOffset", arg);
        return NULL;
      }

      static PyObject *t_FieldAngularCoordinates_toAngularCoordinates(t_FieldAngularCoordinates *self)
      {
        ::org::orekit::utils::AngularCoordinates result((jobject) NULL);
        OBJ_CALL(result = self->object.toAngularCoordinates());
        return ::org::orekit::utils::t_AngularCoordinates::wrap_Object(result);
      }

      static PyObject *t_FieldAngularCoordinates_toDerivativeStructureRotation(t_FieldAngularCoordinates *self, PyObject *arg)
      {
        jint a0;
        ::org::hipparchus::geometry::euclidean::threed::FieldRotation result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.toDerivativeStructureRotation(a0));
          return ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "toDerivativeStructureRotation", arg);
        return NULL;
      }

      static PyObject *t_FieldAngularCoordinates_toUnivariateDerivative1Rotation(t_FieldAngularCoordinates *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldRotation result((jobject) NULL);
        OBJ_CALL(result = self->object.toUnivariateDerivative1Rotation());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::wrap_Object(result);
      }

      static PyObject *t_FieldAngularCoordinates_toUnivariateDerivative2Rotation(t_FieldAngularCoordinates *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldRotation result((jobject) NULL);
        OBJ_CALL(result = self->object.toUnivariateDerivative2Rotation());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::wrap_Object(result);
      }
      static PyObject *t_FieldAngularCoordinates_get__parameters_(t_FieldAngularCoordinates *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldAngularCoordinates_get__rotation(t_FieldAngularCoordinates *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldRotation value((jobject) NULL);
        OBJ_CALL(value = self->object.getRotation());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::wrap_Object(value);
      }

      static PyObject *t_FieldAngularCoordinates_get__rotationAcceleration(t_FieldAngularCoordinates *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getRotationAcceleration());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(value);
      }

      static PyObject *t_FieldAngularCoordinates_get__rotationRate(t_FieldAngularCoordinates *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getRotationRate());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/antenna/ReceiverAntenna.h"
#include "java/util/Map.h"
#include "org/orekit/gnss/antenna/FrequencyPattern.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/Frequency.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace antenna {

        ::java::lang::Class *ReceiverAntenna::class$ = NULL;
        jmethodID *ReceiverAntenna::mids$ = NULL;
        bool ReceiverAntenna::live$ = false;

        jclass ReceiverAntenna::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/gnss/antenna/ReceiverAntenna");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_fb219eac71c34b18] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/util/Map;Ljava/lang/String;)V");
            mids$[mid_getSerialNumber_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getSerialNumber", "()Ljava/lang/String;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ReceiverAntenna::ReceiverAntenna(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::java::util::Map & a2, const ::java::lang::String & a3) : ::org::orekit::gnss::antenna::Antenna(env->newObject(initializeClass, &mids$, mid_init$_fb219eac71c34b18, a0.this$, a1.this$, a2.this$, a3.this$)) {}

        ::java::lang::String ReceiverAntenna::getSerialNumber() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSerialNumber_1c1fa1e935d6cdcf]));
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
        static PyObject *t_ReceiverAntenna_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ReceiverAntenna_instance_(PyTypeObject *type, PyObject *arg);
        static int t_ReceiverAntenna_init_(t_ReceiverAntenna *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ReceiverAntenna_getSerialNumber(t_ReceiverAntenna *self);
        static PyObject *t_ReceiverAntenna_get__serialNumber(t_ReceiverAntenna *self, void *data);
        static PyGetSetDef t_ReceiverAntenna__fields_[] = {
          DECLARE_GET_FIELD(t_ReceiverAntenna, serialNumber),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ReceiverAntenna__methods_[] = {
          DECLARE_METHOD(t_ReceiverAntenna, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ReceiverAntenna, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ReceiverAntenna, getSerialNumber, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ReceiverAntenna)[] = {
          { Py_tp_methods, t_ReceiverAntenna__methods_ },
          { Py_tp_init, (void *) t_ReceiverAntenna_init_ },
          { Py_tp_getset, t_ReceiverAntenna__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ReceiverAntenna)[] = {
          &PY_TYPE_DEF(::org::orekit::gnss::antenna::Antenna),
          NULL
        };

        DEFINE_TYPE(ReceiverAntenna, t_ReceiverAntenna, ReceiverAntenna);

        void t_ReceiverAntenna::install(PyObject *module)
        {
          installType(&PY_TYPE(ReceiverAntenna), &PY_TYPE_DEF(ReceiverAntenna), module, "ReceiverAntenna", 0);
        }

        void t_ReceiverAntenna::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ReceiverAntenna), "class_", make_descriptor(ReceiverAntenna::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ReceiverAntenna), "wrapfn_", make_descriptor(t_ReceiverAntenna::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ReceiverAntenna), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ReceiverAntenna_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ReceiverAntenna::initializeClass, 1)))
            return NULL;
          return t_ReceiverAntenna::wrap_Object(ReceiverAntenna(((t_ReceiverAntenna *) arg)->object.this$));
        }
        static PyObject *t_ReceiverAntenna_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ReceiverAntenna::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_ReceiverAntenna_init_(t_ReceiverAntenna *self, PyObject *args, PyObject *kwds)
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::lang::String a1((jobject) NULL);
          ::java::util::Map a2((jobject) NULL);
          PyTypeObject **p2;
          ::java::lang::String a3((jobject) NULL);
          ReceiverAntenna object((jobject) NULL);

          if (!parseArgs(args, "ssKs", ::java::util::Map::initializeClass, &a0, &a1, &a2, &p2, ::java::util::t_Map::parameters_, &a3))
          {
            INT_CALL(object = ReceiverAntenna(a0, a1, a2, a3));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_ReceiverAntenna_getSerialNumber(t_ReceiverAntenna *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getSerialNumber());
          return j2p(result);
        }

        static PyObject *t_ReceiverAntenna_get__serialNumber(t_ReceiverAntenna *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getSerialNumber());
          return j2p(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/parser/ByteArrayEncodedMessage.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace parser {

          ::java::lang::Class *ByteArrayEncodedMessage::class$ = NULL;
          jmethodID *ByteArrayEncodedMessage::mids$ = NULL;
          bool ByteArrayEncodedMessage::live$ = false;

          jclass ByteArrayEncodedMessage::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/parser/ByteArrayEncodedMessage");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_459771b03534868e] = env->getMethodID(cls, "<init>", "([B)V");
              mids$[mid_start_a1fa5dae97ea5ed2] = env->getMethodID(cls, "start", "()V");
              mids$[mid_fetchByte_55546ef6a647f39b] = env->getMethodID(cls, "fetchByte", "()I");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ByteArrayEncodedMessage::ByteArrayEncodedMessage(const JArray< jbyte > & a0) : ::org::orekit::gnss::metric::parser::AbstractEncodedMessage(env->newObject(initializeClass, &mids$, mid_init$_459771b03534868e, a0.this$)) {}

          void ByteArrayEncodedMessage::start() const
          {
            env->callVoidMethod(this$, mids$[mid_start_a1fa5dae97ea5ed2]);
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
          static PyObject *t_ByteArrayEncodedMessage_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ByteArrayEncodedMessage_instance_(PyTypeObject *type, PyObject *arg);
          static int t_ByteArrayEncodedMessage_init_(t_ByteArrayEncodedMessage *self, PyObject *args, PyObject *kwds);
          static PyObject *t_ByteArrayEncodedMessage_start(t_ByteArrayEncodedMessage *self, PyObject *args);

          static PyMethodDef t_ByteArrayEncodedMessage__methods_[] = {
            DECLARE_METHOD(t_ByteArrayEncodedMessage, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ByteArrayEncodedMessage, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ByteArrayEncodedMessage, start, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ByteArrayEncodedMessage)[] = {
            { Py_tp_methods, t_ByteArrayEncodedMessage__methods_ },
            { Py_tp_init, (void *) t_ByteArrayEncodedMessage_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ByteArrayEncodedMessage)[] = {
            &PY_TYPE_DEF(::org::orekit::gnss::metric::parser::AbstractEncodedMessage),
            NULL
          };

          DEFINE_TYPE(ByteArrayEncodedMessage, t_ByteArrayEncodedMessage, ByteArrayEncodedMessage);

          void t_ByteArrayEncodedMessage::install(PyObject *module)
          {
            installType(&PY_TYPE(ByteArrayEncodedMessage), &PY_TYPE_DEF(ByteArrayEncodedMessage), module, "ByteArrayEncodedMessage", 0);
          }

          void t_ByteArrayEncodedMessage::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ByteArrayEncodedMessage), "class_", make_descriptor(ByteArrayEncodedMessage::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ByteArrayEncodedMessage), "wrapfn_", make_descriptor(t_ByteArrayEncodedMessage::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ByteArrayEncodedMessage), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ByteArrayEncodedMessage_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ByteArrayEncodedMessage::initializeClass, 1)))
              return NULL;
            return t_ByteArrayEncodedMessage::wrap_Object(ByteArrayEncodedMessage(((t_ByteArrayEncodedMessage *) arg)->object.this$));
          }
          static PyObject *t_ByteArrayEncodedMessage_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ByteArrayEncodedMessage::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_ByteArrayEncodedMessage_init_(t_ByteArrayEncodedMessage *self, PyObject *args, PyObject *kwds)
          {
            JArray< jbyte > a0((jobject) NULL);
            ByteArrayEncodedMessage object((jobject) NULL);

            if (!parseArgs(args, "[B", &a0))
            {
              INT_CALL(object = ByteArrayEncodedMessage(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_ByteArrayEncodedMessage_start(t_ByteArrayEncodedMessage *self, PyObject *args)
          {

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(self->object.start());
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(ByteArrayEncodedMessage), (PyObject *) self, "start", args, 2);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/util/Pair.h"
#include "org/hipparchus/util/Pair.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *Pair::class$ = NULL;
      jmethodID *Pair::mids$ = NULL;
      bool Pair::live$ = false;

      jclass Pair::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/Pair");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_cb233f2d837bf6b7] = env->getMethodID(cls, "<init>", "(Ljava/lang/Object;Ljava/lang/Object;)V");
          mids$[mid_create_ae46ab030a4d494a] = env->getStaticMethodID(cls, "create", "(Ljava/lang/Object;Ljava/lang/Object;)Lorg/hipparchus/util/Pair;");
          mids$[mid_equals_460c5e2d9d51c6cc] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_getFirst_541690f9ee81d3ad] = env->getMethodID(cls, "getFirst", "()Ljava/lang/Object;");
          mids$[mid_getKey_541690f9ee81d3ad] = env->getMethodID(cls, "getKey", "()Ljava/lang/Object;");
          mids$[mid_getSecond_541690f9ee81d3ad] = env->getMethodID(cls, "getSecond", "()Ljava/lang/Object;");
          mids$[mid_getValue_541690f9ee81d3ad] = env->getMethodID(cls, "getValue", "()Ljava/lang/Object;");
          mids$[mid_hashCode_55546ef6a647f39b] = env->getMethodID(cls, "hashCode", "()I");
          mids$[mid_toString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      Pair::Pair(const ::java::lang::Object & a0, const ::java::lang::Object & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_cb233f2d837bf6b7, a0.this$, a1.this$)) {}

      Pair Pair::create(const ::java::lang::Object & a0, const ::java::lang::Object & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return Pair(env->callStaticObjectMethod(cls, mids$[mid_create_ae46ab030a4d494a], a0.this$, a1.this$));
      }

      jboolean Pair::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_460c5e2d9d51c6cc], a0.this$);
      }

      ::java::lang::Object Pair::getFirst() const
      {
        return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_getFirst_541690f9ee81d3ad]));
      }

      ::java::lang::Object Pair::getKey() const
      {
        return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_getKey_541690f9ee81d3ad]));
      }

      ::java::lang::Object Pair::getSecond() const
      {
        return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_getSecond_541690f9ee81d3ad]));
      }

      ::java::lang::Object Pair::getValue() const
      {
        return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_getValue_541690f9ee81d3ad]));
      }

      jint Pair::hashCode() const
      {
        return env->callIntMethod(this$, mids$[mid_hashCode_55546ef6a647f39b]);
      }

      ::java::lang::String Pair::toString() const
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
    namespace util {
      static PyObject *t_Pair_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Pair_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Pair_of_(t_Pair *self, PyObject *args);
      static int t_Pair_init_(t_Pair *self, PyObject *args, PyObject *kwds);
      static PyObject *t_Pair_create(PyTypeObject *type, PyObject *args);
      static PyObject *t_Pair_equals(t_Pair *self, PyObject *args);
      static PyObject *t_Pair_getFirst(t_Pair *self);
      static PyObject *t_Pair_getKey(t_Pair *self);
      static PyObject *t_Pair_getSecond(t_Pair *self);
      static PyObject *t_Pair_getValue(t_Pair *self);
      static PyObject *t_Pair_hashCode(t_Pair *self, PyObject *args);
      static PyObject *t_Pair_toString(t_Pair *self, PyObject *args);
      static PyObject *t_Pair_get__first(t_Pair *self, void *data);
      static PyObject *t_Pair_get__key(t_Pair *self, void *data);
      static PyObject *t_Pair_get__second(t_Pair *self, void *data);
      static PyObject *t_Pair_get__value(t_Pair *self, void *data);
      static PyObject *t_Pair_get__parameters_(t_Pair *self, void *data);
      static PyGetSetDef t_Pair__fields_[] = {
        DECLARE_GET_FIELD(t_Pair, first),
        DECLARE_GET_FIELD(t_Pair, key),
        DECLARE_GET_FIELD(t_Pair, second),
        DECLARE_GET_FIELD(t_Pair, value),
        DECLARE_GET_FIELD(t_Pair, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_Pair__methods_[] = {
        DECLARE_METHOD(t_Pair, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Pair, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Pair, of_, METH_VARARGS),
        DECLARE_METHOD(t_Pair, create, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_Pair, equals, METH_VARARGS),
        DECLARE_METHOD(t_Pair, getFirst, METH_NOARGS),
        DECLARE_METHOD(t_Pair, getKey, METH_NOARGS),
        DECLARE_METHOD(t_Pair, getSecond, METH_NOARGS),
        DECLARE_METHOD(t_Pair, getValue, METH_NOARGS),
        DECLARE_METHOD(t_Pair, hashCode, METH_VARARGS),
        DECLARE_METHOD(t_Pair, toString, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Pair)[] = {
        { Py_tp_methods, t_Pair__methods_ },
        { Py_tp_init, (void *) t_Pair_init_ },
        { Py_tp_getset, t_Pair__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Pair)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(Pair, t_Pair, Pair);
      PyObject *t_Pair::wrap_Object(const Pair& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_Pair::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_Pair *self = (t_Pair *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      PyObject *t_Pair::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_Pair::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_Pair *self = (t_Pair *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      void t_Pair::install(PyObject *module)
      {
        installType(&PY_TYPE(Pair), &PY_TYPE_DEF(Pair), module, "Pair", 0);
      }

      void t_Pair::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Pair), "class_", make_descriptor(Pair::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Pair), "wrapfn_", make_descriptor(t_Pair::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Pair), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Pair_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Pair::initializeClass, 1)))
          return NULL;
        return t_Pair::wrap_Object(Pair(((t_Pair *) arg)->object.this$));
      }
      static PyObject *t_Pair_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Pair::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_Pair_of_(t_Pair *self, PyObject *args)
      {
        if (!parseArg(args, "T", 2, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_Pair_init_(t_Pair *self, PyObject *args, PyObject *kwds)
      {
        ::java::lang::Object a0((jobject) NULL);
        ::java::lang::Object a1((jobject) NULL);
        Pair object((jobject) NULL);

        if (!parseArgs(args, "oo", &a0, &a1))
        {
          INT_CALL(object = Pair(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_Pair_create(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        ::java::lang::Object a1((jobject) NULL);
        Pair result((jobject) NULL);

        if (!parseArgs(args, "oo", &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::util::Pair::create(a0, a1));
          return t_Pair::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "create", args);
        return NULL;
      }

      static PyObject *t_Pair_equals(t_Pair *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "o", &a0))
        {
          OBJ_CALL(result = self->object.equals(a0));
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(Pair), (PyObject *) self, "equals", args, 2);
      }

      static PyObject *t_Pair_getFirst(t_Pair *self)
      {
        ::java::lang::Object result((jobject) NULL);
        OBJ_CALL(result = self->object.getFirst());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      static PyObject *t_Pair_getKey(t_Pair *self)
      {
        ::java::lang::Object result((jobject) NULL);
        OBJ_CALL(result = self->object.getKey());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      static PyObject *t_Pair_getSecond(t_Pair *self)
      {
        ::java::lang::Object result((jobject) NULL);
        OBJ_CALL(result = self->object.getSecond());
        return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      static PyObject *t_Pair_getValue(t_Pair *self)
      {
        ::java::lang::Object result((jobject) NULL);
        OBJ_CALL(result = self->object.getValue());
        return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      static PyObject *t_Pair_hashCode(t_Pair *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hashCode());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(Pair), (PyObject *) self, "hashCode", args, 2);
      }

      static PyObject *t_Pair_toString(t_Pair *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(Pair), (PyObject *) self, "toString", args, 2);
      }
      static PyObject *t_Pair_get__parameters_(t_Pair *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_Pair_get__first(t_Pair *self, void *data)
      {
        ::java::lang::Object value((jobject) NULL);
        OBJ_CALL(value = self->object.getFirst());
        return ::java::lang::t_Object::wrap_Object(value);
      }

      static PyObject *t_Pair_get__key(t_Pair *self, void *data)
      {
        ::java::lang::Object value((jobject) NULL);
        OBJ_CALL(value = self->object.getKey());
        return ::java::lang::t_Object::wrap_Object(value);
      }

      static PyObject *t_Pair_get__second(t_Pair *self, void *data)
      {
        ::java::lang::Object value((jobject) NULL);
        OBJ_CALL(value = self->object.getSecond());
        return ::java::lang::t_Object::wrap_Object(value);
      }

      static PyObject *t_Pair_get__value(t_Pair *self, void *data)
      {
        ::java::lang::Object value((jobject) NULL);
        OBJ_CALL(value = self->object.getValue());
        return ::java::lang::t_Object::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/IRNSSScale.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/time/DateComponents.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/String.h"
#include "org/orekit/time/TimeComponents.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *IRNSSScale::class$ = NULL;
      jmethodID *IRNSSScale::mids$ = NULL;
      bool IRNSSScale::live$ = false;

      jclass IRNSSScale::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/IRNSSScale");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getName_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_offsetFromTAI_fd347811007a6ba3] = env->getMethodID(cls, "offsetFromTAI", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_offsetFromTAI_140b8964300ddedf] = env->getMethodID(cls, "offsetFromTAI", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_offsetToTAI_e7a49f02c43fd893] = env->getMethodID(cls, "offsetToTAI", "(Lorg/orekit/time/DateComponents;Lorg/orekit/time/TimeComponents;)D");
          mids$[mid_toString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::String IRNSSScale::getName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_1c1fa1e935d6cdcf]));
      }

      jdouble IRNSSScale::offsetFromTAI(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_offsetFromTAI_fd347811007a6ba3], a0.this$);
      }

      ::org::hipparchus::CalculusFieldElement IRNSSScale::offsetFromTAI(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_offsetFromTAI_140b8964300ddedf], a0.this$));
      }

      jdouble IRNSSScale::offsetToTAI(const ::org::orekit::time::DateComponents & a0, const ::org::orekit::time::TimeComponents & a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_offsetToTAI_e7a49f02c43fd893], a0.this$, a1.this$);
      }

      ::java::lang::String IRNSSScale::toString() const
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
    namespace time {
      static PyObject *t_IRNSSScale_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_IRNSSScale_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_IRNSSScale_getName(t_IRNSSScale *self);
      static PyObject *t_IRNSSScale_offsetFromTAI(t_IRNSSScale *self, PyObject *args);
      static PyObject *t_IRNSSScale_offsetToTAI(t_IRNSSScale *self, PyObject *args);
      static PyObject *t_IRNSSScale_toString(t_IRNSSScale *self, PyObject *args);
      static PyObject *t_IRNSSScale_get__name(t_IRNSSScale *self, void *data);
      static PyGetSetDef t_IRNSSScale__fields_[] = {
        DECLARE_GET_FIELD(t_IRNSSScale, name),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_IRNSSScale__methods_[] = {
        DECLARE_METHOD(t_IRNSSScale, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_IRNSSScale, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_IRNSSScale, getName, METH_NOARGS),
        DECLARE_METHOD(t_IRNSSScale, offsetFromTAI, METH_VARARGS),
        DECLARE_METHOD(t_IRNSSScale, offsetToTAI, METH_VARARGS),
        DECLARE_METHOD(t_IRNSSScale, toString, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(IRNSSScale)[] = {
        { Py_tp_methods, t_IRNSSScale__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_IRNSSScale__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(IRNSSScale)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(IRNSSScale, t_IRNSSScale, IRNSSScale);

      void t_IRNSSScale::install(PyObject *module)
      {
        installType(&PY_TYPE(IRNSSScale), &PY_TYPE_DEF(IRNSSScale), module, "IRNSSScale", 0);
      }

      void t_IRNSSScale::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(IRNSSScale), "class_", make_descriptor(IRNSSScale::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(IRNSSScale), "wrapfn_", make_descriptor(t_IRNSSScale::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(IRNSSScale), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_IRNSSScale_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, IRNSSScale::initializeClass, 1)))
          return NULL;
        return t_IRNSSScale::wrap_Object(IRNSSScale(((t_IRNSSScale *) arg)->object.this$));
      }
      static PyObject *t_IRNSSScale_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, IRNSSScale::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_IRNSSScale_getName(t_IRNSSScale *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getName());
        return j2p(result);
      }

      static PyObject *t_IRNSSScale_offsetFromTAI(t_IRNSSScale *self, PyObject *args)
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

      static PyObject *t_IRNSSScale_offsetToTAI(t_IRNSSScale *self, PyObject *args)
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

      static PyObject *t_IRNSSScale_toString(t_IRNSSScale *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(IRNSSScale), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_IRNSSScale_get__name(t_IRNSSScale *self, void *data)
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
#include "org/orekit/files/sp3/SP3OrbitType.h"
#include "org/orekit/files/sp3/SP3OrbitType.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace sp3 {

        ::java::lang::Class *SP3OrbitType::class$ = NULL;
        jmethodID *SP3OrbitType::mids$ = NULL;
        bool SP3OrbitType::live$ = false;
        SP3OrbitType *SP3OrbitType::BCT = NULL;
        SP3OrbitType *SP3OrbitType::EXT = NULL;
        SP3OrbitType *SP3OrbitType::FIT = NULL;
        SP3OrbitType *SP3OrbitType::HLM = NULL;
        SP3OrbitType *SP3OrbitType::OTHER = NULL;

        jclass SP3OrbitType::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/sp3/SP3OrbitType");

            mids$ = new jmethodID[max_mid];
            mids$[mid_parseType_8ce6db4cf2e6cad2] = env->getStaticMethodID(cls, "parseType", "(Ljava/lang/String;)Lorg/orekit/files/sp3/SP3OrbitType;");
            mids$[mid_valueOf_8ce6db4cf2e6cad2] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/sp3/SP3OrbitType;");
            mids$[mid_values_4fa22ef2b4f22b54] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/sp3/SP3OrbitType;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            BCT = new SP3OrbitType(env->getStaticObjectField(cls, "BCT", "Lorg/orekit/files/sp3/SP3OrbitType;"));
            EXT = new SP3OrbitType(env->getStaticObjectField(cls, "EXT", "Lorg/orekit/files/sp3/SP3OrbitType;"));
            FIT = new SP3OrbitType(env->getStaticObjectField(cls, "FIT", "Lorg/orekit/files/sp3/SP3OrbitType;"));
            HLM = new SP3OrbitType(env->getStaticObjectField(cls, "HLM", "Lorg/orekit/files/sp3/SP3OrbitType;"));
            OTHER = new SP3OrbitType(env->getStaticObjectField(cls, "OTHER", "Lorg/orekit/files/sp3/SP3OrbitType;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SP3OrbitType SP3OrbitType::parseType(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return SP3OrbitType(env->callStaticObjectMethod(cls, mids$[mid_parseType_8ce6db4cf2e6cad2], a0.this$));
        }

        SP3OrbitType SP3OrbitType::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return SP3OrbitType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_8ce6db4cf2e6cad2], a0.this$));
        }

        JArray< SP3OrbitType > SP3OrbitType::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< SP3OrbitType >(env->callStaticObjectMethod(cls, mids$[mid_values_4fa22ef2b4f22b54]));
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
        static PyObject *t_SP3OrbitType_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SP3OrbitType_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SP3OrbitType_of_(t_SP3OrbitType *self, PyObject *args);
        static PyObject *t_SP3OrbitType_parseType(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SP3OrbitType_valueOf(PyTypeObject *type, PyObject *args);
        static PyObject *t_SP3OrbitType_values(PyTypeObject *type);
        static PyObject *t_SP3OrbitType_get__parameters_(t_SP3OrbitType *self, void *data);
        static PyGetSetDef t_SP3OrbitType__fields_[] = {
          DECLARE_GET_FIELD(t_SP3OrbitType, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SP3OrbitType__methods_[] = {
          DECLARE_METHOD(t_SP3OrbitType, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SP3OrbitType, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SP3OrbitType, of_, METH_VARARGS),
          DECLARE_METHOD(t_SP3OrbitType, parseType, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SP3OrbitType, valueOf, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_SP3OrbitType, values, METH_NOARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SP3OrbitType)[] = {
          { Py_tp_methods, t_SP3OrbitType__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_SP3OrbitType__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SP3OrbitType)[] = {
          &PY_TYPE_DEF(::java::lang::Enum),
          NULL
        };

        DEFINE_TYPE(SP3OrbitType, t_SP3OrbitType, SP3OrbitType);
        PyObject *t_SP3OrbitType::wrap_Object(const SP3OrbitType& object, PyTypeObject *p0)
        {
          PyObject *obj = t_SP3OrbitType::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_SP3OrbitType *self = (t_SP3OrbitType *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_SP3OrbitType::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_SP3OrbitType::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_SP3OrbitType *self = (t_SP3OrbitType *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_SP3OrbitType::install(PyObject *module)
        {
          installType(&PY_TYPE(SP3OrbitType), &PY_TYPE_DEF(SP3OrbitType), module, "SP3OrbitType", 0);
        }

        void t_SP3OrbitType::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3OrbitType), "class_", make_descriptor(SP3OrbitType::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3OrbitType), "wrapfn_", make_descriptor(t_SP3OrbitType::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3OrbitType), "boxfn_", make_descriptor(boxObject));
          env->getClass(SP3OrbitType::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3OrbitType), "BCT", make_descriptor(t_SP3OrbitType::wrap_Object(*SP3OrbitType::BCT)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3OrbitType), "EXT", make_descriptor(t_SP3OrbitType::wrap_Object(*SP3OrbitType::EXT)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3OrbitType), "FIT", make_descriptor(t_SP3OrbitType::wrap_Object(*SP3OrbitType::FIT)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3OrbitType), "HLM", make_descriptor(t_SP3OrbitType::wrap_Object(*SP3OrbitType::HLM)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3OrbitType), "OTHER", make_descriptor(t_SP3OrbitType::wrap_Object(*SP3OrbitType::OTHER)));
        }

        static PyObject *t_SP3OrbitType_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SP3OrbitType::initializeClass, 1)))
            return NULL;
          return t_SP3OrbitType::wrap_Object(SP3OrbitType(((t_SP3OrbitType *) arg)->object.this$));
        }
        static PyObject *t_SP3OrbitType_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SP3OrbitType::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_SP3OrbitType_of_(t_SP3OrbitType *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_SP3OrbitType_parseType(PyTypeObject *type, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);
          SP3OrbitType result((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(result = ::org::orekit::files::sp3::SP3OrbitType::parseType(a0));
            return t_SP3OrbitType::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "parseType", arg);
          return NULL;
        }

        static PyObject *t_SP3OrbitType_valueOf(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          SP3OrbitType result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::org::orekit::files::sp3::SP3OrbitType::valueOf(a0));
            return t_SP3OrbitType::wrap_Object(result);
          }

          return callSuper(type, "valueOf", args, 2);
        }

        static PyObject *t_SP3OrbitType_values(PyTypeObject *type)
        {
          JArray< SP3OrbitType > result((jobject) NULL);
          OBJ_CALL(result = ::org::orekit::files::sp3::SP3OrbitType::values());
          return JArray<jobject>(result.this$).wrap(t_SP3OrbitType::wrap_jobject);
        }
        static PyObject *t_SP3OrbitType_get__parameters_(t_SP3OrbitType *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
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
              mids$[mid_dc_b74f83833fdad017] = env->getMethodID(cls, "dc", "()D");
              mids$[mid_nc_b74f83833fdad017] = env->getMethodID(cls, "nc", "()D");
              mids$[mid_sc_b74f83833fdad017] = env->getMethodID(cls, "sc", "()D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jdouble CopolarC::dc() const
          {
            return env->callDoubleMethod(this$, mids$[mid_dc_b74f83833fdad017]);
          }

          jdouble CopolarC::nc() const
          {
            return env->callDoubleMethod(this$, mids$[mid_nc_b74f83833fdad017]);
          }

          jdouble CopolarC::sc() const
          {
            return env->callDoubleMethod(this$, mids$[mid_sc_b74f83833fdad017]);
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
#include "org/orekit/propagation/conversion/EulerFieldIntegratorBuilder.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/orbits/OrbitType.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/AbstractFieldIntegrator.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *EulerFieldIntegratorBuilder::class$ = NULL;
        jmethodID *EulerFieldIntegratorBuilder::mids$ = NULL;
        bool EulerFieldIntegratorBuilder::live$ = false;

        jclass EulerFieldIntegratorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/EulerFieldIntegratorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_8ba9fe7a847cecad] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_init$_f2b4bfa0af1007e8] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_buildIntegrator_ce58c6ef4cfb23c4] = env->getMethodID(cls, "buildIntegrator", "(Lorg/hipparchus/Field;Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/OrbitType;)Lorg/hipparchus/ode/AbstractFieldIntegrator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        EulerFieldIntegratorBuilder::EulerFieldIntegratorBuilder(jdouble a0) : ::org::orekit::propagation::conversion::AbstractFixedStepFieldIntegratorBuilder(env->newObject(initializeClass, &mids$, mid_init$_8ba9fe7a847cecad, a0)) {}

        EulerFieldIntegratorBuilder::EulerFieldIntegratorBuilder(const ::org::hipparchus::CalculusFieldElement & a0) : ::org::orekit::propagation::conversion::AbstractFixedStepFieldIntegratorBuilder(env->newObject(initializeClass, &mids$, mid_init$_f2b4bfa0af1007e8, a0.this$)) {}

        ::org::hipparchus::ode::AbstractFieldIntegrator EulerFieldIntegratorBuilder::buildIntegrator(const ::org::hipparchus::Field & a0, const ::org::orekit::orbits::Orbit & a1, const ::org::orekit::orbits::OrbitType & a2) const
        {
          return ::org::hipparchus::ode::AbstractFieldIntegrator(env->callObjectMethod(this$, mids$[mid_buildIntegrator_ce58c6ef4cfb23c4], a0.this$, a1.this$, a2.this$));
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
        static PyObject *t_EulerFieldIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EulerFieldIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EulerFieldIntegratorBuilder_of_(t_EulerFieldIntegratorBuilder *self, PyObject *args);
        static int t_EulerFieldIntegratorBuilder_init_(t_EulerFieldIntegratorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_EulerFieldIntegratorBuilder_buildIntegrator(t_EulerFieldIntegratorBuilder *self, PyObject *args);
        static PyObject *t_EulerFieldIntegratorBuilder_get__parameters_(t_EulerFieldIntegratorBuilder *self, void *data);
        static PyGetSetDef t_EulerFieldIntegratorBuilder__fields_[] = {
          DECLARE_GET_FIELD(t_EulerFieldIntegratorBuilder, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EulerFieldIntegratorBuilder__methods_[] = {
          DECLARE_METHOD(t_EulerFieldIntegratorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EulerFieldIntegratorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EulerFieldIntegratorBuilder, of_, METH_VARARGS),
          DECLARE_METHOD(t_EulerFieldIntegratorBuilder, buildIntegrator, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EulerFieldIntegratorBuilder)[] = {
          { Py_tp_methods, t_EulerFieldIntegratorBuilder__methods_ },
          { Py_tp_init, (void *) t_EulerFieldIntegratorBuilder_init_ },
          { Py_tp_getset, t_EulerFieldIntegratorBuilder__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EulerFieldIntegratorBuilder)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::conversion::AbstractFixedStepFieldIntegratorBuilder),
          NULL
        };

        DEFINE_TYPE(EulerFieldIntegratorBuilder, t_EulerFieldIntegratorBuilder, EulerFieldIntegratorBuilder);
        PyObject *t_EulerFieldIntegratorBuilder::wrap_Object(const EulerFieldIntegratorBuilder& object, PyTypeObject *p0)
        {
          PyObject *obj = t_EulerFieldIntegratorBuilder::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EulerFieldIntegratorBuilder *self = (t_EulerFieldIntegratorBuilder *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_EulerFieldIntegratorBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_EulerFieldIntegratorBuilder::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EulerFieldIntegratorBuilder *self = (t_EulerFieldIntegratorBuilder *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_EulerFieldIntegratorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(EulerFieldIntegratorBuilder), &PY_TYPE_DEF(EulerFieldIntegratorBuilder), module, "EulerFieldIntegratorBuilder", 0);
        }

        void t_EulerFieldIntegratorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EulerFieldIntegratorBuilder), "class_", make_descriptor(EulerFieldIntegratorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EulerFieldIntegratorBuilder), "wrapfn_", make_descriptor(t_EulerFieldIntegratorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EulerFieldIntegratorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EulerFieldIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EulerFieldIntegratorBuilder::initializeClass, 1)))
            return NULL;
          return t_EulerFieldIntegratorBuilder::wrap_Object(EulerFieldIntegratorBuilder(((t_EulerFieldIntegratorBuilder *) arg)->object.this$));
        }
        static PyObject *t_EulerFieldIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EulerFieldIntegratorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_EulerFieldIntegratorBuilder_of_(t_EulerFieldIntegratorBuilder *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_EulerFieldIntegratorBuilder_init_(t_EulerFieldIntegratorBuilder *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              jdouble a0;
              EulerFieldIntegratorBuilder object((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                INT_CALL(object = EulerFieldIntegratorBuilder(a0));
                self->object = object;
                break;
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              EulerFieldIntegratorBuilder object((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                INT_CALL(object = EulerFieldIntegratorBuilder(a0));
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

        static PyObject *t_EulerFieldIntegratorBuilder_buildIntegrator(t_EulerFieldIntegratorBuilder *self, PyObject *args)
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

          return callSuper(PY_TYPE(EulerFieldIntegratorBuilder), (PyObject *) self, "buildIntegrator", args, 2);
        }
        static PyObject *t_EulerFieldIntegratorBuilder_get__parameters_(t_EulerFieldIntegratorBuilder *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/general/PythonAttitudeEphemerisFileParser.h"
#include "org/orekit/data/DataSource.h"
#include "java/lang/Throwable.h"
#include "org/orekit/files/general/AttitudeEphemerisFileParser.h"
#include "java/io/IOException.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "java/io/BufferedReader.h"
#include "org/orekit/files/general/AttitudeEphemerisFile.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace general {

        ::java::lang::Class *PythonAttitudeEphemerisFileParser::class$ = NULL;
        jmethodID *PythonAttitudeEphemerisFileParser::mids$ = NULL;
        bool PythonAttitudeEphemerisFileParser::live$ = false;

        jclass PythonAttitudeEphemerisFileParser::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/general/PythonAttitudeEphemerisFileParser");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_parse_61d485826e6f03b7] = env->getMethodID(cls, "parse", "(Lorg/orekit/data/DataSource;)Lorg/orekit/files/general/AttitudeEphemerisFile;");
            mids$[mid_parse_BS_db082c9a970065cf] = env->getMethodID(cls, "parse_BS", "(Ljava/io/BufferedReader;Ljava/lang/String;)Lorg/orekit/files/general/AttitudeEphemerisFile;");
            mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonAttitudeEphemerisFileParser::PythonAttitudeEphemerisFileParser() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        void PythonAttitudeEphemerisFileParser::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
        }

        jlong PythonAttitudeEphemerisFileParser::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
        }

        void PythonAttitudeEphemerisFileParser::pythonExtension(jlong a0) const
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
        static PyObject *t_PythonAttitudeEphemerisFileParser_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonAttitudeEphemerisFileParser_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonAttitudeEphemerisFileParser_init_(t_PythonAttitudeEphemerisFileParser *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonAttitudeEphemerisFileParser_finalize(t_PythonAttitudeEphemerisFileParser *self);
        static PyObject *t_PythonAttitudeEphemerisFileParser_pythonExtension(t_PythonAttitudeEphemerisFileParser *self, PyObject *args);
        static jobject JNICALL t_PythonAttitudeEphemerisFileParser_parse0(JNIEnv *jenv, jobject jobj, jobject a0);
        static jobject JNICALL t_PythonAttitudeEphemerisFileParser_parse_BS1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
        static void JNICALL t_PythonAttitudeEphemerisFileParser_pythonDecRef2(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonAttitudeEphemerisFileParser_get__self(t_PythonAttitudeEphemerisFileParser *self, void *data);
        static PyGetSetDef t_PythonAttitudeEphemerisFileParser__fields_[] = {
          DECLARE_GET_FIELD(t_PythonAttitudeEphemerisFileParser, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonAttitudeEphemerisFileParser__methods_[] = {
          DECLARE_METHOD(t_PythonAttitudeEphemerisFileParser, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAttitudeEphemerisFileParser, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAttitudeEphemerisFileParser, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonAttitudeEphemerisFileParser, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonAttitudeEphemerisFileParser)[] = {
          { Py_tp_methods, t_PythonAttitudeEphemerisFileParser__methods_ },
          { Py_tp_init, (void *) t_PythonAttitudeEphemerisFileParser_init_ },
          { Py_tp_getset, t_PythonAttitudeEphemerisFileParser__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonAttitudeEphemerisFileParser)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonAttitudeEphemerisFileParser, t_PythonAttitudeEphemerisFileParser, PythonAttitudeEphemerisFileParser);

        void t_PythonAttitudeEphemerisFileParser::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonAttitudeEphemerisFileParser), &PY_TYPE_DEF(PythonAttitudeEphemerisFileParser), module, "PythonAttitudeEphemerisFileParser", 1);
        }

        void t_PythonAttitudeEphemerisFileParser::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAttitudeEphemerisFileParser), "class_", make_descriptor(PythonAttitudeEphemerisFileParser::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAttitudeEphemerisFileParser), "wrapfn_", make_descriptor(t_PythonAttitudeEphemerisFileParser::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAttitudeEphemerisFileParser), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonAttitudeEphemerisFileParser::initializeClass);
          JNINativeMethod methods[] = {
            { "parse", "(Lorg/orekit/data/DataSource;)Lorg/orekit/files/general/AttitudeEphemerisFile;", (void *) t_PythonAttitudeEphemerisFileParser_parse0 },
            { "parse_BS", "(Ljava/io/BufferedReader;Ljava/lang/String;)Lorg/orekit/files/general/AttitudeEphemerisFile;", (void *) t_PythonAttitudeEphemerisFileParser_parse_BS1 },
            { "pythonDecRef", "()V", (void *) t_PythonAttitudeEphemerisFileParser_pythonDecRef2 },
          };
          env->registerNatives(cls, methods, 3);
        }

        static PyObject *t_PythonAttitudeEphemerisFileParser_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonAttitudeEphemerisFileParser::initializeClass, 1)))
            return NULL;
          return t_PythonAttitudeEphemerisFileParser::wrap_Object(PythonAttitudeEphemerisFileParser(((t_PythonAttitudeEphemerisFileParser *) arg)->object.this$));
        }
        static PyObject *t_PythonAttitudeEphemerisFileParser_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonAttitudeEphemerisFileParser::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonAttitudeEphemerisFileParser_init_(t_PythonAttitudeEphemerisFileParser *self, PyObject *args, PyObject *kwds)
        {
          PythonAttitudeEphemerisFileParser object((jobject) NULL);

          INT_CALL(object = PythonAttitudeEphemerisFileParser());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonAttitudeEphemerisFileParser_finalize(t_PythonAttitudeEphemerisFileParser *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonAttitudeEphemerisFileParser_pythonExtension(t_PythonAttitudeEphemerisFileParser *self, PyObject *args)
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

        static jobject JNICALL t_PythonAttitudeEphemerisFileParser_parse0(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAttitudeEphemerisFileParser::mids$[PythonAttitudeEphemerisFileParser::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::files::general::AttitudeEphemerisFile value((jobject) NULL);
          PyObject *o0 = ::org::orekit::data::t_DataSource::wrap_Object(::org::orekit::data::DataSource(a0));
          PyObject *result = PyObject_CallMethod(obj, "parse", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::files::general::AttitudeEphemerisFile::initializeClass, &value))
          {
            throwTypeError("parse", result);
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

        static jobject JNICALL t_PythonAttitudeEphemerisFileParser_parse_BS1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAttitudeEphemerisFileParser::mids$[PythonAttitudeEphemerisFileParser::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::files::general::AttitudeEphemerisFile value((jobject) NULL);
          PyObject *o0 = ::java::io::t_BufferedReader::wrap_Object(::java::io::BufferedReader(a0));
          PyObject *o1 = env->fromJString((jstring) a1, 0);
          PyObject *result = PyObject_CallMethod(obj, "parse_BS", "OO", o0, o1);
          Py_DECREF(o0);
          Py_DECREF(o1);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::files::general::AttitudeEphemerisFile::initializeClass, &value))
          {
            throwTypeError("parse_BS", result);
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

        static void JNICALL t_PythonAttitudeEphemerisFileParser_pythonDecRef2(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAttitudeEphemerisFileParser::mids$[PythonAttitudeEphemerisFileParser::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonAttitudeEphemerisFileParser::mids$[PythonAttitudeEphemerisFileParser::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonAttitudeEphemerisFileParser_get__self(t_PythonAttitudeEphemerisFileParser *self, void *data)
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
#include "org/orekit/files/ccsds/utils/lexical/PythonXmlTokenBuilder.h"
#include "java/util/List.h"
#include "java/util/Map.h"
#include "org/orekit/files/ccsds/utils/lexical/XmlTokenBuilder.h"
#include "java/lang/Throwable.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *PythonXmlTokenBuilder::class$ = NULL;
            jmethodID *PythonXmlTokenBuilder::mids$ = NULL;
            bool PythonXmlTokenBuilder::live$ = false;

            jclass PythonXmlTokenBuilder::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/PythonXmlTokenBuilder");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_buildTokens_2c588550a962bd9d] = env->getMethodID(cls, "buildTokens", "(ZZLjava/lang/String;Ljava/lang/String;Ljava/util/Map;ILjava/lang/String;)Ljava/util/List;");
                mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
                mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
                mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
                mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            PythonXmlTokenBuilder::PythonXmlTokenBuilder() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

            void PythonXmlTokenBuilder::finalize() const
            {
              env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
            }

            jlong PythonXmlTokenBuilder::pythonExtension() const
            {
              return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
            }

            void PythonXmlTokenBuilder::pythonExtension(jlong a0) const
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
        namespace utils {
          namespace lexical {
            static PyObject *t_PythonXmlTokenBuilder_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PythonXmlTokenBuilder_instance_(PyTypeObject *type, PyObject *arg);
            static int t_PythonXmlTokenBuilder_init_(t_PythonXmlTokenBuilder *self, PyObject *args, PyObject *kwds);
            static PyObject *t_PythonXmlTokenBuilder_finalize(t_PythonXmlTokenBuilder *self);
            static PyObject *t_PythonXmlTokenBuilder_pythonExtension(t_PythonXmlTokenBuilder *self, PyObject *args);
            static jobject JNICALL t_PythonXmlTokenBuilder_buildTokens0(JNIEnv *jenv, jobject jobj, jboolean a0, jboolean a1, jobject a2, jobject a3, jobject a4, jint a5, jobject a6);
            static void JNICALL t_PythonXmlTokenBuilder_pythonDecRef1(JNIEnv *jenv, jobject jobj);
            static PyObject *t_PythonXmlTokenBuilder_get__self(t_PythonXmlTokenBuilder *self, void *data);
            static PyGetSetDef t_PythonXmlTokenBuilder__fields_[] = {
              DECLARE_GET_FIELD(t_PythonXmlTokenBuilder, self),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_PythonXmlTokenBuilder__methods_[] = {
              DECLARE_METHOD(t_PythonXmlTokenBuilder, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonXmlTokenBuilder, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonXmlTokenBuilder, finalize, METH_NOARGS),
              DECLARE_METHOD(t_PythonXmlTokenBuilder, pythonExtension, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(PythonXmlTokenBuilder)[] = {
              { Py_tp_methods, t_PythonXmlTokenBuilder__methods_ },
              { Py_tp_init, (void *) t_PythonXmlTokenBuilder_init_ },
              { Py_tp_getset, t_PythonXmlTokenBuilder__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(PythonXmlTokenBuilder)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(PythonXmlTokenBuilder, t_PythonXmlTokenBuilder, PythonXmlTokenBuilder);

            void t_PythonXmlTokenBuilder::install(PyObject *module)
            {
              installType(&PY_TYPE(PythonXmlTokenBuilder), &PY_TYPE_DEF(PythonXmlTokenBuilder), module, "PythonXmlTokenBuilder", 1);
            }

            void t_PythonXmlTokenBuilder::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonXmlTokenBuilder), "class_", make_descriptor(PythonXmlTokenBuilder::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonXmlTokenBuilder), "wrapfn_", make_descriptor(t_PythonXmlTokenBuilder::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonXmlTokenBuilder), "boxfn_", make_descriptor(boxObject));
              jclass cls = env->getClass(PythonXmlTokenBuilder::initializeClass);
              JNINativeMethod methods[] = {
                { "buildTokens", "(ZZLjava/lang/String;Ljava/lang/String;Ljava/util/Map;ILjava/lang/String;)Ljava/util/List;", (void *) t_PythonXmlTokenBuilder_buildTokens0 },
                { "pythonDecRef", "()V", (void *) t_PythonXmlTokenBuilder_pythonDecRef1 },
              };
              env->registerNatives(cls, methods, 2);
            }

            static PyObject *t_PythonXmlTokenBuilder_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, PythonXmlTokenBuilder::initializeClass, 1)))
                return NULL;
              return t_PythonXmlTokenBuilder::wrap_Object(PythonXmlTokenBuilder(((t_PythonXmlTokenBuilder *) arg)->object.this$));
            }
            static PyObject *t_PythonXmlTokenBuilder_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, PythonXmlTokenBuilder::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_PythonXmlTokenBuilder_init_(t_PythonXmlTokenBuilder *self, PyObject *args, PyObject *kwds)
            {
              PythonXmlTokenBuilder object((jobject) NULL);

              INT_CALL(object = PythonXmlTokenBuilder());
              self->object = object;

              Py_INCREF((PyObject *) self);
              self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

              return 0;
            }

            static PyObject *t_PythonXmlTokenBuilder_finalize(t_PythonXmlTokenBuilder *self)
            {
              OBJ_CALL(self->object.finalize());
              Py_RETURN_NONE;
            }

            static PyObject *t_PythonXmlTokenBuilder_pythonExtension(t_PythonXmlTokenBuilder *self, PyObject *args)
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

            static jobject JNICALL t_PythonXmlTokenBuilder_buildTokens0(JNIEnv *jenv, jobject jobj, jboolean a0, jboolean a1, jobject a2, jobject a3, jobject a4, jint a5, jobject a6)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonXmlTokenBuilder::mids$[PythonXmlTokenBuilder::mid_pythonExtension_6c0ce7e438e5ded4]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              ::java::util::List value((jobject) NULL);
              PyObject *o0 = (a0 ? Py_True : Py_False);
              PyObject *o1 = (a1 ? Py_True : Py_False);
              PyObject *o2 = env->fromJString((jstring) a2, 0);
              PyObject *o3 = env->fromJString((jstring) a3, 0);
              PyObject *o4 = ::java::util::t_Map::wrap_Object(::java::util::Map(a4));
              PyObject *o6 = env->fromJString((jstring) a6, 0);
              PyObject *result = PyObject_CallMethod(obj, "buildTokens", "OOOOOiO", o0, o1, o2, o3, o4, (int) a5, o6);
              Py_DECREF(o2);
              Py_DECREF(o3);
              Py_DECREF(o4);
              Py_DECREF(o6);
              if (!result)
                throwPythonError();
              else if (parseArg(result, "k", ::java::util::List::initializeClass, &value))
              {
                throwTypeError("buildTokens", result);
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

            static void JNICALL t_PythonXmlTokenBuilder_pythonDecRef1(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonXmlTokenBuilder::mids$[PythonXmlTokenBuilder::mid_pythonExtension_6c0ce7e438e5ded4]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

              if (obj != NULL)
              {
                jenv->CallVoidMethod(jobj, PythonXmlTokenBuilder::mids$[PythonXmlTokenBuilder::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
                env->finalizeObject(jenv, obj);
              }
            }

            static PyObject *t_PythonXmlTokenBuilder_get__self(t_PythonXmlTokenBuilder *self, void *data)
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
#include "org/orekit/propagation/events/PositionAngleDetector.h"
#include "org/orekit/errors/OrekitIllegalArgumentException.h"
#include "org/orekit/propagation/events/PositionAngleDetector.h"
#include "org/orekit/orbits/OrbitType.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *PositionAngleDetector::class$ = NULL;
        jmethodID *PositionAngleDetector::mids$ = NULL;
        bool PositionAngleDetector::live$ = false;

        jclass PositionAngleDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/PositionAngleDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_f96679fdbae2950c] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/OrbitType;Lorg/orekit/orbits/PositionAngleType;D)V");
            mids$[mid_init$_039d5d9b85a5394c] = env->getMethodID(cls, "<init>", "(DDLorg/orekit/orbits/OrbitType;Lorg/orekit/orbits/PositionAngleType;D)V");
            mids$[mid_g_a17ea857ce74d258] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_getAngle_b74f83833fdad017] = env->getMethodID(cls, "getAngle", "()D");
            mids$[mid_getOrbitType_c7d4737d7afca612] = env->getMethodID(cls, "getOrbitType", "()Lorg/orekit/orbits/OrbitType;");
            mids$[mid_getPositionAngleType_c25055891f180348] = env->getMethodID(cls, "getPositionAngleType", "()Lorg/orekit/orbits/PositionAngleType;");
            mids$[mid_init_2d7f9a496c7e9781] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_create_d5f4e7b1c95d3001] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/AdaptableInterval;DILorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/PositionAngleDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PositionAngleDetector::PositionAngleDetector(const ::org::orekit::orbits::OrbitType & a0, const ::org::orekit::orbits::PositionAngleType & a1, jdouble a2) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_f96679fdbae2950c, a0.this$, a1.this$, a2)) {}

        PositionAngleDetector::PositionAngleDetector(jdouble a0, jdouble a1, const ::org::orekit::orbits::OrbitType & a2, const ::org::orekit::orbits::PositionAngleType & a3, jdouble a4) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_039d5d9b85a5394c, a0, a1, a2.this$, a3.this$, a4)) {}

        jdouble PositionAngleDetector::g(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_a17ea857ce74d258], a0.this$);
        }

        jdouble PositionAngleDetector::getAngle() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getAngle_b74f83833fdad017]);
        }

        ::org::orekit::orbits::OrbitType PositionAngleDetector::getOrbitType() const
        {
          return ::org::orekit::orbits::OrbitType(env->callObjectMethod(this$, mids$[mid_getOrbitType_c7d4737d7afca612]));
        }

        ::org::orekit::orbits::PositionAngleType PositionAngleDetector::getPositionAngleType() const
        {
          return ::org::orekit::orbits::PositionAngleType(env->callObjectMethod(this$, mids$[mid_getPositionAngleType_c25055891f180348]));
        }

        void PositionAngleDetector::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_2d7f9a496c7e9781], a0.this$, a1.this$);
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
        static PyObject *t_PositionAngleDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PositionAngleDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PositionAngleDetector_of_(t_PositionAngleDetector *self, PyObject *args);
        static int t_PositionAngleDetector_init_(t_PositionAngleDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PositionAngleDetector_g(t_PositionAngleDetector *self, PyObject *args);
        static PyObject *t_PositionAngleDetector_getAngle(t_PositionAngleDetector *self);
        static PyObject *t_PositionAngleDetector_getOrbitType(t_PositionAngleDetector *self);
        static PyObject *t_PositionAngleDetector_getPositionAngleType(t_PositionAngleDetector *self);
        static PyObject *t_PositionAngleDetector_init(t_PositionAngleDetector *self, PyObject *args);
        static PyObject *t_PositionAngleDetector_get__angle(t_PositionAngleDetector *self, void *data);
        static PyObject *t_PositionAngleDetector_get__orbitType(t_PositionAngleDetector *self, void *data);
        static PyObject *t_PositionAngleDetector_get__positionAngleType(t_PositionAngleDetector *self, void *data);
        static PyObject *t_PositionAngleDetector_get__parameters_(t_PositionAngleDetector *self, void *data);
        static PyGetSetDef t_PositionAngleDetector__fields_[] = {
          DECLARE_GET_FIELD(t_PositionAngleDetector, angle),
          DECLARE_GET_FIELD(t_PositionAngleDetector, orbitType),
          DECLARE_GET_FIELD(t_PositionAngleDetector, positionAngleType),
          DECLARE_GET_FIELD(t_PositionAngleDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PositionAngleDetector__methods_[] = {
          DECLARE_METHOD(t_PositionAngleDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PositionAngleDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PositionAngleDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_PositionAngleDetector, g, METH_VARARGS),
          DECLARE_METHOD(t_PositionAngleDetector, getAngle, METH_NOARGS),
          DECLARE_METHOD(t_PositionAngleDetector, getOrbitType, METH_NOARGS),
          DECLARE_METHOD(t_PositionAngleDetector, getPositionAngleType, METH_NOARGS),
          DECLARE_METHOD(t_PositionAngleDetector, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PositionAngleDetector)[] = {
          { Py_tp_methods, t_PositionAngleDetector__methods_ },
          { Py_tp_init, (void *) t_PositionAngleDetector_init_ },
          { Py_tp_getset, t_PositionAngleDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PositionAngleDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::AbstractDetector),
          NULL
        };

        DEFINE_TYPE(PositionAngleDetector, t_PositionAngleDetector, PositionAngleDetector);
        PyObject *t_PositionAngleDetector::wrap_Object(const PositionAngleDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PositionAngleDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PositionAngleDetector *self = (t_PositionAngleDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_PositionAngleDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PositionAngleDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PositionAngleDetector *self = (t_PositionAngleDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_PositionAngleDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(PositionAngleDetector), &PY_TYPE_DEF(PositionAngleDetector), module, "PositionAngleDetector", 0);
        }

        void t_PositionAngleDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PositionAngleDetector), "class_", make_descriptor(PositionAngleDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PositionAngleDetector), "wrapfn_", make_descriptor(t_PositionAngleDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PositionAngleDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_PositionAngleDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PositionAngleDetector::initializeClass, 1)))
            return NULL;
          return t_PositionAngleDetector::wrap_Object(PositionAngleDetector(((t_PositionAngleDetector *) arg)->object.this$));
        }
        static PyObject *t_PositionAngleDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PositionAngleDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_PositionAngleDetector_of_(t_PositionAngleDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_PositionAngleDetector_init_(t_PositionAngleDetector *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              ::org::orekit::orbits::OrbitType a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::orbits::PositionAngleType a1((jobject) NULL);
              PyTypeObject **p1;
              jdouble a2;
              PositionAngleDetector object((jobject) NULL);

              if (!parseArgs(args, "KKD", ::org::orekit::orbits::OrbitType::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_OrbitType::parameters_, &a1, &p1, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a2))
              {
                INT_CALL(object = PositionAngleDetector(a0, a1, a2));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(PositionAngleDetector);
                break;
              }
            }
            goto err;
           case 5:
            {
              jdouble a0;
              jdouble a1;
              ::org::orekit::orbits::OrbitType a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::orbits::PositionAngleType a3((jobject) NULL);
              PyTypeObject **p3;
              jdouble a4;
              PositionAngleDetector object((jobject) NULL);

              if (!parseArgs(args, "DDKKD", ::org::orekit::orbits::OrbitType::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::orbits::t_OrbitType::parameters_, &a3, &p3, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a4))
              {
                INT_CALL(object = PositionAngleDetector(a0, a1, a2, a3, a4));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(PositionAngleDetector);
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

        static PyObject *t_PositionAngleDetector_g(t_PositionAngleDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(PositionAngleDetector), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_PositionAngleDetector_getAngle(t_PositionAngleDetector *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getAngle());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_PositionAngleDetector_getOrbitType(t_PositionAngleDetector *self)
        {
          ::org::orekit::orbits::OrbitType result((jobject) NULL);
          OBJ_CALL(result = self->object.getOrbitType());
          return ::org::orekit::orbits::t_OrbitType::wrap_Object(result);
        }

        static PyObject *t_PositionAngleDetector_getPositionAngleType(t_PositionAngleDetector *self)
        {
          ::org::orekit::orbits::PositionAngleType result((jobject) NULL);
          OBJ_CALL(result = self->object.getPositionAngleType());
          return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(result);
        }

        static PyObject *t_PositionAngleDetector_init(t_PositionAngleDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
          {
            OBJ_CALL(self->object.init(a0, a1));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(PositionAngleDetector), (PyObject *) self, "init", args, 2);
        }
        static PyObject *t_PositionAngleDetector_get__parameters_(t_PositionAngleDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_PositionAngleDetector_get__angle(t_PositionAngleDetector *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getAngle());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_PositionAngleDetector_get__orbitType(t_PositionAngleDetector *self, void *data)
        {
          ::org::orekit::orbits::OrbitType value((jobject) NULL);
          OBJ_CALL(value = self->object.getOrbitType());
          return ::org::orekit::orbits::t_OrbitType::wrap_Object(value);
        }

        static PyObject *t_PositionAngleDetector_get__positionAngleType(t_PositionAngleDetector *self, void *data)
        {
          ::org::orekit::orbits::PositionAngleType value((jobject) NULL);
          OBJ_CALL(value = self->object.getPositionAngleType());
          return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/util/ResizableDoubleArray$ExpansionMode.h"
#include "org/hipparchus/util/ResizableDoubleArray$ExpansionMode.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *ResizableDoubleArray$ExpansionMode::class$ = NULL;
      jmethodID *ResizableDoubleArray$ExpansionMode::mids$ = NULL;
      bool ResizableDoubleArray$ExpansionMode::live$ = false;
      ResizableDoubleArray$ExpansionMode *ResizableDoubleArray$ExpansionMode::ADDITIVE = NULL;
      ResizableDoubleArray$ExpansionMode *ResizableDoubleArray$ExpansionMode::MULTIPLICATIVE = NULL;

      jclass ResizableDoubleArray$ExpansionMode::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/ResizableDoubleArray$ExpansionMode");

          mids$ = new jmethodID[max_mid];
          mids$[mid_valueOf_4fa45af8c84d4bc5] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/hipparchus/util/ResizableDoubleArray$ExpansionMode;");
          mids$[mid_values_d78002359672310a] = env->getStaticMethodID(cls, "values", "()[Lorg/hipparchus/util/ResizableDoubleArray$ExpansionMode;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          ADDITIVE = new ResizableDoubleArray$ExpansionMode(env->getStaticObjectField(cls, "ADDITIVE", "Lorg/hipparchus/util/ResizableDoubleArray$ExpansionMode;"));
          MULTIPLICATIVE = new ResizableDoubleArray$ExpansionMode(env->getStaticObjectField(cls, "MULTIPLICATIVE", "Lorg/hipparchus/util/ResizableDoubleArray$ExpansionMode;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ResizableDoubleArray$ExpansionMode ResizableDoubleArray$ExpansionMode::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ResizableDoubleArray$ExpansionMode(env->callStaticObjectMethod(cls, mids$[mid_valueOf_4fa45af8c84d4bc5], a0.this$));
      }

      JArray< ResizableDoubleArray$ExpansionMode > ResizableDoubleArray$ExpansionMode::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< ResizableDoubleArray$ExpansionMode >(env->callStaticObjectMethod(cls, mids$[mid_values_d78002359672310a]));
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
      static PyObject *t_ResizableDoubleArray$ExpansionMode_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ResizableDoubleArray$ExpansionMode_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ResizableDoubleArray$ExpansionMode_of_(t_ResizableDoubleArray$ExpansionMode *self, PyObject *args);
      static PyObject *t_ResizableDoubleArray$ExpansionMode_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_ResizableDoubleArray$ExpansionMode_values(PyTypeObject *type);
      static PyObject *t_ResizableDoubleArray$ExpansionMode_get__parameters_(t_ResizableDoubleArray$ExpansionMode *self, void *data);
      static PyGetSetDef t_ResizableDoubleArray$ExpansionMode__fields_[] = {
        DECLARE_GET_FIELD(t_ResizableDoubleArray$ExpansionMode, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ResizableDoubleArray$ExpansionMode__methods_[] = {
        DECLARE_METHOD(t_ResizableDoubleArray$ExpansionMode, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ResizableDoubleArray$ExpansionMode, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ResizableDoubleArray$ExpansionMode, of_, METH_VARARGS),
        DECLARE_METHOD(t_ResizableDoubleArray$ExpansionMode, valueOf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_ResizableDoubleArray$ExpansionMode, values, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ResizableDoubleArray$ExpansionMode)[] = {
        { Py_tp_methods, t_ResizableDoubleArray$ExpansionMode__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_ResizableDoubleArray$ExpansionMode__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ResizableDoubleArray$ExpansionMode)[] = {
        &PY_TYPE_DEF(::java::lang::Enum),
        NULL
      };

      DEFINE_TYPE(ResizableDoubleArray$ExpansionMode, t_ResizableDoubleArray$ExpansionMode, ResizableDoubleArray$ExpansionMode);
      PyObject *t_ResizableDoubleArray$ExpansionMode::wrap_Object(const ResizableDoubleArray$ExpansionMode& object, PyTypeObject *p0)
      {
        PyObject *obj = t_ResizableDoubleArray$ExpansionMode::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_ResizableDoubleArray$ExpansionMode *self = (t_ResizableDoubleArray$ExpansionMode *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_ResizableDoubleArray$ExpansionMode::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_ResizableDoubleArray$ExpansionMode::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_ResizableDoubleArray$ExpansionMode *self = (t_ResizableDoubleArray$ExpansionMode *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_ResizableDoubleArray$ExpansionMode::install(PyObject *module)
      {
        installType(&PY_TYPE(ResizableDoubleArray$ExpansionMode), &PY_TYPE_DEF(ResizableDoubleArray$ExpansionMode), module, "ResizableDoubleArray$ExpansionMode", 0);
      }

      void t_ResizableDoubleArray$ExpansionMode::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ResizableDoubleArray$ExpansionMode), "class_", make_descriptor(ResizableDoubleArray$ExpansionMode::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ResizableDoubleArray$ExpansionMode), "wrapfn_", make_descriptor(t_ResizableDoubleArray$ExpansionMode::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ResizableDoubleArray$ExpansionMode), "boxfn_", make_descriptor(boxObject));
        env->getClass(ResizableDoubleArray$ExpansionMode::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(ResizableDoubleArray$ExpansionMode), "ADDITIVE", make_descriptor(t_ResizableDoubleArray$ExpansionMode::wrap_Object(*ResizableDoubleArray$ExpansionMode::ADDITIVE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ResizableDoubleArray$ExpansionMode), "MULTIPLICATIVE", make_descriptor(t_ResizableDoubleArray$ExpansionMode::wrap_Object(*ResizableDoubleArray$ExpansionMode::MULTIPLICATIVE)));
      }

      static PyObject *t_ResizableDoubleArray$ExpansionMode_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ResizableDoubleArray$ExpansionMode::initializeClass, 1)))
          return NULL;
        return t_ResizableDoubleArray$ExpansionMode::wrap_Object(ResizableDoubleArray$ExpansionMode(((t_ResizableDoubleArray$ExpansionMode *) arg)->object.this$));
      }
      static PyObject *t_ResizableDoubleArray$ExpansionMode_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ResizableDoubleArray$ExpansionMode::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_ResizableDoubleArray$ExpansionMode_of_(t_ResizableDoubleArray$ExpansionMode *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_ResizableDoubleArray$ExpansionMode_valueOf(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        ResizableDoubleArray$ExpansionMode result((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::util::ResizableDoubleArray$ExpansionMode::valueOf(a0));
          return t_ResizableDoubleArray$ExpansionMode::wrap_Object(result);
        }

        return callSuper(type, "valueOf", args, 2);
      }

      static PyObject *t_ResizableDoubleArray$ExpansionMode_values(PyTypeObject *type)
      {
        JArray< ResizableDoubleArray$ExpansionMode > result((jobject) NULL);
        OBJ_CALL(result = ::org::hipparchus::util::ResizableDoubleArray$ExpansionMode::values());
        return JArray<jobject>(result.this$).wrap(t_ResizableDoubleArray$ExpansionMode::wrap_jobject);
      }
      static PyObject *t_ResizableDoubleArray$ExpansionMode_get__parameters_(t_ResizableDoubleArray$ExpansionMode *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/gnss/data/GalileoAlmanac.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {

            ::java::lang::Class *GalileoAlmanac::class$ = NULL;
            jmethodID *GalileoAlmanac::mids$ = NULL;
            bool GalileoAlmanac::live$ = false;

            jclass GalileoAlmanac::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/gnss/data/GalileoAlmanac");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_getHealthE1_55546ef6a647f39b] = env->getMethodID(cls, "getHealthE1", "()I");
                mids$[mid_getHealthE5a_55546ef6a647f39b] = env->getMethodID(cls, "getHealthE5a", "()I");
                mids$[mid_getHealthE5b_55546ef6a647f39b] = env->getMethodID(cls, "getHealthE5b", "()I");
                mids$[mid_getIOD_55546ef6a647f39b] = env->getMethodID(cls, "getIOD", "()I");
                mids$[mid_setDeltaInc_8ba9fe7a847cecad] = env->getMethodID(cls, "setDeltaInc", "(D)V");
                mids$[mid_setDeltaSqrtA_8ba9fe7a847cecad] = env->getMethodID(cls, "setDeltaSqrtA", "(D)V");
                mids$[mid_setHealthE1_44ed599e93e8a30c] = env->getMethodID(cls, "setHealthE1", "(I)V");
                mids$[mid_setHealthE5a_44ed599e93e8a30c] = env->getMethodID(cls, "setHealthE5a", "(I)V");
                mids$[mid_setHealthE5b_44ed599e93e8a30c] = env->getMethodID(cls, "setHealthE5b", "(I)V");
                mids$[mid_setIOD_44ed599e93e8a30c] = env->getMethodID(cls, "setIOD", "(I)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            GalileoAlmanac::GalileoAlmanac() : ::org::orekit::propagation::analytical::gnss::data::AbstractAlmanac(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

            jint GalileoAlmanac::getHealthE1() const
            {
              return env->callIntMethod(this$, mids$[mid_getHealthE1_55546ef6a647f39b]);
            }

            jint GalileoAlmanac::getHealthE5a() const
            {
              return env->callIntMethod(this$, mids$[mid_getHealthE5a_55546ef6a647f39b]);
            }

            jint GalileoAlmanac::getHealthE5b() const
            {
              return env->callIntMethod(this$, mids$[mid_getHealthE5b_55546ef6a647f39b]);
            }

            jint GalileoAlmanac::getIOD() const
            {
              return env->callIntMethod(this$, mids$[mid_getIOD_55546ef6a647f39b]);
            }

            void GalileoAlmanac::setDeltaInc(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setDeltaInc_8ba9fe7a847cecad], a0);
            }

            void GalileoAlmanac::setDeltaSqrtA(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setDeltaSqrtA_8ba9fe7a847cecad], a0);
            }

            void GalileoAlmanac::setHealthE1(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setHealthE1_44ed599e93e8a30c], a0);
            }

            void GalileoAlmanac::setHealthE5a(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setHealthE5a_44ed599e93e8a30c], a0);
            }

            void GalileoAlmanac::setHealthE5b(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setHealthE5b_44ed599e93e8a30c], a0);
            }

            void GalileoAlmanac::setIOD(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setIOD_44ed599e93e8a30c], a0);
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
            static PyObject *t_GalileoAlmanac_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_GalileoAlmanac_instance_(PyTypeObject *type, PyObject *arg);
            static int t_GalileoAlmanac_init_(t_GalileoAlmanac *self, PyObject *args, PyObject *kwds);
            static PyObject *t_GalileoAlmanac_getHealthE1(t_GalileoAlmanac *self);
            static PyObject *t_GalileoAlmanac_getHealthE5a(t_GalileoAlmanac *self);
            static PyObject *t_GalileoAlmanac_getHealthE5b(t_GalileoAlmanac *self);
            static PyObject *t_GalileoAlmanac_getIOD(t_GalileoAlmanac *self);
            static PyObject *t_GalileoAlmanac_setDeltaInc(t_GalileoAlmanac *self, PyObject *arg);
            static PyObject *t_GalileoAlmanac_setDeltaSqrtA(t_GalileoAlmanac *self, PyObject *arg);
            static PyObject *t_GalileoAlmanac_setHealthE1(t_GalileoAlmanac *self, PyObject *arg);
            static PyObject *t_GalileoAlmanac_setHealthE5a(t_GalileoAlmanac *self, PyObject *arg);
            static PyObject *t_GalileoAlmanac_setHealthE5b(t_GalileoAlmanac *self, PyObject *arg);
            static PyObject *t_GalileoAlmanac_setIOD(t_GalileoAlmanac *self, PyObject *arg);
            static int t_GalileoAlmanac_set__deltaInc(t_GalileoAlmanac *self, PyObject *arg, void *data);
            static int t_GalileoAlmanac_set__deltaSqrtA(t_GalileoAlmanac *self, PyObject *arg, void *data);
            static PyObject *t_GalileoAlmanac_get__healthE1(t_GalileoAlmanac *self, void *data);
            static int t_GalileoAlmanac_set__healthE1(t_GalileoAlmanac *self, PyObject *arg, void *data);
            static PyObject *t_GalileoAlmanac_get__healthE5a(t_GalileoAlmanac *self, void *data);
            static int t_GalileoAlmanac_set__healthE5a(t_GalileoAlmanac *self, PyObject *arg, void *data);
            static PyObject *t_GalileoAlmanac_get__healthE5b(t_GalileoAlmanac *self, void *data);
            static int t_GalileoAlmanac_set__healthE5b(t_GalileoAlmanac *self, PyObject *arg, void *data);
            static PyObject *t_GalileoAlmanac_get__iOD(t_GalileoAlmanac *self, void *data);
            static int t_GalileoAlmanac_set__iOD(t_GalileoAlmanac *self, PyObject *arg, void *data);
            static PyGetSetDef t_GalileoAlmanac__fields_[] = {
              DECLARE_SET_FIELD(t_GalileoAlmanac, deltaInc),
              DECLARE_SET_FIELD(t_GalileoAlmanac, deltaSqrtA),
              DECLARE_GETSET_FIELD(t_GalileoAlmanac, healthE1),
              DECLARE_GETSET_FIELD(t_GalileoAlmanac, healthE5a),
              DECLARE_GETSET_FIELD(t_GalileoAlmanac, healthE5b),
              DECLARE_GETSET_FIELD(t_GalileoAlmanac, iOD),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_GalileoAlmanac__methods_[] = {
              DECLARE_METHOD(t_GalileoAlmanac, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_GalileoAlmanac, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_GalileoAlmanac, getHealthE1, METH_NOARGS),
              DECLARE_METHOD(t_GalileoAlmanac, getHealthE5a, METH_NOARGS),
              DECLARE_METHOD(t_GalileoAlmanac, getHealthE5b, METH_NOARGS),
              DECLARE_METHOD(t_GalileoAlmanac, getIOD, METH_NOARGS),
              DECLARE_METHOD(t_GalileoAlmanac, setDeltaInc, METH_O),
              DECLARE_METHOD(t_GalileoAlmanac, setDeltaSqrtA, METH_O),
              DECLARE_METHOD(t_GalileoAlmanac, setHealthE1, METH_O),
              DECLARE_METHOD(t_GalileoAlmanac, setHealthE5a, METH_O),
              DECLARE_METHOD(t_GalileoAlmanac, setHealthE5b, METH_O),
              DECLARE_METHOD(t_GalileoAlmanac, setIOD, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(GalileoAlmanac)[] = {
              { Py_tp_methods, t_GalileoAlmanac__methods_ },
              { Py_tp_init, (void *) t_GalileoAlmanac_init_ },
              { Py_tp_getset, t_GalileoAlmanac__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(GalileoAlmanac)[] = {
              &PY_TYPE_DEF(::org::orekit::propagation::analytical::gnss::data::AbstractAlmanac),
              NULL
            };

            DEFINE_TYPE(GalileoAlmanac, t_GalileoAlmanac, GalileoAlmanac);

            void t_GalileoAlmanac::install(PyObject *module)
            {
              installType(&PY_TYPE(GalileoAlmanac), &PY_TYPE_DEF(GalileoAlmanac), module, "GalileoAlmanac", 0);
            }

            void t_GalileoAlmanac::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(GalileoAlmanac), "class_", make_descriptor(GalileoAlmanac::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GalileoAlmanac), "wrapfn_", make_descriptor(t_GalileoAlmanac::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GalileoAlmanac), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_GalileoAlmanac_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, GalileoAlmanac::initializeClass, 1)))
                return NULL;
              return t_GalileoAlmanac::wrap_Object(GalileoAlmanac(((t_GalileoAlmanac *) arg)->object.this$));
            }
            static PyObject *t_GalileoAlmanac_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, GalileoAlmanac::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_GalileoAlmanac_init_(t_GalileoAlmanac *self, PyObject *args, PyObject *kwds)
            {
              GalileoAlmanac object((jobject) NULL);

              INT_CALL(object = GalileoAlmanac());
              self->object = object;

              return 0;
            }

            static PyObject *t_GalileoAlmanac_getHealthE1(t_GalileoAlmanac *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getHealthE1());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_GalileoAlmanac_getHealthE5a(t_GalileoAlmanac *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getHealthE5a());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_GalileoAlmanac_getHealthE5b(t_GalileoAlmanac *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getHealthE5b());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_GalileoAlmanac_getIOD(t_GalileoAlmanac *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getIOD());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_GalileoAlmanac_setDeltaInc(t_GalileoAlmanac *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setDeltaInc(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setDeltaInc", arg);
              return NULL;
            }

            static PyObject *t_GalileoAlmanac_setDeltaSqrtA(t_GalileoAlmanac *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setDeltaSqrtA(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setDeltaSqrtA", arg);
              return NULL;
            }

            static PyObject *t_GalileoAlmanac_setHealthE1(t_GalileoAlmanac *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setHealthE1(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setHealthE1", arg);
              return NULL;
            }

            static PyObject *t_GalileoAlmanac_setHealthE5a(t_GalileoAlmanac *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setHealthE5a(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setHealthE5a", arg);
              return NULL;
            }

            static PyObject *t_GalileoAlmanac_setHealthE5b(t_GalileoAlmanac *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setHealthE5b(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setHealthE5b", arg);
              return NULL;
            }

            static PyObject *t_GalileoAlmanac_setIOD(t_GalileoAlmanac *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setIOD(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setIOD", arg);
              return NULL;
            }

            static int t_GalileoAlmanac_set__deltaInc(t_GalileoAlmanac *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setDeltaInc(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "deltaInc", arg);
              return -1;
            }

            static int t_GalileoAlmanac_set__deltaSqrtA(t_GalileoAlmanac *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setDeltaSqrtA(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "deltaSqrtA", arg);
              return -1;
            }

            static PyObject *t_GalileoAlmanac_get__healthE1(t_GalileoAlmanac *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getHealthE1());
              return PyLong_FromLong((long) value);
            }
            static int t_GalileoAlmanac_set__healthE1(t_GalileoAlmanac *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setHealthE1(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "healthE1", arg);
              return -1;
            }

            static PyObject *t_GalileoAlmanac_get__healthE5a(t_GalileoAlmanac *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getHealthE5a());
              return PyLong_FromLong((long) value);
            }
            static int t_GalileoAlmanac_set__healthE5a(t_GalileoAlmanac *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setHealthE5a(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "healthE5a", arg);
              return -1;
            }

            static PyObject *t_GalileoAlmanac_get__healthE5b(t_GalileoAlmanac *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getHealthE5b());
              return PyLong_FromLong((long) value);
            }
            static int t_GalileoAlmanac_set__healthE5b(t_GalileoAlmanac *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setHealthE5b(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "healthE5b", arg);
              return -1;
            }

            static PyObject *t_GalileoAlmanac_get__iOD(t_GalileoAlmanac *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getIOD());
              return PyLong_FromLong((long) value);
            }
            static int t_GalileoAlmanac_set__iOD(t_GalileoAlmanac *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setIOD(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "iOD", arg);
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
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LevenbergMarquardtOptimizer.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresOptimizer$Optimum.h"
#include "java/lang/Class.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LevenbergMarquardtOptimizer.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresOptimizer.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace vector {
          namespace leastsquares {

            ::java::lang::Class *LevenbergMarquardtOptimizer::class$ = NULL;
            jmethodID *LevenbergMarquardtOptimizer::mids$ = NULL;
            bool LevenbergMarquardtOptimizer::live$ = false;

            jclass LevenbergMarquardtOptimizer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/vector/leastsquares/LevenbergMarquardtOptimizer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_init$_aeb39721bc4af7d2] = env->getMethodID(cls, "<init>", "(DDDDD)V");
                mids$[mid_getCostRelativeTolerance_b74f83833fdad017] = env->getMethodID(cls, "getCostRelativeTolerance", "()D");
                mids$[mid_getInitialStepBoundFactor_b74f83833fdad017] = env->getMethodID(cls, "getInitialStepBoundFactor", "()D");
                mids$[mid_getOrthoTolerance_b74f83833fdad017] = env->getMethodID(cls, "getOrthoTolerance", "()D");
                mids$[mid_getParameterRelativeTolerance_b74f83833fdad017] = env->getMethodID(cls, "getParameterRelativeTolerance", "()D");
                mids$[mid_getRankingThreshold_b74f83833fdad017] = env->getMethodID(cls, "getRankingThreshold", "()D");
                mids$[mid_optimize_b4aa3e5bf3a16dc8] = env->getMethodID(cls, "optimize", "(Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem;)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresOptimizer$Optimum;");
                mids$[mid_withCostRelativeTolerance_0e4d538b02151a51] = env->getMethodID(cls, "withCostRelativeTolerance", "(D)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LevenbergMarquardtOptimizer;");
                mids$[mid_withInitialStepBoundFactor_0e4d538b02151a51] = env->getMethodID(cls, "withInitialStepBoundFactor", "(D)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LevenbergMarquardtOptimizer;");
                mids$[mid_withOrthoTolerance_0e4d538b02151a51] = env->getMethodID(cls, "withOrthoTolerance", "(D)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LevenbergMarquardtOptimizer;");
                mids$[mid_withParameterRelativeTolerance_0e4d538b02151a51] = env->getMethodID(cls, "withParameterRelativeTolerance", "(D)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LevenbergMarquardtOptimizer;");
                mids$[mid_withRankingThreshold_0e4d538b02151a51] = env->getMethodID(cls, "withRankingThreshold", "(D)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LevenbergMarquardtOptimizer;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            LevenbergMarquardtOptimizer::LevenbergMarquardtOptimizer() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

            LevenbergMarquardtOptimizer::LevenbergMarquardtOptimizer(jdouble a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_aeb39721bc4af7d2, a0, a1, a2, a3, a4)) {}

            jdouble LevenbergMarquardtOptimizer::getCostRelativeTolerance() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCostRelativeTolerance_b74f83833fdad017]);
            }

            jdouble LevenbergMarquardtOptimizer::getInitialStepBoundFactor() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getInitialStepBoundFactor_b74f83833fdad017]);
            }

            jdouble LevenbergMarquardtOptimizer::getOrthoTolerance() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getOrthoTolerance_b74f83833fdad017]);
            }

            jdouble LevenbergMarquardtOptimizer::getParameterRelativeTolerance() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getParameterRelativeTolerance_b74f83833fdad017]);
            }

            jdouble LevenbergMarquardtOptimizer::getRankingThreshold() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getRankingThreshold_b74f83833fdad017]);
            }

            ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresOptimizer$Optimum LevenbergMarquardtOptimizer::optimize(const ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem & a0) const
            {
              return ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresOptimizer$Optimum(env->callObjectMethod(this$, mids$[mid_optimize_b4aa3e5bf3a16dc8], a0.this$));
            }

            LevenbergMarquardtOptimizer LevenbergMarquardtOptimizer::withCostRelativeTolerance(jdouble a0) const
            {
              return LevenbergMarquardtOptimizer(env->callObjectMethod(this$, mids$[mid_withCostRelativeTolerance_0e4d538b02151a51], a0));
            }

            LevenbergMarquardtOptimizer LevenbergMarquardtOptimizer::withInitialStepBoundFactor(jdouble a0) const
            {
              return LevenbergMarquardtOptimizer(env->callObjectMethod(this$, mids$[mid_withInitialStepBoundFactor_0e4d538b02151a51], a0));
            }

            LevenbergMarquardtOptimizer LevenbergMarquardtOptimizer::withOrthoTolerance(jdouble a0) const
            {
              return LevenbergMarquardtOptimizer(env->callObjectMethod(this$, mids$[mid_withOrthoTolerance_0e4d538b02151a51], a0));
            }

            LevenbergMarquardtOptimizer LevenbergMarquardtOptimizer::withParameterRelativeTolerance(jdouble a0) const
            {
              return LevenbergMarquardtOptimizer(env->callObjectMethod(this$, mids$[mid_withParameterRelativeTolerance_0e4d538b02151a51], a0));
            }

            LevenbergMarquardtOptimizer LevenbergMarquardtOptimizer::withRankingThreshold(jdouble a0) const
            {
              return LevenbergMarquardtOptimizer(env->callObjectMethod(this$, mids$[mid_withRankingThreshold_0e4d538b02151a51], a0));
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
            static PyObject *t_LevenbergMarquardtOptimizer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_LevenbergMarquardtOptimizer_instance_(PyTypeObject *type, PyObject *arg);
            static int t_LevenbergMarquardtOptimizer_init_(t_LevenbergMarquardtOptimizer *self, PyObject *args, PyObject *kwds);
            static PyObject *t_LevenbergMarquardtOptimizer_getCostRelativeTolerance(t_LevenbergMarquardtOptimizer *self);
            static PyObject *t_LevenbergMarquardtOptimizer_getInitialStepBoundFactor(t_LevenbergMarquardtOptimizer *self);
            static PyObject *t_LevenbergMarquardtOptimizer_getOrthoTolerance(t_LevenbergMarquardtOptimizer *self);
            static PyObject *t_LevenbergMarquardtOptimizer_getParameterRelativeTolerance(t_LevenbergMarquardtOptimizer *self);
            static PyObject *t_LevenbergMarquardtOptimizer_getRankingThreshold(t_LevenbergMarquardtOptimizer *self);
            static PyObject *t_LevenbergMarquardtOptimizer_optimize(t_LevenbergMarquardtOptimizer *self, PyObject *arg);
            static PyObject *t_LevenbergMarquardtOptimizer_withCostRelativeTolerance(t_LevenbergMarquardtOptimizer *self, PyObject *arg);
            static PyObject *t_LevenbergMarquardtOptimizer_withInitialStepBoundFactor(t_LevenbergMarquardtOptimizer *self, PyObject *arg);
            static PyObject *t_LevenbergMarquardtOptimizer_withOrthoTolerance(t_LevenbergMarquardtOptimizer *self, PyObject *arg);
            static PyObject *t_LevenbergMarquardtOptimizer_withParameterRelativeTolerance(t_LevenbergMarquardtOptimizer *self, PyObject *arg);
            static PyObject *t_LevenbergMarquardtOptimizer_withRankingThreshold(t_LevenbergMarquardtOptimizer *self, PyObject *arg);
            static PyObject *t_LevenbergMarquardtOptimizer_get__costRelativeTolerance(t_LevenbergMarquardtOptimizer *self, void *data);
            static PyObject *t_LevenbergMarquardtOptimizer_get__initialStepBoundFactor(t_LevenbergMarquardtOptimizer *self, void *data);
            static PyObject *t_LevenbergMarquardtOptimizer_get__orthoTolerance(t_LevenbergMarquardtOptimizer *self, void *data);
            static PyObject *t_LevenbergMarquardtOptimizer_get__parameterRelativeTolerance(t_LevenbergMarquardtOptimizer *self, void *data);
            static PyObject *t_LevenbergMarquardtOptimizer_get__rankingThreshold(t_LevenbergMarquardtOptimizer *self, void *data);
            static PyGetSetDef t_LevenbergMarquardtOptimizer__fields_[] = {
              DECLARE_GET_FIELD(t_LevenbergMarquardtOptimizer, costRelativeTolerance),
              DECLARE_GET_FIELD(t_LevenbergMarquardtOptimizer, initialStepBoundFactor),
              DECLARE_GET_FIELD(t_LevenbergMarquardtOptimizer, orthoTolerance),
              DECLARE_GET_FIELD(t_LevenbergMarquardtOptimizer, parameterRelativeTolerance),
              DECLARE_GET_FIELD(t_LevenbergMarquardtOptimizer, rankingThreshold),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_LevenbergMarquardtOptimizer__methods_[] = {
              DECLARE_METHOD(t_LevenbergMarquardtOptimizer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_LevenbergMarquardtOptimizer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_LevenbergMarquardtOptimizer, getCostRelativeTolerance, METH_NOARGS),
              DECLARE_METHOD(t_LevenbergMarquardtOptimizer, getInitialStepBoundFactor, METH_NOARGS),
              DECLARE_METHOD(t_LevenbergMarquardtOptimizer, getOrthoTolerance, METH_NOARGS),
              DECLARE_METHOD(t_LevenbergMarquardtOptimizer, getParameterRelativeTolerance, METH_NOARGS),
              DECLARE_METHOD(t_LevenbergMarquardtOptimizer, getRankingThreshold, METH_NOARGS),
              DECLARE_METHOD(t_LevenbergMarquardtOptimizer, optimize, METH_O),
              DECLARE_METHOD(t_LevenbergMarquardtOptimizer, withCostRelativeTolerance, METH_O),
              DECLARE_METHOD(t_LevenbergMarquardtOptimizer, withInitialStepBoundFactor, METH_O),
              DECLARE_METHOD(t_LevenbergMarquardtOptimizer, withOrthoTolerance, METH_O),
              DECLARE_METHOD(t_LevenbergMarquardtOptimizer, withParameterRelativeTolerance, METH_O),
              DECLARE_METHOD(t_LevenbergMarquardtOptimizer, withRankingThreshold, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(LevenbergMarquardtOptimizer)[] = {
              { Py_tp_methods, t_LevenbergMarquardtOptimizer__methods_ },
              { Py_tp_init, (void *) t_LevenbergMarquardtOptimizer_init_ },
              { Py_tp_getset, t_LevenbergMarquardtOptimizer__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(LevenbergMarquardtOptimizer)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(LevenbergMarquardtOptimizer, t_LevenbergMarquardtOptimizer, LevenbergMarquardtOptimizer);

            void t_LevenbergMarquardtOptimizer::install(PyObject *module)
            {
              installType(&PY_TYPE(LevenbergMarquardtOptimizer), &PY_TYPE_DEF(LevenbergMarquardtOptimizer), module, "LevenbergMarquardtOptimizer", 0);
            }

            void t_LevenbergMarquardtOptimizer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(LevenbergMarquardtOptimizer), "class_", make_descriptor(LevenbergMarquardtOptimizer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(LevenbergMarquardtOptimizer), "wrapfn_", make_descriptor(t_LevenbergMarquardtOptimizer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(LevenbergMarquardtOptimizer), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_LevenbergMarquardtOptimizer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, LevenbergMarquardtOptimizer::initializeClass, 1)))
                return NULL;
              return t_LevenbergMarquardtOptimizer::wrap_Object(LevenbergMarquardtOptimizer(((t_LevenbergMarquardtOptimizer *) arg)->object.this$));
            }
            static PyObject *t_LevenbergMarquardtOptimizer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, LevenbergMarquardtOptimizer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_LevenbergMarquardtOptimizer_init_(t_LevenbergMarquardtOptimizer *self, PyObject *args, PyObject *kwds)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 0:
                {
                  LevenbergMarquardtOptimizer object((jobject) NULL);

                  INT_CALL(object = LevenbergMarquardtOptimizer());
                  self->object = object;
                  break;
                }
               case 5:
                {
                  jdouble a0;
                  jdouble a1;
                  jdouble a2;
                  jdouble a3;
                  jdouble a4;
                  LevenbergMarquardtOptimizer object((jobject) NULL);

                  if (!parseArgs(args, "DDDDD", &a0, &a1, &a2, &a3, &a4))
                  {
                    INT_CALL(object = LevenbergMarquardtOptimizer(a0, a1, a2, a3, a4));
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

            static PyObject *t_LevenbergMarquardtOptimizer_getCostRelativeTolerance(t_LevenbergMarquardtOptimizer *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCostRelativeTolerance());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_LevenbergMarquardtOptimizer_getInitialStepBoundFactor(t_LevenbergMarquardtOptimizer *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getInitialStepBoundFactor());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_LevenbergMarquardtOptimizer_getOrthoTolerance(t_LevenbergMarquardtOptimizer *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getOrthoTolerance());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_LevenbergMarquardtOptimizer_getParameterRelativeTolerance(t_LevenbergMarquardtOptimizer *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getParameterRelativeTolerance());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_LevenbergMarquardtOptimizer_getRankingThreshold(t_LevenbergMarquardtOptimizer *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getRankingThreshold());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_LevenbergMarquardtOptimizer_optimize(t_LevenbergMarquardtOptimizer *self, PyObject *arg)
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

            static PyObject *t_LevenbergMarquardtOptimizer_withCostRelativeTolerance(t_LevenbergMarquardtOptimizer *self, PyObject *arg)
            {
              jdouble a0;
              LevenbergMarquardtOptimizer result((jobject) NULL);

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(result = self->object.withCostRelativeTolerance(a0));
                return t_LevenbergMarquardtOptimizer::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "withCostRelativeTolerance", arg);
              return NULL;
            }

            static PyObject *t_LevenbergMarquardtOptimizer_withInitialStepBoundFactor(t_LevenbergMarquardtOptimizer *self, PyObject *arg)
            {
              jdouble a0;
              LevenbergMarquardtOptimizer result((jobject) NULL);

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(result = self->object.withInitialStepBoundFactor(a0));
                return t_LevenbergMarquardtOptimizer::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "withInitialStepBoundFactor", arg);
              return NULL;
            }

            static PyObject *t_LevenbergMarquardtOptimizer_withOrthoTolerance(t_LevenbergMarquardtOptimizer *self, PyObject *arg)
            {
              jdouble a0;
              LevenbergMarquardtOptimizer result((jobject) NULL);

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(result = self->object.withOrthoTolerance(a0));
                return t_LevenbergMarquardtOptimizer::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "withOrthoTolerance", arg);
              return NULL;
            }

            static PyObject *t_LevenbergMarquardtOptimizer_withParameterRelativeTolerance(t_LevenbergMarquardtOptimizer *self, PyObject *arg)
            {
              jdouble a0;
              LevenbergMarquardtOptimizer result((jobject) NULL);

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(result = self->object.withParameterRelativeTolerance(a0));
                return t_LevenbergMarquardtOptimizer::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "withParameterRelativeTolerance", arg);
              return NULL;
            }

            static PyObject *t_LevenbergMarquardtOptimizer_withRankingThreshold(t_LevenbergMarquardtOptimizer *self, PyObject *arg)
            {
              jdouble a0;
              LevenbergMarquardtOptimizer result((jobject) NULL);

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(result = self->object.withRankingThreshold(a0));
                return t_LevenbergMarquardtOptimizer::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "withRankingThreshold", arg);
              return NULL;
            }

            static PyObject *t_LevenbergMarquardtOptimizer_get__costRelativeTolerance(t_LevenbergMarquardtOptimizer *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCostRelativeTolerance());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_LevenbergMarquardtOptimizer_get__initialStepBoundFactor(t_LevenbergMarquardtOptimizer *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getInitialStepBoundFactor());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_LevenbergMarquardtOptimizer_get__orthoTolerance(t_LevenbergMarquardtOptimizer *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getOrthoTolerance());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_LevenbergMarquardtOptimizer_get__parameterRelativeTolerance(t_LevenbergMarquardtOptimizer *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getParameterRelativeTolerance());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_LevenbergMarquardtOptimizer_get__rankingThreshold(t_LevenbergMarquardtOptimizer *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getRankingThreshold());
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
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/SequentialGaussNewtonOptimizer.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem.h"
#include "org/hipparchus/linear/RealVector.h"
#include "org/hipparchus/linear/MatrixDecomposer.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem$Evaluation.h"
#include "java/lang/Class.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresOptimizer.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/SequentialGaussNewtonOptimizer.h"
#include "java/lang/String.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresOptimizer$Optimum.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace vector {
          namespace leastsquares {

            ::java::lang::Class *SequentialGaussNewtonOptimizer::class$ = NULL;
            jmethodID *SequentialGaussNewtonOptimizer::mids$ = NULL;
            bool SequentialGaussNewtonOptimizer::live$ = false;

            jclass SequentialGaussNewtonOptimizer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/vector/leastsquares/SequentialGaussNewtonOptimizer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_init$_02dd8effa935797e] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/MatrixDecomposer;ZLorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem$Evaluation;)V");
                mids$[mid_getDecomposer_777cbca2854e04bd] = env->getMethodID(cls, "getDecomposer", "()Lorg/hipparchus/linear/MatrixDecomposer;");
                mids$[mid_getOldEvaluation_9a5082a0d9f62d61] = env->getMethodID(cls, "getOldEvaluation", "()Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem$Evaluation;");
                mids$[mid_isFormNormalEquations_9ab94ac1dc23b105] = env->getMethodID(cls, "isFormNormalEquations", "()Z");
                mids$[mid_optimize_b4aa3e5bf3a16dc8] = env->getMethodID(cls, "optimize", "(Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem;)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresOptimizer$Optimum;");
                mids$[mid_toString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
                mids$[mid_withAPrioriData_85311cc1f03eb256] = env->getMethodID(cls, "withAPrioriData", "(Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/SequentialGaussNewtonOptimizer;");
                mids$[mid_withAPrioriData_c2427495961b50ca] = env->getMethodID(cls, "withAPrioriData", "(Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealMatrix;DD)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/SequentialGaussNewtonOptimizer;");
                mids$[mid_withDecomposer_f0df00d374bb149b] = env->getMethodID(cls, "withDecomposer", "(Lorg/hipparchus/linear/MatrixDecomposer;)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/SequentialGaussNewtonOptimizer;");
                mids$[mid_withEvaluation_c61c89be5de85ee7] = env->getMethodID(cls, "withEvaluation", "(Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem$Evaluation;)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/SequentialGaussNewtonOptimizer;");
                mids$[mid_withFormNormalEquations_e427dd7f0122b950] = env->getMethodID(cls, "withFormNormalEquations", "(Z)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/SequentialGaussNewtonOptimizer;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            SequentialGaussNewtonOptimizer::SequentialGaussNewtonOptimizer() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

            SequentialGaussNewtonOptimizer::SequentialGaussNewtonOptimizer(const ::org::hipparchus::linear::MatrixDecomposer & a0, jboolean a1, const ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem$Evaluation & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_02dd8effa935797e, a0.this$, a1, a2.this$)) {}

            ::org::hipparchus::linear::MatrixDecomposer SequentialGaussNewtonOptimizer::getDecomposer() const
            {
              return ::org::hipparchus::linear::MatrixDecomposer(env->callObjectMethod(this$, mids$[mid_getDecomposer_777cbca2854e04bd]));
            }

            ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem$Evaluation SequentialGaussNewtonOptimizer::getOldEvaluation() const
            {
              return ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem$Evaluation(env->callObjectMethod(this$, mids$[mid_getOldEvaluation_9a5082a0d9f62d61]));
            }

            jboolean SequentialGaussNewtonOptimizer::isFormNormalEquations() const
            {
              return env->callBooleanMethod(this$, mids$[mid_isFormNormalEquations_9ab94ac1dc23b105]);
            }

            ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresOptimizer$Optimum SequentialGaussNewtonOptimizer::optimize(const ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem & a0) const
            {
              return ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresOptimizer$Optimum(env->callObjectMethod(this$, mids$[mid_optimize_b4aa3e5bf3a16dc8], a0.this$));
            }

            ::java::lang::String SequentialGaussNewtonOptimizer::toString() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_1c1fa1e935d6cdcf]));
            }

            SequentialGaussNewtonOptimizer SequentialGaussNewtonOptimizer::withAPrioriData(const ::org::hipparchus::linear::RealVector & a0, const ::org::hipparchus::linear::RealMatrix & a1) const
            {
              return SequentialGaussNewtonOptimizer(env->callObjectMethod(this$, mids$[mid_withAPrioriData_85311cc1f03eb256], a0.this$, a1.this$));
            }

            SequentialGaussNewtonOptimizer SequentialGaussNewtonOptimizer::withAPrioriData(const ::org::hipparchus::linear::RealVector & a0, const ::org::hipparchus::linear::RealMatrix & a1, jdouble a2, jdouble a3) const
            {
              return SequentialGaussNewtonOptimizer(env->callObjectMethod(this$, mids$[mid_withAPrioriData_c2427495961b50ca], a0.this$, a1.this$, a2, a3));
            }

            SequentialGaussNewtonOptimizer SequentialGaussNewtonOptimizer::withDecomposer(const ::org::hipparchus::linear::MatrixDecomposer & a0) const
            {
              return SequentialGaussNewtonOptimizer(env->callObjectMethod(this$, mids$[mid_withDecomposer_f0df00d374bb149b], a0.this$));
            }

            SequentialGaussNewtonOptimizer SequentialGaussNewtonOptimizer::withEvaluation(const ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem$Evaluation & a0) const
            {
              return SequentialGaussNewtonOptimizer(env->callObjectMethod(this$, mids$[mid_withEvaluation_c61c89be5de85ee7], a0.this$));
            }

            SequentialGaussNewtonOptimizer SequentialGaussNewtonOptimizer::withFormNormalEquations(jboolean a0) const
            {
              return SequentialGaussNewtonOptimizer(env->callObjectMethod(this$, mids$[mid_withFormNormalEquations_e427dd7f0122b950], a0));
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
            static PyObject *t_SequentialGaussNewtonOptimizer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_SequentialGaussNewtonOptimizer_instance_(PyTypeObject *type, PyObject *arg);
            static int t_SequentialGaussNewtonOptimizer_init_(t_SequentialGaussNewtonOptimizer *self, PyObject *args, PyObject *kwds);
            static PyObject *t_SequentialGaussNewtonOptimizer_getDecomposer(t_SequentialGaussNewtonOptimizer *self);
            static PyObject *t_SequentialGaussNewtonOptimizer_getOldEvaluation(t_SequentialGaussNewtonOptimizer *self);
            static PyObject *t_SequentialGaussNewtonOptimizer_isFormNormalEquations(t_SequentialGaussNewtonOptimizer *self);
            static PyObject *t_SequentialGaussNewtonOptimizer_optimize(t_SequentialGaussNewtonOptimizer *self, PyObject *arg);
            static PyObject *t_SequentialGaussNewtonOptimizer_toString(t_SequentialGaussNewtonOptimizer *self, PyObject *args);
            static PyObject *t_SequentialGaussNewtonOptimizer_withAPrioriData(t_SequentialGaussNewtonOptimizer *self, PyObject *args);
            static PyObject *t_SequentialGaussNewtonOptimizer_withDecomposer(t_SequentialGaussNewtonOptimizer *self, PyObject *arg);
            static PyObject *t_SequentialGaussNewtonOptimizer_withEvaluation(t_SequentialGaussNewtonOptimizer *self, PyObject *arg);
            static PyObject *t_SequentialGaussNewtonOptimizer_withFormNormalEquations(t_SequentialGaussNewtonOptimizer *self, PyObject *arg);
            static PyObject *t_SequentialGaussNewtonOptimizer_get__decomposer(t_SequentialGaussNewtonOptimizer *self, void *data);
            static PyObject *t_SequentialGaussNewtonOptimizer_get__formNormalEquations(t_SequentialGaussNewtonOptimizer *self, void *data);
            static PyObject *t_SequentialGaussNewtonOptimizer_get__oldEvaluation(t_SequentialGaussNewtonOptimizer *self, void *data);
            static PyGetSetDef t_SequentialGaussNewtonOptimizer__fields_[] = {
              DECLARE_GET_FIELD(t_SequentialGaussNewtonOptimizer, decomposer),
              DECLARE_GET_FIELD(t_SequentialGaussNewtonOptimizer, formNormalEquations),
              DECLARE_GET_FIELD(t_SequentialGaussNewtonOptimizer, oldEvaluation),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_SequentialGaussNewtonOptimizer__methods_[] = {
              DECLARE_METHOD(t_SequentialGaussNewtonOptimizer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_SequentialGaussNewtonOptimizer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_SequentialGaussNewtonOptimizer, getDecomposer, METH_NOARGS),
              DECLARE_METHOD(t_SequentialGaussNewtonOptimizer, getOldEvaluation, METH_NOARGS),
              DECLARE_METHOD(t_SequentialGaussNewtonOptimizer, isFormNormalEquations, METH_NOARGS),
              DECLARE_METHOD(t_SequentialGaussNewtonOptimizer, optimize, METH_O),
              DECLARE_METHOD(t_SequentialGaussNewtonOptimizer, toString, METH_VARARGS),
              DECLARE_METHOD(t_SequentialGaussNewtonOptimizer, withAPrioriData, METH_VARARGS),
              DECLARE_METHOD(t_SequentialGaussNewtonOptimizer, withDecomposer, METH_O),
              DECLARE_METHOD(t_SequentialGaussNewtonOptimizer, withEvaluation, METH_O),
              DECLARE_METHOD(t_SequentialGaussNewtonOptimizer, withFormNormalEquations, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(SequentialGaussNewtonOptimizer)[] = {
              { Py_tp_methods, t_SequentialGaussNewtonOptimizer__methods_ },
              { Py_tp_init, (void *) t_SequentialGaussNewtonOptimizer_init_ },
              { Py_tp_getset, t_SequentialGaussNewtonOptimizer__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(SequentialGaussNewtonOptimizer)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(SequentialGaussNewtonOptimizer, t_SequentialGaussNewtonOptimizer, SequentialGaussNewtonOptimizer);

            void t_SequentialGaussNewtonOptimizer::install(PyObject *module)
            {
              installType(&PY_TYPE(SequentialGaussNewtonOptimizer), &PY_TYPE_DEF(SequentialGaussNewtonOptimizer), module, "SequentialGaussNewtonOptimizer", 0);
            }

            void t_SequentialGaussNewtonOptimizer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(SequentialGaussNewtonOptimizer), "class_", make_descriptor(SequentialGaussNewtonOptimizer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SequentialGaussNewtonOptimizer), "wrapfn_", make_descriptor(t_SequentialGaussNewtonOptimizer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SequentialGaussNewtonOptimizer), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_SequentialGaussNewtonOptimizer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, SequentialGaussNewtonOptimizer::initializeClass, 1)))
                return NULL;
              return t_SequentialGaussNewtonOptimizer::wrap_Object(SequentialGaussNewtonOptimizer(((t_SequentialGaussNewtonOptimizer *) arg)->object.this$));
            }
            static PyObject *t_SequentialGaussNewtonOptimizer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, SequentialGaussNewtonOptimizer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_SequentialGaussNewtonOptimizer_init_(t_SequentialGaussNewtonOptimizer *self, PyObject *args, PyObject *kwds)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 0:
                {
                  SequentialGaussNewtonOptimizer object((jobject) NULL);

                  INT_CALL(object = SequentialGaussNewtonOptimizer());
                  self->object = object;
                  break;
                }
               case 3:
                {
                  ::org::hipparchus::linear::MatrixDecomposer a0((jobject) NULL);
                  jboolean a1;
                  ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem$Evaluation a2((jobject) NULL);
                  SequentialGaussNewtonOptimizer object((jobject) NULL);

                  if (!parseArgs(args, "kZk", ::org::hipparchus::linear::MatrixDecomposer::initializeClass, ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem$Evaluation::initializeClass, &a0, &a1, &a2))
                  {
                    INT_CALL(object = SequentialGaussNewtonOptimizer(a0, a1, a2));
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

            static PyObject *t_SequentialGaussNewtonOptimizer_getDecomposer(t_SequentialGaussNewtonOptimizer *self)
            {
              ::org::hipparchus::linear::MatrixDecomposer result((jobject) NULL);
              OBJ_CALL(result = self->object.getDecomposer());
              return ::org::hipparchus::linear::t_MatrixDecomposer::wrap_Object(result);
            }

            static PyObject *t_SequentialGaussNewtonOptimizer_getOldEvaluation(t_SequentialGaussNewtonOptimizer *self)
            {
              ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem$Evaluation result((jobject) NULL);
              OBJ_CALL(result = self->object.getOldEvaluation());
              return ::org::hipparchus::optim::nonlinear::vector::leastsquares::t_LeastSquaresProblem$Evaluation::wrap_Object(result);
            }

            static PyObject *t_SequentialGaussNewtonOptimizer_isFormNormalEquations(t_SequentialGaussNewtonOptimizer *self)
            {
              jboolean result;
              OBJ_CALL(result = self->object.isFormNormalEquations());
              Py_RETURN_BOOL(result);
            }

            static PyObject *t_SequentialGaussNewtonOptimizer_optimize(t_SequentialGaussNewtonOptimizer *self, PyObject *arg)
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

            static PyObject *t_SequentialGaussNewtonOptimizer_toString(t_SequentialGaussNewtonOptimizer *self, PyObject *args)
            {
              ::java::lang::String result((jobject) NULL);

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.toString());
                return j2p(result);
              }

              return callSuper(PY_TYPE(SequentialGaussNewtonOptimizer), (PyObject *) self, "toString", args, 2);
            }

            static PyObject *t_SequentialGaussNewtonOptimizer_withAPrioriData(t_SequentialGaussNewtonOptimizer *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 2:
                {
                  ::org::hipparchus::linear::RealVector a0((jobject) NULL);
                  ::org::hipparchus::linear::RealMatrix a1((jobject) NULL);
                  SequentialGaussNewtonOptimizer result((jobject) NULL);

                  if (!parseArgs(args, "kk", ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1))
                  {
                    OBJ_CALL(result = self->object.withAPrioriData(a0, a1));
                    return t_SequentialGaussNewtonOptimizer::wrap_Object(result);
                  }
                }
                break;
               case 4:
                {
                  ::org::hipparchus::linear::RealVector a0((jobject) NULL);
                  ::org::hipparchus::linear::RealMatrix a1((jobject) NULL);
                  jdouble a2;
                  jdouble a3;
                  SequentialGaussNewtonOptimizer result((jobject) NULL);

                  if (!parseArgs(args, "kkDD", ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1, &a2, &a3))
                  {
                    OBJ_CALL(result = self->object.withAPrioriData(a0, a1, a2, a3));
                    return t_SequentialGaussNewtonOptimizer::wrap_Object(result);
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "withAPrioriData", args);
              return NULL;
            }

            static PyObject *t_SequentialGaussNewtonOptimizer_withDecomposer(t_SequentialGaussNewtonOptimizer *self, PyObject *arg)
            {
              ::org::hipparchus::linear::MatrixDecomposer a0((jobject) NULL);
              SequentialGaussNewtonOptimizer result((jobject) NULL);

              if (!parseArg(arg, "k", ::org::hipparchus::linear::MatrixDecomposer::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.withDecomposer(a0));
                return t_SequentialGaussNewtonOptimizer::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "withDecomposer", arg);
              return NULL;
            }

            static PyObject *t_SequentialGaussNewtonOptimizer_withEvaluation(t_SequentialGaussNewtonOptimizer *self, PyObject *arg)
            {
              ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem$Evaluation a0((jobject) NULL);
              SequentialGaussNewtonOptimizer result((jobject) NULL);

              if (!parseArg(arg, "k", ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem$Evaluation::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.withEvaluation(a0));
                return t_SequentialGaussNewtonOptimizer::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "withEvaluation", arg);
              return NULL;
            }

            static PyObject *t_SequentialGaussNewtonOptimizer_withFormNormalEquations(t_SequentialGaussNewtonOptimizer *self, PyObject *arg)
            {
              jboolean a0;
              SequentialGaussNewtonOptimizer result((jobject) NULL);

              if (!parseArg(arg, "Z", &a0))
              {
                OBJ_CALL(result = self->object.withFormNormalEquations(a0));
                return t_SequentialGaussNewtonOptimizer::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "withFormNormalEquations", arg);
              return NULL;
            }

            static PyObject *t_SequentialGaussNewtonOptimizer_get__decomposer(t_SequentialGaussNewtonOptimizer *self, void *data)
            {
              ::org::hipparchus::linear::MatrixDecomposer value((jobject) NULL);
              OBJ_CALL(value = self->object.getDecomposer());
              return ::org::hipparchus::linear::t_MatrixDecomposer::wrap_Object(value);
            }

            static PyObject *t_SequentialGaussNewtonOptimizer_get__formNormalEquations(t_SequentialGaussNewtonOptimizer *self, void *data)
            {
              jboolean value;
              OBJ_CALL(value = self->object.isFormNormalEquations());
              Py_RETURN_BOOL(value);
            }

            static PyObject *t_SequentialGaussNewtonOptimizer_get__oldEvaluation(t_SequentialGaussNewtonOptimizer *self, void *data)
            {
              ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem$Evaluation value((jobject) NULL);
              OBJ_CALL(value = self->object.getOldEvaluation());
              return ::org::hipparchus::optim::nonlinear::vector::leastsquares::t_LeastSquaresProblem$Evaluation::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/cdm/XYZCovariance.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *XYZCovariance::class$ = NULL;
            jmethodID *XYZCovariance::mids$ = NULL;
            bool XYZCovariance::live$ = false;

            jclass XYZCovariance::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/XYZCovariance");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_fcb96c98de6fad04] = env->getMethodID(cls, "<init>", "(Z)V");
                mids$[mid_getCdrgdrg_b74f83833fdad017] = env->getMethodID(cls, "getCdrgdrg", "()D");
                mids$[mid_getCdrgx_b74f83833fdad017] = env->getMethodID(cls, "getCdrgx", "()D");
                mids$[mid_getCdrgxdot_b74f83833fdad017] = env->getMethodID(cls, "getCdrgxdot", "()D");
                mids$[mid_getCdrgy_b74f83833fdad017] = env->getMethodID(cls, "getCdrgy", "()D");
                mids$[mid_getCdrgydot_b74f83833fdad017] = env->getMethodID(cls, "getCdrgydot", "()D");
                mids$[mid_getCdrgz_b74f83833fdad017] = env->getMethodID(cls, "getCdrgz", "()D");
                mids$[mid_getCdrgzdot_b74f83833fdad017] = env->getMethodID(cls, "getCdrgzdot", "()D");
                mids$[mid_getCsrpdrg_b74f83833fdad017] = env->getMethodID(cls, "getCsrpdrg", "()D");
                mids$[mid_getCsrpsrp_b74f83833fdad017] = env->getMethodID(cls, "getCsrpsrp", "()D");
                mids$[mid_getCsrpx_b74f83833fdad017] = env->getMethodID(cls, "getCsrpx", "()D");
                mids$[mid_getCsrpxdot_b74f83833fdad017] = env->getMethodID(cls, "getCsrpxdot", "()D");
                mids$[mid_getCsrpy_b74f83833fdad017] = env->getMethodID(cls, "getCsrpy", "()D");
                mids$[mid_getCsrpydot_b74f83833fdad017] = env->getMethodID(cls, "getCsrpydot", "()D");
                mids$[mid_getCsrpz_b74f83833fdad017] = env->getMethodID(cls, "getCsrpz", "()D");
                mids$[mid_getCsrpzdot_b74f83833fdad017] = env->getMethodID(cls, "getCsrpzdot", "()D");
                mids$[mid_getCthrdrg_b74f83833fdad017] = env->getMethodID(cls, "getCthrdrg", "()D");
                mids$[mid_getCthrsrp_b74f83833fdad017] = env->getMethodID(cls, "getCthrsrp", "()D");
                mids$[mid_getCthrthr_b74f83833fdad017] = env->getMethodID(cls, "getCthrthr", "()D");
                mids$[mid_getCthrx_b74f83833fdad017] = env->getMethodID(cls, "getCthrx", "()D");
                mids$[mid_getCthrxdot_b74f83833fdad017] = env->getMethodID(cls, "getCthrxdot", "()D");
                mids$[mid_getCthry_b74f83833fdad017] = env->getMethodID(cls, "getCthry", "()D");
                mids$[mid_getCthrydot_b74f83833fdad017] = env->getMethodID(cls, "getCthrydot", "()D");
                mids$[mid_getCthrz_b74f83833fdad017] = env->getMethodID(cls, "getCthrz", "()D");
                mids$[mid_getCthrzdot_b74f83833fdad017] = env->getMethodID(cls, "getCthrzdot", "()D");
                mids$[mid_getCxdotx_b74f83833fdad017] = env->getMethodID(cls, "getCxdotx", "()D");
                mids$[mid_getCxdotxdot_b74f83833fdad017] = env->getMethodID(cls, "getCxdotxdot", "()D");
                mids$[mid_getCxdoty_b74f83833fdad017] = env->getMethodID(cls, "getCxdoty", "()D");
                mids$[mid_getCxdotz_b74f83833fdad017] = env->getMethodID(cls, "getCxdotz", "()D");
                mids$[mid_getCxx_b74f83833fdad017] = env->getMethodID(cls, "getCxx", "()D");
                mids$[mid_getCydotx_b74f83833fdad017] = env->getMethodID(cls, "getCydotx", "()D");
                mids$[mid_getCydotxdot_b74f83833fdad017] = env->getMethodID(cls, "getCydotxdot", "()D");
                mids$[mid_getCydoty_b74f83833fdad017] = env->getMethodID(cls, "getCydoty", "()D");
                mids$[mid_getCydotydot_b74f83833fdad017] = env->getMethodID(cls, "getCydotydot", "()D");
                mids$[mid_getCydotz_b74f83833fdad017] = env->getMethodID(cls, "getCydotz", "()D");
                mids$[mid_getCyx_b74f83833fdad017] = env->getMethodID(cls, "getCyx", "()D");
                mids$[mid_getCyy_b74f83833fdad017] = env->getMethodID(cls, "getCyy", "()D");
                mids$[mid_getCzdotx_b74f83833fdad017] = env->getMethodID(cls, "getCzdotx", "()D");
                mids$[mid_getCzdotxdot_b74f83833fdad017] = env->getMethodID(cls, "getCzdotxdot", "()D");
                mids$[mid_getCzdoty_b74f83833fdad017] = env->getMethodID(cls, "getCzdoty", "()D");
                mids$[mid_getCzdotydot_b74f83833fdad017] = env->getMethodID(cls, "getCzdotydot", "()D");
                mids$[mid_getCzdotz_b74f83833fdad017] = env->getMethodID(cls, "getCzdotz", "()D");
                mids$[mid_getCzdotzdot_b74f83833fdad017] = env->getMethodID(cls, "getCzdotzdot", "()D");
                mids$[mid_getCzx_b74f83833fdad017] = env->getMethodID(cls, "getCzx", "()D");
                mids$[mid_getCzy_b74f83833fdad017] = env->getMethodID(cls, "getCzy", "()D");
                mids$[mid_getCzz_b74f83833fdad017] = env->getMethodID(cls, "getCzz", "()D");
                mids$[mid_getXYZCovarianceMatrix_f77d745f2128c391] = env->getMethodID(cls, "getXYZCovarianceMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
                mids$[mid_isCovXYZset_9ab94ac1dc23b105] = env->getMethodID(cls, "isCovXYZset", "()Z");
                mids$[mid_setCdrgdrg_8ba9fe7a847cecad] = env->getMethodID(cls, "setCdrgdrg", "(D)V");
                mids$[mid_setCdrgx_8ba9fe7a847cecad] = env->getMethodID(cls, "setCdrgx", "(D)V");
                mids$[mid_setCdrgxdot_8ba9fe7a847cecad] = env->getMethodID(cls, "setCdrgxdot", "(D)V");
                mids$[mid_setCdrgy_8ba9fe7a847cecad] = env->getMethodID(cls, "setCdrgy", "(D)V");
                mids$[mid_setCdrgydot_8ba9fe7a847cecad] = env->getMethodID(cls, "setCdrgydot", "(D)V");
                mids$[mid_setCdrgz_8ba9fe7a847cecad] = env->getMethodID(cls, "setCdrgz", "(D)V");
                mids$[mid_setCdrgzdot_8ba9fe7a847cecad] = env->getMethodID(cls, "setCdrgzdot", "(D)V");
                mids$[mid_setCovarianceMatrixEntry_94fe8d9ffeb50676] = env->getMethodID(cls, "setCovarianceMatrixEntry", "(IID)V");
                mids$[mid_setCsrpdrg_8ba9fe7a847cecad] = env->getMethodID(cls, "setCsrpdrg", "(D)V");
                mids$[mid_setCsrpsrp_8ba9fe7a847cecad] = env->getMethodID(cls, "setCsrpsrp", "(D)V");
                mids$[mid_setCsrpx_8ba9fe7a847cecad] = env->getMethodID(cls, "setCsrpx", "(D)V");
                mids$[mid_setCsrpxdot_8ba9fe7a847cecad] = env->getMethodID(cls, "setCsrpxdot", "(D)V");
                mids$[mid_setCsrpy_8ba9fe7a847cecad] = env->getMethodID(cls, "setCsrpy", "(D)V");
                mids$[mid_setCsrpydot_8ba9fe7a847cecad] = env->getMethodID(cls, "setCsrpydot", "(D)V");
                mids$[mid_setCsrpz_8ba9fe7a847cecad] = env->getMethodID(cls, "setCsrpz", "(D)V");
                mids$[mid_setCsrpzdot_8ba9fe7a847cecad] = env->getMethodID(cls, "setCsrpzdot", "(D)V");
                mids$[mid_setCthrdrg_8ba9fe7a847cecad] = env->getMethodID(cls, "setCthrdrg", "(D)V");
                mids$[mid_setCthrsrp_8ba9fe7a847cecad] = env->getMethodID(cls, "setCthrsrp", "(D)V");
                mids$[mid_setCthrthr_8ba9fe7a847cecad] = env->getMethodID(cls, "setCthrthr", "(D)V");
                mids$[mid_setCthrx_8ba9fe7a847cecad] = env->getMethodID(cls, "setCthrx", "(D)V");
                mids$[mid_setCthrxdot_8ba9fe7a847cecad] = env->getMethodID(cls, "setCthrxdot", "(D)V");
                mids$[mid_setCthry_8ba9fe7a847cecad] = env->getMethodID(cls, "setCthry", "(D)V");
                mids$[mid_setCthrydot_8ba9fe7a847cecad] = env->getMethodID(cls, "setCthrydot", "(D)V");
                mids$[mid_setCthrz_8ba9fe7a847cecad] = env->getMethodID(cls, "setCthrz", "(D)V");
                mids$[mid_setCthrzdot_8ba9fe7a847cecad] = env->getMethodID(cls, "setCthrzdot", "(D)V");
                mids$[mid_setCxdotx_8ba9fe7a847cecad] = env->getMethodID(cls, "setCxdotx", "(D)V");
                mids$[mid_setCxdotxdot_8ba9fe7a847cecad] = env->getMethodID(cls, "setCxdotxdot", "(D)V");
                mids$[mid_setCxdoty_8ba9fe7a847cecad] = env->getMethodID(cls, "setCxdoty", "(D)V");
                mids$[mid_setCxdotz_8ba9fe7a847cecad] = env->getMethodID(cls, "setCxdotz", "(D)V");
                mids$[mid_setCxx_8ba9fe7a847cecad] = env->getMethodID(cls, "setCxx", "(D)V");
                mids$[mid_setCydotx_8ba9fe7a847cecad] = env->getMethodID(cls, "setCydotx", "(D)V");
                mids$[mid_setCydotxdot_8ba9fe7a847cecad] = env->getMethodID(cls, "setCydotxdot", "(D)V");
                mids$[mid_setCydoty_8ba9fe7a847cecad] = env->getMethodID(cls, "setCydoty", "(D)V");
                mids$[mid_setCydotydot_8ba9fe7a847cecad] = env->getMethodID(cls, "setCydotydot", "(D)V");
                mids$[mid_setCydotz_8ba9fe7a847cecad] = env->getMethodID(cls, "setCydotz", "(D)V");
                mids$[mid_setCyx_8ba9fe7a847cecad] = env->getMethodID(cls, "setCyx", "(D)V");
                mids$[mid_setCyy_8ba9fe7a847cecad] = env->getMethodID(cls, "setCyy", "(D)V");
                mids$[mid_setCzdotx_8ba9fe7a847cecad] = env->getMethodID(cls, "setCzdotx", "(D)V");
                mids$[mid_setCzdotxdot_8ba9fe7a847cecad] = env->getMethodID(cls, "setCzdotxdot", "(D)V");
                mids$[mid_setCzdoty_8ba9fe7a847cecad] = env->getMethodID(cls, "setCzdoty", "(D)V");
                mids$[mid_setCzdotydot_8ba9fe7a847cecad] = env->getMethodID(cls, "setCzdotydot", "(D)V");
                mids$[mid_setCzdotz_8ba9fe7a847cecad] = env->getMethodID(cls, "setCzdotz", "(D)V");
                mids$[mid_setCzdotzdot_8ba9fe7a847cecad] = env->getMethodID(cls, "setCzdotzdot", "(D)V");
                mids$[mid_setCzx_8ba9fe7a847cecad] = env->getMethodID(cls, "setCzx", "(D)V");
                mids$[mid_setCzy_8ba9fe7a847cecad] = env->getMethodID(cls, "setCzy", "(D)V");
                mids$[mid_setCzz_8ba9fe7a847cecad] = env->getMethodID(cls, "setCzz", "(D)V");
                mids$[mid_validate_8ba9fe7a847cecad] = env->getMethodID(cls, "validate", "(D)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            XYZCovariance::XYZCovariance(jboolean a0) : ::org::orekit::files::ccsds::section::CommentsContainer(env->newObject(initializeClass, &mids$, mid_init$_fcb96c98de6fad04, a0)) {}

            jdouble XYZCovariance::getCdrgdrg() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCdrgdrg_b74f83833fdad017]);
            }

            jdouble XYZCovariance::getCdrgx() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCdrgx_b74f83833fdad017]);
            }

            jdouble XYZCovariance::getCdrgxdot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCdrgxdot_b74f83833fdad017]);
            }

            jdouble XYZCovariance::getCdrgy() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCdrgy_b74f83833fdad017]);
            }

            jdouble XYZCovariance::getCdrgydot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCdrgydot_b74f83833fdad017]);
            }

            jdouble XYZCovariance::getCdrgz() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCdrgz_b74f83833fdad017]);
            }

            jdouble XYZCovariance::getCdrgzdot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCdrgzdot_b74f83833fdad017]);
            }

            jdouble XYZCovariance::getCsrpdrg() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCsrpdrg_b74f83833fdad017]);
            }

            jdouble XYZCovariance::getCsrpsrp() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCsrpsrp_b74f83833fdad017]);
            }

            jdouble XYZCovariance::getCsrpx() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCsrpx_b74f83833fdad017]);
            }

            jdouble XYZCovariance::getCsrpxdot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCsrpxdot_b74f83833fdad017]);
            }

            jdouble XYZCovariance::getCsrpy() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCsrpy_b74f83833fdad017]);
            }

            jdouble XYZCovariance::getCsrpydot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCsrpydot_b74f83833fdad017]);
            }

            jdouble XYZCovariance::getCsrpz() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCsrpz_b74f83833fdad017]);
            }

            jdouble XYZCovariance::getCsrpzdot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCsrpzdot_b74f83833fdad017]);
            }

            jdouble XYZCovariance::getCthrdrg() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCthrdrg_b74f83833fdad017]);
            }

            jdouble XYZCovariance::getCthrsrp() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCthrsrp_b74f83833fdad017]);
            }

            jdouble XYZCovariance::getCthrthr() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCthrthr_b74f83833fdad017]);
            }

            jdouble XYZCovariance::getCthrx() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCthrx_b74f83833fdad017]);
            }

            jdouble XYZCovariance::getCthrxdot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCthrxdot_b74f83833fdad017]);
            }

            jdouble XYZCovariance::getCthry() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCthry_b74f83833fdad017]);
            }

            jdouble XYZCovariance::getCthrydot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCthrydot_b74f83833fdad017]);
            }

            jdouble XYZCovariance::getCthrz() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCthrz_b74f83833fdad017]);
            }

            jdouble XYZCovariance::getCthrzdot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCthrzdot_b74f83833fdad017]);
            }

            jdouble XYZCovariance::getCxdotx() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCxdotx_b74f83833fdad017]);
            }

            jdouble XYZCovariance::getCxdotxdot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCxdotxdot_b74f83833fdad017]);
            }

            jdouble XYZCovariance::getCxdoty() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCxdoty_b74f83833fdad017]);
            }

            jdouble XYZCovariance::getCxdotz() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCxdotz_b74f83833fdad017]);
            }

            jdouble XYZCovariance::getCxx() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCxx_b74f83833fdad017]);
            }

            jdouble XYZCovariance::getCydotx() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCydotx_b74f83833fdad017]);
            }

            jdouble XYZCovariance::getCydotxdot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCydotxdot_b74f83833fdad017]);
            }

            jdouble XYZCovariance::getCydoty() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCydoty_b74f83833fdad017]);
            }

            jdouble XYZCovariance::getCydotydot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCydotydot_b74f83833fdad017]);
            }

            jdouble XYZCovariance::getCydotz() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCydotz_b74f83833fdad017]);
            }

            jdouble XYZCovariance::getCyx() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCyx_b74f83833fdad017]);
            }

            jdouble XYZCovariance::getCyy() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCyy_b74f83833fdad017]);
            }

            jdouble XYZCovariance::getCzdotx() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCzdotx_b74f83833fdad017]);
            }

            jdouble XYZCovariance::getCzdotxdot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCzdotxdot_b74f83833fdad017]);
            }

            jdouble XYZCovariance::getCzdoty() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCzdoty_b74f83833fdad017]);
            }

            jdouble XYZCovariance::getCzdotydot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCzdotydot_b74f83833fdad017]);
            }

            jdouble XYZCovariance::getCzdotz() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCzdotz_b74f83833fdad017]);
            }

            jdouble XYZCovariance::getCzdotzdot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCzdotzdot_b74f83833fdad017]);
            }

            jdouble XYZCovariance::getCzx() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCzx_b74f83833fdad017]);
            }

            jdouble XYZCovariance::getCzy() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCzy_b74f83833fdad017]);
            }

            jdouble XYZCovariance::getCzz() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCzz_b74f83833fdad017]);
            }

            ::org::hipparchus::linear::RealMatrix XYZCovariance::getXYZCovarianceMatrix() const
            {
              return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getXYZCovarianceMatrix_f77d745f2128c391]));
            }

            jboolean XYZCovariance::isCovXYZset() const
            {
              return env->callBooleanMethod(this$, mids$[mid_isCovXYZset_9ab94ac1dc23b105]);
            }

            void XYZCovariance::setCdrgdrg(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCdrgdrg_8ba9fe7a847cecad], a0);
            }

            void XYZCovariance::setCdrgx(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCdrgx_8ba9fe7a847cecad], a0);
            }

            void XYZCovariance::setCdrgxdot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCdrgxdot_8ba9fe7a847cecad], a0);
            }

            void XYZCovariance::setCdrgy(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCdrgy_8ba9fe7a847cecad], a0);
            }

            void XYZCovariance::setCdrgydot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCdrgydot_8ba9fe7a847cecad], a0);
            }

            void XYZCovariance::setCdrgz(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCdrgz_8ba9fe7a847cecad], a0);
            }

            void XYZCovariance::setCdrgzdot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCdrgzdot_8ba9fe7a847cecad], a0);
            }

            void XYZCovariance::setCovarianceMatrixEntry(jint a0, jint a1, jdouble a2) const
            {
              env->callVoidMethod(this$, mids$[mid_setCovarianceMatrixEntry_94fe8d9ffeb50676], a0, a1, a2);
            }

            void XYZCovariance::setCsrpdrg(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCsrpdrg_8ba9fe7a847cecad], a0);
            }

            void XYZCovariance::setCsrpsrp(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCsrpsrp_8ba9fe7a847cecad], a0);
            }

            void XYZCovariance::setCsrpx(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCsrpx_8ba9fe7a847cecad], a0);
            }

            void XYZCovariance::setCsrpxdot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCsrpxdot_8ba9fe7a847cecad], a0);
            }

            void XYZCovariance::setCsrpy(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCsrpy_8ba9fe7a847cecad], a0);
            }

            void XYZCovariance::setCsrpydot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCsrpydot_8ba9fe7a847cecad], a0);
            }

            void XYZCovariance::setCsrpz(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCsrpz_8ba9fe7a847cecad], a0);
            }

            void XYZCovariance::setCsrpzdot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCsrpzdot_8ba9fe7a847cecad], a0);
            }

            void XYZCovariance::setCthrdrg(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCthrdrg_8ba9fe7a847cecad], a0);
            }

            void XYZCovariance::setCthrsrp(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCthrsrp_8ba9fe7a847cecad], a0);
            }

            void XYZCovariance::setCthrthr(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCthrthr_8ba9fe7a847cecad], a0);
            }

            void XYZCovariance::setCthrx(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCthrx_8ba9fe7a847cecad], a0);
            }

            void XYZCovariance::setCthrxdot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCthrxdot_8ba9fe7a847cecad], a0);
            }

            void XYZCovariance::setCthry(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCthry_8ba9fe7a847cecad], a0);
            }

            void XYZCovariance::setCthrydot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCthrydot_8ba9fe7a847cecad], a0);
            }

            void XYZCovariance::setCthrz(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCthrz_8ba9fe7a847cecad], a0);
            }

            void XYZCovariance::setCthrzdot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCthrzdot_8ba9fe7a847cecad], a0);
            }

            void XYZCovariance::setCxdotx(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCxdotx_8ba9fe7a847cecad], a0);
            }

            void XYZCovariance::setCxdotxdot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCxdotxdot_8ba9fe7a847cecad], a0);
            }

            void XYZCovariance::setCxdoty(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCxdoty_8ba9fe7a847cecad], a0);
            }

            void XYZCovariance::setCxdotz(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCxdotz_8ba9fe7a847cecad], a0);
            }

            void XYZCovariance::setCxx(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCxx_8ba9fe7a847cecad], a0);
            }

            void XYZCovariance::setCydotx(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCydotx_8ba9fe7a847cecad], a0);
            }

            void XYZCovariance::setCydotxdot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCydotxdot_8ba9fe7a847cecad], a0);
            }

            void XYZCovariance::setCydoty(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCydoty_8ba9fe7a847cecad], a0);
            }

            void XYZCovariance::setCydotydot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCydotydot_8ba9fe7a847cecad], a0);
            }

            void XYZCovariance::setCydotz(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCydotz_8ba9fe7a847cecad], a0);
            }

            void XYZCovariance::setCyx(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCyx_8ba9fe7a847cecad], a0);
            }

            void XYZCovariance::setCyy(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCyy_8ba9fe7a847cecad], a0);
            }

            void XYZCovariance::setCzdotx(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCzdotx_8ba9fe7a847cecad], a0);
            }

            void XYZCovariance::setCzdotxdot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCzdotxdot_8ba9fe7a847cecad], a0);
            }

            void XYZCovariance::setCzdoty(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCzdoty_8ba9fe7a847cecad], a0);
            }

            void XYZCovariance::setCzdotydot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCzdotydot_8ba9fe7a847cecad], a0);
            }

            void XYZCovariance::setCzdotz(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCzdotz_8ba9fe7a847cecad], a0);
            }

            void XYZCovariance::setCzdotzdot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCzdotzdot_8ba9fe7a847cecad], a0);
            }

            void XYZCovariance::setCzx(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCzx_8ba9fe7a847cecad], a0);
            }

            void XYZCovariance::setCzy(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCzy_8ba9fe7a847cecad], a0);
            }

            void XYZCovariance::setCzz(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCzz_8ba9fe7a847cecad], a0);
            }

            void XYZCovariance::validate(jdouble a0) const
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
            static PyObject *t_XYZCovariance_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_XYZCovariance_instance_(PyTypeObject *type, PyObject *arg);
            static int t_XYZCovariance_init_(t_XYZCovariance *self, PyObject *args, PyObject *kwds);
            static PyObject *t_XYZCovariance_getCdrgdrg(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCdrgx(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCdrgxdot(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCdrgy(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCdrgydot(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCdrgz(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCdrgzdot(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCsrpdrg(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCsrpsrp(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCsrpx(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCsrpxdot(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCsrpy(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCsrpydot(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCsrpz(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCsrpzdot(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCthrdrg(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCthrsrp(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCthrthr(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCthrx(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCthrxdot(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCthry(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCthrydot(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCthrz(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCthrzdot(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCxdotx(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCxdotxdot(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCxdoty(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCxdotz(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCxx(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCydotx(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCydotxdot(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCydoty(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCydotydot(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCydotz(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCyx(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCyy(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCzdotx(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCzdotxdot(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCzdoty(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCzdotydot(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCzdotz(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCzdotzdot(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCzx(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCzy(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCzz(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getXYZCovarianceMatrix(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_isCovXYZset(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_setCdrgdrg(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCdrgx(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCdrgxdot(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCdrgy(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCdrgydot(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCdrgz(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCdrgzdot(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCovarianceMatrixEntry(t_XYZCovariance *self, PyObject *args);
            static PyObject *t_XYZCovariance_setCsrpdrg(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCsrpsrp(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCsrpx(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCsrpxdot(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCsrpy(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCsrpydot(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCsrpz(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCsrpzdot(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCthrdrg(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCthrsrp(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCthrthr(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCthrx(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCthrxdot(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCthry(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCthrydot(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCthrz(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCthrzdot(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCxdotx(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCxdotxdot(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCxdoty(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCxdotz(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCxx(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCydotx(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCydotxdot(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCydoty(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCydotydot(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCydotz(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCyx(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCyy(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCzdotx(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCzdotxdot(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCzdoty(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCzdotydot(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCzdotz(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCzdotzdot(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCzx(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCzy(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCzz(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_validate(t_XYZCovariance *self, PyObject *args);
            static PyObject *t_XYZCovariance_get__cdrgdrg(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__cdrgdrg(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__cdrgx(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__cdrgx(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__cdrgxdot(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__cdrgxdot(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__cdrgy(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__cdrgy(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__cdrgydot(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__cdrgydot(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__cdrgz(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__cdrgz(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__cdrgzdot(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__cdrgzdot(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__covXYZset(t_XYZCovariance *self, void *data);
            static PyObject *t_XYZCovariance_get__csrpdrg(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__csrpdrg(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__csrpsrp(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__csrpsrp(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__csrpx(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__csrpx(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__csrpxdot(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__csrpxdot(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__csrpy(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__csrpy(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__csrpydot(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__csrpydot(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__csrpz(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__csrpz(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__csrpzdot(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__csrpzdot(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__cthrdrg(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__cthrdrg(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__cthrsrp(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__cthrsrp(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__cthrthr(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__cthrthr(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__cthrx(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__cthrx(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__cthrxdot(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__cthrxdot(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__cthry(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__cthry(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__cthrydot(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__cthrydot(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__cthrz(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__cthrz(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__cthrzdot(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__cthrzdot(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__cxdotx(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__cxdotx(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__cxdotxdot(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__cxdotxdot(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__cxdoty(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__cxdoty(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__cxdotz(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__cxdotz(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__cxx(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__cxx(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__cydotx(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__cydotx(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__cydotxdot(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__cydotxdot(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__cydoty(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__cydoty(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__cydotydot(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__cydotydot(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__cydotz(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__cydotz(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__cyx(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__cyx(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__cyy(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__cyy(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__czdotx(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__czdotx(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__czdotxdot(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__czdotxdot(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__czdoty(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__czdoty(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__czdotydot(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__czdotydot(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__czdotz(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__czdotz(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__czdotzdot(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__czdotzdot(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__czx(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__czx(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__czy(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__czy(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__czz(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__czz(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__xYZCovarianceMatrix(t_XYZCovariance *self, void *data);
            static PyGetSetDef t_XYZCovariance__fields_[] = {
              DECLARE_GETSET_FIELD(t_XYZCovariance, cdrgdrg),
              DECLARE_GETSET_FIELD(t_XYZCovariance, cdrgx),
              DECLARE_GETSET_FIELD(t_XYZCovariance, cdrgxdot),
              DECLARE_GETSET_FIELD(t_XYZCovariance, cdrgy),
              DECLARE_GETSET_FIELD(t_XYZCovariance, cdrgydot),
              DECLARE_GETSET_FIELD(t_XYZCovariance, cdrgz),
              DECLARE_GETSET_FIELD(t_XYZCovariance, cdrgzdot),
              DECLARE_GET_FIELD(t_XYZCovariance, covXYZset),
              DECLARE_GETSET_FIELD(t_XYZCovariance, csrpdrg),
              DECLARE_GETSET_FIELD(t_XYZCovariance, csrpsrp),
              DECLARE_GETSET_FIELD(t_XYZCovariance, csrpx),
              DECLARE_GETSET_FIELD(t_XYZCovariance, csrpxdot),
              DECLARE_GETSET_FIELD(t_XYZCovariance, csrpy),
              DECLARE_GETSET_FIELD(t_XYZCovariance, csrpydot),
              DECLARE_GETSET_FIELD(t_XYZCovariance, csrpz),
              DECLARE_GETSET_FIELD(t_XYZCovariance, csrpzdot),
              DECLARE_GETSET_FIELD(t_XYZCovariance, cthrdrg),
              DECLARE_GETSET_FIELD(t_XYZCovariance, cthrsrp),
              DECLARE_GETSET_FIELD(t_XYZCovariance, cthrthr),
              DECLARE_GETSET_FIELD(t_XYZCovariance, cthrx),
              DECLARE_GETSET_FIELD(t_XYZCovariance, cthrxdot),
              DECLARE_GETSET_FIELD(t_XYZCovariance, cthry),
              DECLARE_GETSET_FIELD(t_XYZCovariance, cthrydot),
              DECLARE_GETSET_FIELD(t_XYZCovariance, cthrz),
              DECLARE_GETSET_FIELD(t_XYZCovariance, cthrzdot),
              DECLARE_GETSET_FIELD(t_XYZCovariance, cxdotx),
              DECLARE_GETSET_FIELD(t_XYZCovariance, cxdotxdot),
              DECLARE_GETSET_FIELD(t_XYZCovariance, cxdoty),
              DECLARE_GETSET_FIELD(t_XYZCovariance, cxdotz),
              DECLARE_GETSET_FIELD(t_XYZCovariance, cxx),
              DECLARE_GETSET_FIELD(t_XYZCovariance, cydotx),
              DECLARE_GETSET_FIELD(t_XYZCovariance, cydotxdot),
              DECLARE_GETSET_FIELD(t_XYZCovariance, cydoty),
              DECLARE_GETSET_FIELD(t_XYZCovariance, cydotydot),
              DECLARE_GETSET_FIELD(t_XYZCovariance, cydotz),
              DECLARE_GETSET_FIELD(t_XYZCovariance, cyx),
              DECLARE_GETSET_FIELD(t_XYZCovariance, cyy),
              DECLARE_GETSET_FIELD(t_XYZCovariance, czdotx),
              DECLARE_GETSET_FIELD(t_XYZCovariance, czdotxdot),
              DECLARE_GETSET_FIELD(t_XYZCovariance, czdoty),
              DECLARE_GETSET_FIELD(t_XYZCovariance, czdotydot),
              DECLARE_GETSET_FIELD(t_XYZCovariance, czdotz),
              DECLARE_GETSET_FIELD(t_XYZCovariance, czdotzdot),
              DECLARE_GETSET_FIELD(t_XYZCovariance, czx),
              DECLARE_GETSET_FIELD(t_XYZCovariance, czy),
              DECLARE_GETSET_FIELD(t_XYZCovariance, czz),
              DECLARE_GET_FIELD(t_XYZCovariance, xYZCovarianceMatrix),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_XYZCovariance__methods_[] = {
              DECLARE_METHOD(t_XYZCovariance, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_XYZCovariance, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_XYZCovariance, getCdrgdrg, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCdrgx, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCdrgxdot, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCdrgy, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCdrgydot, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCdrgz, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCdrgzdot, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCsrpdrg, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCsrpsrp, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCsrpx, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCsrpxdot, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCsrpy, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCsrpydot, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCsrpz, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCsrpzdot, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCthrdrg, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCthrsrp, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCthrthr, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCthrx, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCthrxdot, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCthry, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCthrydot, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCthrz, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCthrzdot, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCxdotx, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCxdotxdot, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCxdoty, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCxdotz, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCxx, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCydotx, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCydotxdot, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCydoty, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCydotydot, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCydotz, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCyx, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCyy, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCzdotx, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCzdotxdot, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCzdoty, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCzdotydot, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCzdotz, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCzdotzdot, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCzx, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCzy, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCzz, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getXYZCovarianceMatrix, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, isCovXYZset, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, setCdrgdrg, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCdrgx, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCdrgxdot, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCdrgy, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCdrgydot, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCdrgz, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCdrgzdot, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCovarianceMatrixEntry, METH_VARARGS),
              DECLARE_METHOD(t_XYZCovariance, setCsrpdrg, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCsrpsrp, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCsrpx, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCsrpxdot, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCsrpy, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCsrpydot, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCsrpz, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCsrpzdot, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCthrdrg, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCthrsrp, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCthrthr, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCthrx, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCthrxdot, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCthry, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCthrydot, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCthrz, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCthrzdot, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCxdotx, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCxdotxdot, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCxdoty, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCxdotz, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCxx, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCydotx, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCydotxdot, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCydoty, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCydotydot, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCydotz, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCyx, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCyy, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCzdotx, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCzdotxdot, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCzdoty, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCzdotydot, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCzdotz, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCzdotzdot, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCzx, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCzy, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCzz, METH_O),
              DECLARE_METHOD(t_XYZCovariance, validate, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(XYZCovariance)[] = {
              { Py_tp_methods, t_XYZCovariance__methods_ },
              { Py_tp_init, (void *) t_XYZCovariance_init_ },
              { Py_tp_getset, t_XYZCovariance__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(XYZCovariance)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::section::CommentsContainer),
              NULL
            };

            DEFINE_TYPE(XYZCovariance, t_XYZCovariance, XYZCovariance);

            void t_XYZCovariance::install(PyObject *module)
            {
              installType(&PY_TYPE(XYZCovariance), &PY_TYPE_DEF(XYZCovariance), module, "XYZCovariance", 0);
            }

            void t_XYZCovariance::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovariance), "class_", make_descriptor(XYZCovariance::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovariance), "wrapfn_", make_descriptor(t_XYZCovariance::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovariance), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_XYZCovariance_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, XYZCovariance::initializeClass, 1)))
                return NULL;
              return t_XYZCovariance::wrap_Object(XYZCovariance(((t_XYZCovariance *) arg)->object.this$));
            }
            static PyObject *t_XYZCovariance_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, XYZCovariance::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_XYZCovariance_init_(t_XYZCovariance *self, PyObject *args, PyObject *kwds)
            {
              jboolean a0;
              XYZCovariance object((jobject) NULL);

              if (!parseArgs(args, "Z", &a0))
              {
                INT_CALL(object = XYZCovariance(a0));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_XYZCovariance_getCdrgdrg(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCdrgdrg());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCdrgx(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCdrgx());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCdrgxdot(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCdrgxdot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCdrgy(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCdrgy());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCdrgydot(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCdrgydot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCdrgz(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCdrgz());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCdrgzdot(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCdrgzdot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCsrpdrg(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCsrpdrg());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCsrpsrp(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCsrpsrp());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCsrpx(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCsrpx());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCsrpxdot(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCsrpxdot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCsrpy(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCsrpy());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCsrpydot(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCsrpydot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCsrpz(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCsrpz());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCsrpzdot(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCsrpzdot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCthrdrg(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCthrdrg());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCthrsrp(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCthrsrp());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCthrthr(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCthrthr());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCthrx(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCthrx());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCthrxdot(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCthrxdot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCthry(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCthry());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCthrydot(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCthrydot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCthrz(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCthrz());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCthrzdot(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCthrzdot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCxdotx(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCxdotx());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCxdotxdot(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCxdotxdot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCxdoty(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCxdoty());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCxdotz(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCxdotz());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCxx(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCxx());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCydotx(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCydotx());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCydotxdot(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCydotxdot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCydoty(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCydoty());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCydotydot(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCydotydot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCydotz(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCydotz());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCyx(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCyx());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCyy(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCyy());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCzdotx(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCzdotx());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCzdotxdot(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCzdotxdot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCzdoty(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCzdoty());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCzdotydot(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCzdotydot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCzdotz(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCzdotz());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCzdotzdot(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCzdotzdot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCzx(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCzx());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCzy(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCzy());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCzz(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCzz());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getXYZCovarianceMatrix(t_XYZCovariance *self)
            {
              ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
              OBJ_CALL(result = self->object.getXYZCovarianceMatrix());
              return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
            }

            static PyObject *t_XYZCovariance_isCovXYZset(t_XYZCovariance *self)
            {
              jboolean result;
              OBJ_CALL(result = self->object.isCovXYZset());
              Py_RETURN_BOOL(result);
            }

            static PyObject *t_XYZCovariance_setCdrgdrg(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCdrgdrg(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCdrgdrg", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCdrgx(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCdrgx(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCdrgx", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCdrgxdot(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCdrgxdot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCdrgxdot", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCdrgy(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCdrgy(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCdrgy", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCdrgydot(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCdrgydot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCdrgydot", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCdrgz(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCdrgz(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCdrgz", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCdrgzdot(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCdrgzdot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCdrgzdot", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCovarianceMatrixEntry(t_XYZCovariance *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jdouble a2;

              if (!parseArgs(args, "IID", &a0, &a1, &a2))
              {
                OBJ_CALL(self->object.setCovarianceMatrixEntry(a0, a1, a2));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCovarianceMatrixEntry", args);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCsrpdrg(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCsrpdrg(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCsrpdrg", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCsrpsrp(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCsrpsrp(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCsrpsrp", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCsrpx(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCsrpx(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCsrpx", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCsrpxdot(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCsrpxdot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCsrpxdot", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCsrpy(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCsrpy(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCsrpy", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCsrpydot(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCsrpydot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCsrpydot", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCsrpz(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCsrpz(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCsrpz", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCsrpzdot(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCsrpzdot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCsrpzdot", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCthrdrg(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCthrdrg(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCthrdrg", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCthrsrp(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCthrsrp(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCthrsrp", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCthrthr(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCthrthr(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCthrthr", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCthrx(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCthrx(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCthrx", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCthrxdot(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCthrxdot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCthrxdot", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCthry(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCthry(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCthry", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCthrydot(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCthrydot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCthrydot", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCthrz(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCthrz(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCthrz", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCthrzdot(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCthrzdot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCthrzdot", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCxdotx(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCxdotx(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCxdotx", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCxdotxdot(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCxdotxdot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCxdotxdot", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCxdoty(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCxdoty(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCxdoty", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCxdotz(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCxdotz(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCxdotz", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCxx(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCxx(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCxx", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCydotx(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCydotx(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCydotx", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCydotxdot(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCydotxdot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCydotxdot", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCydoty(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCydoty(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCydoty", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCydotydot(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCydotydot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCydotydot", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCydotz(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCydotz(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCydotz", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCyx(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCyx(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCyx", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCyy(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCyy(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCyy", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCzdotx(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCzdotx(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCzdotx", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCzdotxdot(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCzdotxdot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCzdotxdot", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCzdoty(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCzdoty(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCzdoty", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCzdotydot(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCzdotydot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCzdotydot", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCzdotz(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCzdotz(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCzdotz", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCzdotzdot(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCzdotzdot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCzdotzdot", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCzx(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCzx(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCzx", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCzy(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCzy(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCzy", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCzz(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCzz(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCzz", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_validate(t_XYZCovariance *self, PyObject *args)
            {
              jdouble a0;

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(self->object.validate(a0));
                Py_RETURN_NONE;
              }

              return callSuper(PY_TYPE(XYZCovariance), (PyObject *) self, "validate", args, 2);
            }

            static PyObject *t_XYZCovariance_get__cdrgdrg(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCdrgdrg());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__cdrgdrg(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCdrgdrg(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cdrgdrg", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__cdrgx(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCdrgx());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__cdrgx(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCdrgx(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cdrgx", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__cdrgxdot(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCdrgxdot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__cdrgxdot(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCdrgxdot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cdrgxdot", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__cdrgy(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCdrgy());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__cdrgy(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCdrgy(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cdrgy", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__cdrgydot(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCdrgydot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__cdrgydot(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCdrgydot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cdrgydot", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__cdrgz(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCdrgz());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__cdrgz(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCdrgz(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cdrgz", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__cdrgzdot(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCdrgzdot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__cdrgzdot(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCdrgzdot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cdrgzdot", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__covXYZset(t_XYZCovariance *self, void *data)
            {
              jboolean value;
              OBJ_CALL(value = self->object.isCovXYZset());
              Py_RETURN_BOOL(value);
            }

            static PyObject *t_XYZCovariance_get__csrpdrg(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCsrpdrg());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__csrpdrg(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCsrpdrg(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "csrpdrg", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__csrpsrp(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCsrpsrp());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__csrpsrp(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCsrpsrp(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "csrpsrp", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__csrpx(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCsrpx());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__csrpx(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCsrpx(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "csrpx", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__csrpxdot(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCsrpxdot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__csrpxdot(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCsrpxdot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "csrpxdot", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__csrpy(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCsrpy());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__csrpy(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCsrpy(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "csrpy", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__csrpydot(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCsrpydot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__csrpydot(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCsrpydot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "csrpydot", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__csrpz(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCsrpz());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__csrpz(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCsrpz(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "csrpz", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__csrpzdot(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCsrpzdot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__csrpzdot(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCsrpzdot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "csrpzdot", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__cthrdrg(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCthrdrg());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__cthrdrg(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCthrdrg(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cthrdrg", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__cthrsrp(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCthrsrp());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__cthrsrp(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCthrsrp(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cthrsrp", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__cthrthr(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCthrthr());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__cthrthr(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCthrthr(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cthrthr", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__cthrx(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCthrx());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__cthrx(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCthrx(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cthrx", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__cthrxdot(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCthrxdot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__cthrxdot(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCthrxdot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cthrxdot", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__cthry(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCthry());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__cthry(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCthry(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cthry", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__cthrydot(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCthrydot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__cthrydot(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCthrydot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cthrydot", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__cthrz(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCthrz());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__cthrz(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCthrz(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cthrz", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__cthrzdot(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCthrzdot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__cthrzdot(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCthrzdot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cthrzdot", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__cxdotx(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCxdotx());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__cxdotx(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCxdotx(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cxdotx", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__cxdotxdot(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCxdotxdot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__cxdotxdot(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCxdotxdot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cxdotxdot", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__cxdoty(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCxdoty());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__cxdoty(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCxdoty(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cxdoty", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__cxdotz(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCxdotz());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__cxdotz(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCxdotz(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cxdotz", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__cxx(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCxx());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__cxx(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCxx(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cxx", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__cydotx(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCydotx());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__cydotx(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCydotx(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cydotx", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__cydotxdot(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCydotxdot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__cydotxdot(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCydotxdot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cydotxdot", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__cydoty(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCydoty());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__cydoty(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCydoty(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cydoty", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__cydotydot(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCydotydot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__cydotydot(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCydotydot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cydotydot", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__cydotz(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCydotz());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__cydotz(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCydotz(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cydotz", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__cyx(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCyx());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__cyx(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCyx(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cyx", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__cyy(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCyy());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__cyy(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCyy(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cyy", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__czdotx(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCzdotx());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__czdotx(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCzdotx(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "czdotx", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__czdotxdot(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCzdotxdot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__czdotxdot(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCzdotxdot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "czdotxdot", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__czdoty(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCzdoty());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__czdoty(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCzdoty(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "czdoty", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__czdotydot(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCzdotydot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__czdotydot(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCzdotydot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "czdotydot", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__czdotz(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCzdotz());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__czdotz(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCzdotz(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "czdotz", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__czdotzdot(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCzdotzdot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__czdotzdot(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCzdotzdot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "czdotzdot", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__czx(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCzx());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__czx(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCzx(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "czx", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__czy(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCzy());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__czy(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCzy(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "czy", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__czz(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCzz());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__czz(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCzz(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "czz", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__xYZCovarianceMatrix(t_XYZCovariance *self, void *data)
            {
              ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
              OBJ_CALL(value = self->object.getXYZCovarianceMatrix());
              return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/function/Cosh.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Cosh::class$ = NULL;
        jmethodID *Cosh::mids$ = NULL;
        bool Cosh::live$ = false;

        jclass Cosh::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Cosh");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_04fd0666b613d2ab] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_a5332de4d4d64b08] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Cosh::Cosh() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        jdouble Cosh::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_04fd0666b613d2ab], a0);
        }

        ::org::hipparchus::analysis::differentiation::Derivative Cosh::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
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
        static PyObject *t_Cosh_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Cosh_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Cosh_init_(t_Cosh *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Cosh_value(t_Cosh *self, PyObject *args);

        static PyMethodDef t_Cosh__methods_[] = {
          DECLARE_METHOD(t_Cosh, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Cosh, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Cosh, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Cosh)[] = {
          { Py_tp_methods, t_Cosh__methods_ },
          { Py_tp_init, (void *) t_Cosh_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Cosh)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Cosh, t_Cosh, Cosh);

        void t_Cosh::install(PyObject *module)
        {
          installType(&PY_TYPE(Cosh), &PY_TYPE_DEF(Cosh), module, "Cosh", 0);
        }

        void t_Cosh::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Cosh), "class_", make_descriptor(Cosh::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Cosh), "wrapfn_", make_descriptor(t_Cosh::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Cosh), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Cosh_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Cosh::initializeClass, 1)))
            return NULL;
          return t_Cosh::wrap_Object(Cosh(((t_Cosh *) arg)->object.this$));
        }
        static PyObject *t_Cosh_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Cosh::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Cosh_init_(t_Cosh *self, PyObject *args, PyObject *kwds)
        {
          Cosh object((jobject) NULL);

          INT_CALL(object = Cosh());
          self->object = object;

          return 0;
        }

        static PyObject *t_Cosh_value(t_Cosh *self, PyObject *args)
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
#include "org/orekit/utils/AccurateFormatter.h"
#include "java/util/Locale.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *AccurateFormatter::class$ = NULL;
      jmethodID *AccurateFormatter::mids$ = NULL;
      bool AccurateFormatter::live$ = false;
      ::java::util::Locale *AccurateFormatter::STANDARDIZED_LOCALE = NULL;

      jclass AccurateFormatter::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/AccurateFormatter");

          mids$ = new jmethodID[max_mid];
          mids$[mid_format_11ae2994efd15504] = env->getStaticMethodID(cls, "format", "(D)Ljava/lang/String;");
          mids$[mid_format_a97dc068e719c14c] = env->getStaticMethodID(cls, "format", "(IIIIID)Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          STANDARDIZED_LOCALE = new ::java::util::Locale(env->getStaticObjectField(cls, "STANDARDIZED_LOCALE", "Ljava/util/Locale;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::String AccurateFormatter::format(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_format_11ae2994efd15504], a0));
      }

      ::java::lang::String AccurateFormatter::format(jint a0, jint a1, jint a2, jint a3, jint a4, jdouble a5)
      {
        jclass cls = env->getClass(initializeClass);
        return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_format_a97dc068e719c14c], a0, a1, a2, a3, a4, a5));
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
      static PyObject *t_AccurateFormatter_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AccurateFormatter_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AccurateFormatter_format(PyTypeObject *type, PyObject *args);

      static PyMethodDef t_AccurateFormatter__methods_[] = {
        DECLARE_METHOD(t_AccurateFormatter, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AccurateFormatter, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AccurateFormatter, format, METH_VARARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AccurateFormatter)[] = {
        { Py_tp_methods, t_AccurateFormatter__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AccurateFormatter)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(AccurateFormatter, t_AccurateFormatter, AccurateFormatter);

      void t_AccurateFormatter::install(PyObject *module)
      {
        installType(&PY_TYPE(AccurateFormatter), &PY_TYPE_DEF(AccurateFormatter), module, "AccurateFormatter", 0);
      }

      void t_AccurateFormatter::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AccurateFormatter), "class_", make_descriptor(AccurateFormatter::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AccurateFormatter), "wrapfn_", make_descriptor(t_AccurateFormatter::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AccurateFormatter), "boxfn_", make_descriptor(boxObject));
        env->getClass(AccurateFormatter::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(AccurateFormatter), "STANDARDIZED_LOCALE", make_descriptor(::java::util::t_Locale::wrap_Object(*AccurateFormatter::STANDARDIZED_LOCALE)));
      }

      static PyObject *t_AccurateFormatter_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AccurateFormatter::initializeClass, 1)))
          return NULL;
        return t_AccurateFormatter::wrap_Object(AccurateFormatter(((t_AccurateFormatter *) arg)->object.this$));
      }
      static PyObject *t_AccurateFormatter_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AccurateFormatter::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_AccurateFormatter_format(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::orekit::utils::AccurateFormatter::format(a0));
              return j2p(result);
            }
          }
          break;
         case 6:
          {
            jint a0;
            jint a1;
            jint a2;
            jint a3;
            jint a4;
            jdouble a5;
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, "IIIIID", &a0, &a1, &a2, &a3, &a4, &a5))
            {
              OBJ_CALL(result = ::org::orekit::utils::AccurateFormatter::format(a0, a1, a2, a3, a4, a5));
              return j2p(result);
            }
          }
        }

        PyErr_SetArgsError(type, "format", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/util/IterationListener.h"
#include "java/lang/Class.h"
#include "org/hipparchus/util/IterationEvent.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *IterationListener::class$ = NULL;
      jmethodID *IterationListener::mids$ = NULL;
      bool IterationListener::live$ = false;

      jclass IterationListener::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/IterationListener");

          mids$ = new jmethodID[max_mid];
          mids$[mid_initializationPerformed_28fca0f2afbc79c2] = env->getMethodID(cls, "initializationPerformed", "(Lorg/hipparchus/util/IterationEvent;)V");
          mids$[mid_iterationPerformed_28fca0f2afbc79c2] = env->getMethodID(cls, "iterationPerformed", "(Lorg/hipparchus/util/IterationEvent;)V");
          mids$[mid_iterationStarted_28fca0f2afbc79c2] = env->getMethodID(cls, "iterationStarted", "(Lorg/hipparchus/util/IterationEvent;)V");
          mids$[mid_terminationPerformed_28fca0f2afbc79c2] = env->getMethodID(cls, "terminationPerformed", "(Lorg/hipparchus/util/IterationEvent;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      void IterationListener::initializationPerformed(const ::org::hipparchus::util::IterationEvent & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_initializationPerformed_28fca0f2afbc79c2], a0.this$);
      }

      void IterationListener::iterationPerformed(const ::org::hipparchus::util::IterationEvent & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_iterationPerformed_28fca0f2afbc79c2], a0.this$);
      }

      void IterationListener::iterationStarted(const ::org::hipparchus::util::IterationEvent & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_iterationStarted_28fca0f2afbc79c2], a0.this$);
      }

      void IterationListener::terminationPerformed(const ::org::hipparchus::util::IterationEvent & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_terminationPerformed_28fca0f2afbc79c2], a0.this$);
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
      static PyObject *t_IterationListener_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_IterationListener_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_IterationListener_initializationPerformed(t_IterationListener *self, PyObject *arg);
      static PyObject *t_IterationListener_iterationPerformed(t_IterationListener *self, PyObject *arg);
      static PyObject *t_IterationListener_iterationStarted(t_IterationListener *self, PyObject *arg);
      static PyObject *t_IterationListener_terminationPerformed(t_IterationListener *self, PyObject *arg);

      static PyMethodDef t_IterationListener__methods_[] = {
        DECLARE_METHOD(t_IterationListener, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_IterationListener, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_IterationListener, initializationPerformed, METH_O),
        DECLARE_METHOD(t_IterationListener, iterationPerformed, METH_O),
        DECLARE_METHOD(t_IterationListener, iterationStarted, METH_O),
        DECLARE_METHOD(t_IterationListener, terminationPerformed, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(IterationListener)[] = {
        { Py_tp_methods, t_IterationListener__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(IterationListener)[] = {
        &PY_TYPE_DEF(::java::util::EventListener),
        NULL
      };

      DEFINE_TYPE(IterationListener, t_IterationListener, IterationListener);

      void t_IterationListener::install(PyObject *module)
      {
        installType(&PY_TYPE(IterationListener), &PY_TYPE_DEF(IterationListener), module, "IterationListener", 0);
      }

      void t_IterationListener::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(IterationListener), "class_", make_descriptor(IterationListener::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(IterationListener), "wrapfn_", make_descriptor(t_IterationListener::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(IterationListener), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_IterationListener_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, IterationListener::initializeClass, 1)))
          return NULL;
        return t_IterationListener::wrap_Object(IterationListener(((t_IterationListener *) arg)->object.this$));
      }
      static PyObject *t_IterationListener_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, IterationListener::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_IterationListener_initializationPerformed(t_IterationListener *self, PyObject *arg)
      {
        ::org::hipparchus::util::IterationEvent a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::util::IterationEvent::initializeClass, &a0))
        {
          OBJ_CALL(self->object.initializationPerformed(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "initializationPerformed", arg);
        return NULL;
      }

      static PyObject *t_IterationListener_iterationPerformed(t_IterationListener *self, PyObject *arg)
      {
        ::org::hipparchus::util::IterationEvent a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::util::IterationEvent::initializeClass, &a0))
        {
          OBJ_CALL(self->object.iterationPerformed(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "iterationPerformed", arg);
        return NULL;
      }

      static PyObject *t_IterationListener_iterationStarted(t_IterationListener *self, PyObject *arg)
      {
        ::org::hipparchus::util::IterationEvent a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::util::IterationEvent::initializeClass, &a0))
        {
          OBJ_CALL(self->object.iterationStarted(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "iterationStarted", arg);
        return NULL;
      }

      static PyObject *t_IterationListener_terminationPerformed(t_IterationListener *self, PyObject *arg)
      {
        ::org::hipparchus::util::IterationEvent a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::util::IterationEvent::initializeClass, &a0))
        {
          OBJ_CALL(self->object.terminationPerformed(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "terminationPerformed", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/Perturbations.h"
#include "java/util/List.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/ShadowModel.h"
#include "org/orekit/bodies/CelestialBodies.h"
#include "org/orekit/files/ccsds/definitions/BodyFacade.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *Perturbations::class$ = NULL;
              jmethodID *Perturbations::mids$ = NULL;
              bool Perturbations::live$ = false;

              jclass Perturbations::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/Perturbations");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_5579464231259e1b] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/CelestialBodies;)V");
                  mids$[mid_getAlbedoGridSize_55546ef6a647f39b] = env->getMethodID(cls, "getAlbedoGridSize", "()I");
                  mids$[mid_getAlbedoModel_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getAlbedoModel", "()Ljava/lang/String;");
                  mids$[mid_getAtmosphericModel_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getAtmosphericModel", "()Ljava/lang/String;");
                  mids$[mid_getCentralBodyRotation_b74f83833fdad017] = env->getMethodID(cls, "getCentralBodyRotation", "()D");
                  mids$[mid_getEquatorialRadius_b74f83833fdad017] = env->getMethodID(cls, "getEquatorialRadius", "()D");
                  mids$[mid_getFixedF10P7_b74f83833fdad017] = env->getMethodID(cls, "getFixedF10P7", "()D");
                  mids$[mid_getFixedF10P7Mean_b74f83833fdad017] = env->getMethodID(cls, "getFixedF10P7Mean", "()D");
                  mids$[mid_getFixedGeomagneticAp_b74f83833fdad017] = env->getMethodID(cls, "getFixedGeomagneticAp", "()D");
                  mids$[mid_getFixedGeomagneticDst_b74f83833fdad017] = env->getMethodID(cls, "getFixedGeomagneticDst", "()D");
                  mids$[mid_getFixedGeomagneticKp_b74f83833fdad017] = env->getMethodID(cls, "getFixedGeomagneticKp", "()D");
                  mids$[mid_getFixedM10P7_b74f83833fdad017] = env->getMethodID(cls, "getFixedM10P7", "()D");
                  mids$[mid_getFixedM10P7Mean_b74f83833fdad017] = env->getMethodID(cls, "getFixedM10P7Mean", "()D");
                  mids$[mid_getFixedS10P7_b74f83833fdad017] = env->getMethodID(cls, "getFixedS10P7", "()D");
                  mids$[mid_getFixedS10P7Mean_b74f83833fdad017] = env->getMethodID(cls, "getFixedS10P7Mean", "()D");
                  mids$[mid_getFixedY10P7_b74f83833fdad017] = env->getMethodID(cls, "getFixedY10P7", "()D");
                  mids$[mid_getFixedY10P7Mean_b74f83833fdad017] = env->getMethodID(cls, "getFixedY10P7Mean", "()D");
                  mids$[mid_getGm_b74f83833fdad017] = env->getMethodID(cls, "getGm", "()D");
                  mids$[mid_getGravityDegree_55546ef6a647f39b] = env->getMethodID(cls, "getGravityDegree", "()I");
                  mids$[mid_getGravityModel_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getGravityModel", "()Ljava/lang/String;");
                  mids$[mid_getGravityOrder_55546ef6a647f39b] = env->getMethodID(cls, "getGravityOrder", "()I");
                  mids$[mid_getInterpMethodSW_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getInterpMethodSW", "()Ljava/lang/String;");
                  mids$[mid_getNBodyPerturbations_e62d3bb06d56d7e3] = env->getMethodID(cls, "getNBodyPerturbations", "()Ljava/util/List;");
                  mids$[mid_getOblateFlattening_b74f83833fdad017] = env->getMethodID(cls, "getOblateFlattening", "()D");
                  mids$[mid_getOceanTidesModel_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getOceanTidesModel", "()Ljava/lang/String;");
                  mids$[mid_getReductionTheory_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getReductionTheory", "()Ljava/lang/String;");
                  mids$[mid_getShadowBodies_e62d3bb06d56d7e3] = env->getMethodID(cls, "getShadowBodies", "()Ljava/util/List;");
                  mids$[mid_getShadowModel_e58e74e83bbfd14a] = env->getMethodID(cls, "getShadowModel", "()Lorg/orekit/files/ccsds/ndm/odm/ocm/ShadowModel;");
                  mids$[mid_getSolidTidesModel_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getSolidTidesModel", "()Ljava/lang/String;");
                  mids$[mid_getSpaceWeatherEpoch_c325492395d89b24] = env->getMethodID(cls, "getSpaceWeatherEpoch", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getSpaceWeatherSource_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getSpaceWeatherSource", "()Ljava/lang/String;");
                  mids$[mid_getSrpModel_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getSrpModel", "()Ljava/lang/String;");
                  mids$[mid_setAlbedoGridSize_44ed599e93e8a30c] = env->getMethodID(cls, "setAlbedoGridSize", "(I)V");
                  mids$[mid_setAlbedoModel_734b91ac30d5f9b4] = env->getMethodID(cls, "setAlbedoModel", "(Ljava/lang/String;)V");
                  mids$[mid_setAtmosphericModel_734b91ac30d5f9b4] = env->getMethodID(cls, "setAtmosphericModel", "(Ljava/lang/String;)V");
                  mids$[mid_setCentralBodyRotation_8ba9fe7a847cecad] = env->getMethodID(cls, "setCentralBodyRotation", "(D)V");
                  mids$[mid_setEquatorialRadius_8ba9fe7a847cecad] = env->getMethodID(cls, "setEquatorialRadius", "(D)V");
                  mids$[mid_setFixedF10P7_8ba9fe7a847cecad] = env->getMethodID(cls, "setFixedF10P7", "(D)V");
                  mids$[mid_setFixedF10P7Mean_8ba9fe7a847cecad] = env->getMethodID(cls, "setFixedF10P7Mean", "(D)V");
                  mids$[mid_setFixedGeomagneticAp_8ba9fe7a847cecad] = env->getMethodID(cls, "setFixedGeomagneticAp", "(D)V");
                  mids$[mid_setFixedGeomagneticDst_8ba9fe7a847cecad] = env->getMethodID(cls, "setFixedGeomagneticDst", "(D)V");
                  mids$[mid_setFixedGeomagneticKp_8ba9fe7a847cecad] = env->getMethodID(cls, "setFixedGeomagneticKp", "(D)V");
                  mids$[mid_setFixedM10P7_8ba9fe7a847cecad] = env->getMethodID(cls, "setFixedM10P7", "(D)V");
                  mids$[mid_setFixedM10P7Mean_8ba9fe7a847cecad] = env->getMethodID(cls, "setFixedM10P7Mean", "(D)V");
                  mids$[mid_setFixedS10P7_8ba9fe7a847cecad] = env->getMethodID(cls, "setFixedS10P7", "(D)V");
                  mids$[mid_setFixedS10P7Mean_8ba9fe7a847cecad] = env->getMethodID(cls, "setFixedS10P7Mean", "(D)V");
                  mids$[mid_setFixedY10P7_8ba9fe7a847cecad] = env->getMethodID(cls, "setFixedY10P7", "(D)V");
                  mids$[mid_setFixedY10P7Mean_8ba9fe7a847cecad] = env->getMethodID(cls, "setFixedY10P7Mean", "(D)V");
                  mids$[mid_setGm_8ba9fe7a847cecad] = env->getMethodID(cls, "setGm", "(D)V");
                  mids$[mid_setGravityModel_eb74d6dc93e0751e] = env->getMethodID(cls, "setGravityModel", "(Ljava/lang/String;II)V");
                  mids$[mid_setInterpMethodSW_734b91ac30d5f9b4] = env->getMethodID(cls, "setInterpMethodSW", "(Ljava/lang/String;)V");
                  mids$[mid_setNBodyPerturbations_0e7c3032c7c93ed3] = env->getMethodID(cls, "setNBodyPerturbations", "(Ljava/util/List;)V");
                  mids$[mid_setOblateFlattening_8ba9fe7a847cecad] = env->getMethodID(cls, "setOblateFlattening", "(D)V");
                  mids$[mid_setOceanTidesModel_734b91ac30d5f9b4] = env->getMethodID(cls, "setOceanTidesModel", "(Ljava/lang/String;)V");
                  mids$[mid_setReductionTheory_734b91ac30d5f9b4] = env->getMethodID(cls, "setReductionTheory", "(Ljava/lang/String;)V");
                  mids$[mid_setShadowBodies_0e7c3032c7c93ed3] = env->getMethodID(cls, "setShadowBodies", "(Ljava/util/List;)V");
                  mids$[mid_setShadowModel_ccf2e19d6cc0caa6] = env->getMethodID(cls, "setShadowModel", "(Lorg/orekit/files/ccsds/ndm/odm/ocm/ShadowModel;)V");
                  mids$[mid_setSolidTidesModel_734b91ac30d5f9b4] = env->getMethodID(cls, "setSolidTidesModel", "(Ljava/lang/String;)V");
                  mids$[mid_setSpaceWeatherEpoch_02135a6ef25adb4b] = env->getMethodID(cls, "setSpaceWeatherEpoch", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_setSpaceWeatherSource_734b91ac30d5f9b4] = env->getMethodID(cls, "setSpaceWeatherSource", "(Ljava/lang/String;)V");
                  mids$[mid_setSrpModel_734b91ac30d5f9b4] = env->getMethodID(cls, "setSrpModel", "(Ljava/lang/String;)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Perturbations::Perturbations(const ::org::orekit::bodies::CelestialBodies & a0) : ::org::orekit::files::ccsds::section::CommentsContainer(env->newObject(initializeClass, &mids$, mid_init$_5579464231259e1b, a0.this$)) {}

              jint Perturbations::getAlbedoGridSize() const
              {
                return env->callIntMethod(this$, mids$[mid_getAlbedoGridSize_55546ef6a647f39b]);
              }

              ::java::lang::String Perturbations::getAlbedoModel() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getAlbedoModel_1c1fa1e935d6cdcf]));
              }

              ::java::lang::String Perturbations::getAtmosphericModel() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getAtmosphericModel_1c1fa1e935d6cdcf]));
              }

              jdouble Perturbations::getCentralBodyRotation() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getCentralBodyRotation_b74f83833fdad017]);
              }

              jdouble Perturbations::getEquatorialRadius() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getEquatorialRadius_b74f83833fdad017]);
              }

              jdouble Perturbations::getFixedF10P7() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getFixedF10P7_b74f83833fdad017]);
              }

              jdouble Perturbations::getFixedF10P7Mean() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getFixedF10P7Mean_b74f83833fdad017]);
              }

              jdouble Perturbations::getFixedGeomagneticAp() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getFixedGeomagneticAp_b74f83833fdad017]);
              }

              jdouble Perturbations::getFixedGeomagneticDst() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getFixedGeomagneticDst_b74f83833fdad017]);
              }

              jdouble Perturbations::getFixedGeomagneticKp() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getFixedGeomagneticKp_b74f83833fdad017]);
              }

              jdouble Perturbations::getFixedM10P7() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getFixedM10P7_b74f83833fdad017]);
              }

              jdouble Perturbations::getFixedM10P7Mean() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getFixedM10P7Mean_b74f83833fdad017]);
              }

              jdouble Perturbations::getFixedS10P7() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getFixedS10P7_b74f83833fdad017]);
              }

              jdouble Perturbations::getFixedS10P7Mean() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getFixedS10P7Mean_b74f83833fdad017]);
              }

              jdouble Perturbations::getFixedY10P7() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getFixedY10P7_b74f83833fdad017]);
              }

              jdouble Perturbations::getFixedY10P7Mean() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getFixedY10P7Mean_b74f83833fdad017]);
              }

              jdouble Perturbations::getGm() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getGm_b74f83833fdad017]);
              }

              jint Perturbations::getGravityDegree() const
              {
                return env->callIntMethod(this$, mids$[mid_getGravityDegree_55546ef6a647f39b]);
              }

              ::java::lang::String Perturbations::getGravityModel() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getGravityModel_1c1fa1e935d6cdcf]));
              }

              jint Perturbations::getGravityOrder() const
              {
                return env->callIntMethod(this$, mids$[mid_getGravityOrder_55546ef6a647f39b]);
              }

              ::java::lang::String Perturbations::getInterpMethodSW() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getInterpMethodSW_1c1fa1e935d6cdcf]));
              }

              ::java::util::List Perturbations::getNBodyPerturbations() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getNBodyPerturbations_e62d3bb06d56d7e3]));
              }

              jdouble Perturbations::getOblateFlattening() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getOblateFlattening_b74f83833fdad017]);
              }

              ::java::lang::String Perturbations::getOceanTidesModel() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getOceanTidesModel_1c1fa1e935d6cdcf]));
              }

              ::java::lang::String Perturbations::getReductionTheory() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getReductionTheory_1c1fa1e935d6cdcf]));
              }

              ::java::util::List Perturbations::getShadowBodies() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getShadowBodies_e62d3bb06d56d7e3]));
              }

              ::org::orekit::files::ccsds::ndm::odm::ocm::ShadowModel Perturbations::getShadowModel() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::ocm::ShadowModel(env->callObjectMethod(this$, mids$[mid_getShadowModel_e58e74e83bbfd14a]));
              }

              ::java::lang::String Perturbations::getSolidTidesModel() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSolidTidesModel_1c1fa1e935d6cdcf]));
              }

              ::org::orekit::time::AbsoluteDate Perturbations::getSpaceWeatherEpoch() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getSpaceWeatherEpoch_c325492395d89b24]));
              }

              ::java::lang::String Perturbations::getSpaceWeatherSource() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSpaceWeatherSource_1c1fa1e935d6cdcf]));
              }

              ::java::lang::String Perturbations::getSrpModel() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSrpModel_1c1fa1e935d6cdcf]));
              }

              void Perturbations::setAlbedoGridSize(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setAlbedoGridSize_44ed599e93e8a30c], a0);
              }

              void Perturbations::setAlbedoModel(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setAlbedoModel_734b91ac30d5f9b4], a0.this$);
              }

              void Perturbations::setAtmosphericModel(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setAtmosphericModel_734b91ac30d5f9b4], a0.this$);
              }

              void Perturbations::setCentralBodyRotation(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setCentralBodyRotation_8ba9fe7a847cecad], a0);
              }

              void Perturbations::setEquatorialRadius(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setEquatorialRadius_8ba9fe7a847cecad], a0);
              }

              void Perturbations::setFixedF10P7(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setFixedF10P7_8ba9fe7a847cecad], a0);
              }

              void Perturbations::setFixedF10P7Mean(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setFixedF10P7Mean_8ba9fe7a847cecad], a0);
              }

              void Perturbations::setFixedGeomagneticAp(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setFixedGeomagneticAp_8ba9fe7a847cecad], a0);
              }

              void Perturbations::setFixedGeomagneticDst(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setFixedGeomagneticDst_8ba9fe7a847cecad], a0);
              }

              void Perturbations::setFixedGeomagneticKp(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setFixedGeomagneticKp_8ba9fe7a847cecad], a0);
              }

              void Perturbations::setFixedM10P7(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setFixedM10P7_8ba9fe7a847cecad], a0);
              }

              void Perturbations::setFixedM10P7Mean(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setFixedM10P7Mean_8ba9fe7a847cecad], a0);
              }

              void Perturbations::setFixedS10P7(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setFixedS10P7_8ba9fe7a847cecad], a0);
              }

              void Perturbations::setFixedS10P7Mean(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setFixedS10P7Mean_8ba9fe7a847cecad], a0);
              }

              void Perturbations::setFixedY10P7(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setFixedY10P7_8ba9fe7a847cecad], a0);
              }

              void Perturbations::setFixedY10P7Mean(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setFixedY10P7Mean_8ba9fe7a847cecad], a0);
              }

              void Perturbations::setGm(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setGm_8ba9fe7a847cecad], a0);
              }

              void Perturbations::setGravityModel(const ::java::lang::String & a0, jint a1, jint a2) const
              {
                env->callVoidMethod(this$, mids$[mid_setGravityModel_eb74d6dc93e0751e], a0.this$, a1, a2);
              }

              void Perturbations::setInterpMethodSW(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setInterpMethodSW_734b91ac30d5f9b4], a0.this$);
              }

              void Perturbations::setNBodyPerturbations(const ::java::util::List & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setNBodyPerturbations_0e7c3032c7c93ed3], a0.this$);
              }

              void Perturbations::setOblateFlattening(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setOblateFlattening_8ba9fe7a847cecad], a0);
              }

              void Perturbations::setOceanTidesModel(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setOceanTidesModel_734b91ac30d5f9b4], a0.this$);
              }

              void Perturbations::setReductionTheory(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setReductionTheory_734b91ac30d5f9b4], a0.this$);
              }

              void Perturbations::setShadowBodies(const ::java::util::List & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setShadowBodies_0e7c3032c7c93ed3], a0.this$);
              }

              void Perturbations::setShadowModel(const ::org::orekit::files::ccsds::ndm::odm::ocm::ShadowModel & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setShadowModel_ccf2e19d6cc0caa6], a0.this$);
              }

              void Perturbations::setSolidTidesModel(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSolidTidesModel_734b91ac30d5f9b4], a0.this$);
              }

              void Perturbations::setSpaceWeatherEpoch(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSpaceWeatherEpoch_02135a6ef25adb4b], a0.this$);
              }

              void Perturbations::setSpaceWeatherSource(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSpaceWeatherSource_734b91ac30d5f9b4], a0.this$);
              }

              void Perturbations::setSrpModel(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSrpModel_734b91ac30d5f9b4], a0.this$);
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
              static PyObject *t_Perturbations_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Perturbations_instance_(PyTypeObject *type, PyObject *arg);
              static int t_Perturbations_init_(t_Perturbations *self, PyObject *args, PyObject *kwds);
              static PyObject *t_Perturbations_getAlbedoGridSize(t_Perturbations *self);
              static PyObject *t_Perturbations_getAlbedoModel(t_Perturbations *self);
              static PyObject *t_Perturbations_getAtmosphericModel(t_Perturbations *self);
              static PyObject *t_Perturbations_getCentralBodyRotation(t_Perturbations *self);
              static PyObject *t_Perturbations_getEquatorialRadius(t_Perturbations *self);
              static PyObject *t_Perturbations_getFixedF10P7(t_Perturbations *self);
              static PyObject *t_Perturbations_getFixedF10P7Mean(t_Perturbations *self);
              static PyObject *t_Perturbations_getFixedGeomagneticAp(t_Perturbations *self);
              static PyObject *t_Perturbations_getFixedGeomagneticDst(t_Perturbations *self);
              static PyObject *t_Perturbations_getFixedGeomagneticKp(t_Perturbations *self);
              static PyObject *t_Perturbations_getFixedM10P7(t_Perturbations *self);
              static PyObject *t_Perturbations_getFixedM10P7Mean(t_Perturbations *self);
              static PyObject *t_Perturbations_getFixedS10P7(t_Perturbations *self);
              static PyObject *t_Perturbations_getFixedS10P7Mean(t_Perturbations *self);
              static PyObject *t_Perturbations_getFixedY10P7(t_Perturbations *self);
              static PyObject *t_Perturbations_getFixedY10P7Mean(t_Perturbations *self);
              static PyObject *t_Perturbations_getGm(t_Perturbations *self);
              static PyObject *t_Perturbations_getGravityDegree(t_Perturbations *self);
              static PyObject *t_Perturbations_getGravityModel(t_Perturbations *self);
              static PyObject *t_Perturbations_getGravityOrder(t_Perturbations *self);
              static PyObject *t_Perturbations_getInterpMethodSW(t_Perturbations *self);
              static PyObject *t_Perturbations_getNBodyPerturbations(t_Perturbations *self);
              static PyObject *t_Perturbations_getOblateFlattening(t_Perturbations *self);
              static PyObject *t_Perturbations_getOceanTidesModel(t_Perturbations *self);
              static PyObject *t_Perturbations_getReductionTheory(t_Perturbations *self);
              static PyObject *t_Perturbations_getShadowBodies(t_Perturbations *self);
              static PyObject *t_Perturbations_getShadowModel(t_Perturbations *self);
              static PyObject *t_Perturbations_getSolidTidesModel(t_Perturbations *self);
              static PyObject *t_Perturbations_getSpaceWeatherEpoch(t_Perturbations *self);
              static PyObject *t_Perturbations_getSpaceWeatherSource(t_Perturbations *self);
              static PyObject *t_Perturbations_getSrpModel(t_Perturbations *self);
              static PyObject *t_Perturbations_setAlbedoGridSize(t_Perturbations *self, PyObject *arg);
              static PyObject *t_Perturbations_setAlbedoModel(t_Perturbations *self, PyObject *arg);
              static PyObject *t_Perturbations_setAtmosphericModel(t_Perturbations *self, PyObject *arg);
              static PyObject *t_Perturbations_setCentralBodyRotation(t_Perturbations *self, PyObject *arg);
              static PyObject *t_Perturbations_setEquatorialRadius(t_Perturbations *self, PyObject *arg);
              static PyObject *t_Perturbations_setFixedF10P7(t_Perturbations *self, PyObject *arg);
              static PyObject *t_Perturbations_setFixedF10P7Mean(t_Perturbations *self, PyObject *arg);
              static PyObject *t_Perturbations_setFixedGeomagneticAp(t_Perturbations *self, PyObject *arg);
              static PyObject *t_Perturbations_setFixedGeomagneticDst(t_Perturbations *self, PyObject *arg);
              static PyObject *t_Perturbations_setFixedGeomagneticKp(t_Perturbations *self, PyObject *arg);
              static PyObject *t_Perturbations_setFixedM10P7(t_Perturbations *self, PyObject *arg);
              static PyObject *t_Perturbations_setFixedM10P7Mean(t_Perturbations *self, PyObject *arg);
              static PyObject *t_Perturbations_setFixedS10P7(t_Perturbations *self, PyObject *arg);
              static PyObject *t_Perturbations_setFixedS10P7Mean(t_Perturbations *self, PyObject *arg);
              static PyObject *t_Perturbations_setFixedY10P7(t_Perturbations *self, PyObject *arg);
              static PyObject *t_Perturbations_setFixedY10P7Mean(t_Perturbations *self, PyObject *arg);
              static PyObject *t_Perturbations_setGm(t_Perturbations *self, PyObject *arg);
              static PyObject *t_Perturbations_setGravityModel(t_Perturbations *self, PyObject *args);
              static PyObject *t_Perturbations_setInterpMethodSW(t_Perturbations *self, PyObject *arg);
              static PyObject *t_Perturbations_setNBodyPerturbations(t_Perturbations *self, PyObject *arg);
              static PyObject *t_Perturbations_setOblateFlattening(t_Perturbations *self, PyObject *arg);
              static PyObject *t_Perturbations_setOceanTidesModel(t_Perturbations *self, PyObject *arg);
              static PyObject *t_Perturbations_setReductionTheory(t_Perturbations *self, PyObject *arg);
              static PyObject *t_Perturbations_setShadowBodies(t_Perturbations *self, PyObject *arg);
              static PyObject *t_Perturbations_setShadowModel(t_Perturbations *self, PyObject *arg);
              static PyObject *t_Perturbations_setSolidTidesModel(t_Perturbations *self, PyObject *arg);
              static PyObject *t_Perturbations_setSpaceWeatherEpoch(t_Perturbations *self, PyObject *arg);
              static PyObject *t_Perturbations_setSpaceWeatherSource(t_Perturbations *self, PyObject *arg);
              static PyObject *t_Perturbations_setSrpModel(t_Perturbations *self, PyObject *arg);
              static PyObject *t_Perturbations_get__albedoGridSize(t_Perturbations *self, void *data);
              static int t_Perturbations_set__albedoGridSize(t_Perturbations *self, PyObject *arg, void *data);
              static PyObject *t_Perturbations_get__albedoModel(t_Perturbations *self, void *data);
              static int t_Perturbations_set__albedoModel(t_Perturbations *self, PyObject *arg, void *data);
              static PyObject *t_Perturbations_get__atmosphericModel(t_Perturbations *self, void *data);
              static int t_Perturbations_set__atmosphericModel(t_Perturbations *self, PyObject *arg, void *data);
              static PyObject *t_Perturbations_get__centralBodyRotation(t_Perturbations *self, void *data);
              static int t_Perturbations_set__centralBodyRotation(t_Perturbations *self, PyObject *arg, void *data);
              static PyObject *t_Perturbations_get__equatorialRadius(t_Perturbations *self, void *data);
              static int t_Perturbations_set__equatorialRadius(t_Perturbations *self, PyObject *arg, void *data);
              static PyObject *t_Perturbations_get__fixedF10P7(t_Perturbations *self, void *data);
              static int t_Perturbations_set__fixedF10P7(t_Perturbations *self, PyObject *arg, void *data);
              static PyObject *t_Perturbations_get__fixedF10P7Mean(t_Perturbations *self, void *data);
              static int t_Perturbations_set__fixedF10P7Mean(t_Perturbations *self, PyObject *arg, void *data);
              static PyObject *t_Perturbations_get__fixedGeomagneticAp(t_Perturbations *self, void *data);
              static int t_Perturbations_set__fixedGeomagneticAp(t_Perturbations *self, PyObject *arg, void *data);
              static PyObject *t_Perturbations_get__fixedGeomagneticDst(t_Perturbations *self, void *data);
              static int t_Perturbations_set__fixedGeomagneticDst(t_Perturbations *self, PyObject *arg, void *data);
              static PyObject *t_Perturbations_get__fixedGeomagneticKp(t_Perturbations *self, void *data);
              static int t_Perturbations_set__fixedGeomagneticKp(t_Perturbations *self, PyObject *arg, void *data);
              static PyObject *t_Perturbations_get__fixedM10P7(t_Perturbations *self, void *data);
              static int t_Perturbations_set__fixedM10P7(t_Perturbations *self, PyObject *arg, void *data);
              static PyObject *t_Perturbations_get__fixedM10P7Mean(t_Perturbations *self, void *data);
              static int t_Perturbations_set__fixedM10P7Mean(t_Perturbations *self, PyObject *arg, void *data);
              static PyObject *t_Perturbations_get__fixedS10P7(t_Perturbations *self, void *data);
              static int t_Perturbations_set__fixedS10P7(t_Perturbations *self, PyObject *arg, void *data);
              static PyObject *t_Perturbations_get__fixedS10P7Mean(t_Perturbations *self, void *data);
              static int t_Perturbations_set__fixedS10P7Mean(t_Perturbations *self, PyObject *arg, void *data);
              static PyObject *t_Perturbations_get__fixedY10P7(t_Perturbations *self, void *data);
              static int t_Perturbations_set__fixedY10P7(t_Perturbations *self, PyObject *arg, void *data);
              static PyObject *t_Perturbations_get__fixedY10P7Mean(t_Perturbations *self, void *data);
              static int t_Perturbations_set__fixedY10P7Mean(t_Perturbations *self, PyObject *arg, void *data);
              static PyObject *t_Perturbations_get__gm(t_Perturbations *self, void *data);
              static int t_Perturbations_set__gm(t_Perturbations *self, PyObject *arg, void *data);
              static PyObject *t_Perturbations_get__gravityDegree(t_Perturbations *self, void *data);
              static PyObject *t_Perturbations_get__gravityModel(t_Perturbations *self, void *data);
              static PyObject *t_Perturbations_get__gravityOrder(t_Perturbations *self, void *data);
              static PyObject *t_Perturbations_get__interpMethodSW(t_Perturbations *self, void *data);
              static int t_Perturbations_set__interpMethodSW(t_Perturbations *self, PyObject *arg, void *data);
              static PyObject *t_Perturbations_get__nBodyPerturbations(t_Perturbations *self, void *data);
              static int t_Perturbations_set__nBodyPerturbations(t_Perturbations *self, PyObject *arg, void *data);
              static PyObject *t_Perturbations_get__oblateFlattening(t_Perturbations *self, void *data);
              static int t_Perturbations_set__oblateFlattening(t_Perturbations *self, PyObject *arg, void *data);
              static PyObject *t_Perturbations_get__oceanTidesModel(t_Perturbations *self, void *data);
              static int t_Perturbations_set__oceanTidesModel(t_Perturbations *self, PyObject *arg, void *data);
              static PyObject *t_Perturbations_get__reductionTheory(t_Perturbations *self, void *data);
              static int t_Perturbations_set__reductionTheory(t_Perturbations *self, PyObject *arg, void *data);
              static PyObject *t_Perturbations_get__shadowBodies(t_Perturbations *self, void *data);
              static int t_Perturbations_set__shadowBodies(t_Perturbations *self, PyObject *arg, void *data);
              static PyObject *t_Perturbations_get__shadowModel(t_Perturbations *self, void *data);
              static int t_Perturbations_set__shadowModel(t_Perturbations *self, PyObject *arg, void *data);
              static PyObject *t_Perturbations_get__solidTidesModel(t_Perturbations *self, void *data);
              static int t_Perturbations_set__solidTidesModel(t_Perturbations *self, PyObject *arg, void *data);
              static PyObject *t_Perturbations_get__spaceWeatherEpoch(t_Perturbations *self, void *data);
              static int t_Perturbations_set__spaceWeatherEpoch(t_Perturbations *self, PyObject *arg, void *data);
              static PyObject *t_Perturbations_get__spaceWeatherSource(t_Perturbations *self, void *data);
              static int t_Perturbations_set__spaceWeatherSource(t_Perturbations *self, PyObject *arg, void *data);
              static PyObject *t_Perturbations_get__srpModel(t_Perturbations *self, void *data);
              static int t_Perturbations_set__srpModel(t_Perturbations *self, PyObject *arg, void *data);
              static PyGetSetDef t_Perturbations__fields_[] = {
                DECLARE_GETSET_FIELD(t_Perturbations, albedoGridSize),
                DECLARE_GETSET_FIELD(t_Perturbations, albedoModel),
                DECLARE_GETSET_FIELD(t_Perturbations, atmosphericModel),
                DECLARE_GETSET_FIELD(t_Perturbations, centralBodyRotation),
                DECLARE_GETSET_FIELD(t_Perturbations, equatorialRadius),
                DECLARE_GETSET_FIELD(t_Perturbations, fixedF10P7),
                DECLARE_GETSET_FIELD(t_Perturbations, fixedF10P7Mean),
                DECLARE_GETSET_FIELD(t_Perturbations, fixedGeomagneticAp),
                DECLARE_GETSET_FIELD(t_Perturbations, fixedGeomagneticDst),
                DECLARE_GETSET_FIELD(t_Perturbations, fixedGeomagneticKp),
                DECLARE_GETSET_FIELD(t_Perturbations, fixedM10P7),
                DECLARE_GETSET_FIELD(t_Perturbations, fixedM10P7Mean),
                DECLARE_GETSET_FIELD(t_Perturbations, fixedS10P7),
                DECLARE_GETSET_FIELD(t_Perturbations, fixedS10P7Mean),
                DECLARE_GETSET_FIELD(t_Perturbations, fixedY10P7),
                DECLARE_GETSET_FIELD(t_Perturbations, fixedY10P7Mean),
                DECLARE_GETSET_FIELD(t_Perturbations, gm),
                DECLARE_GET_FIELD(t_Perturbations, gravityDegree),
                DECLARE_GET_FIELD(t_Perturbations, gravityModel),
                DECLARE_GET_FIELD(t_Perturbations, gravityOrder),
                DECLARE_GETSET_FIELD(t_Perturbations, interpMethodSW),
                DECLARE_GETSET_FIELD(t_Perturbations, nBodyPerturbations),
                DECLARE_GETSET_FIELD(t_Perturbations, oblateFlattening),
                DECLARE_GETSET_FIELD(t_Perturbations, oceanTidesModel),
                DECLARE_GETSET_FIELD(t_Perturbations, reductionTheory),
                DECLARE_GETSET_FIELD(t_Perturbations, shadowBodies),
                DECLARE_GETSET_FIELD(t_Perturbations, shadowModel),
                DECLARE_GETSET_FIELD(t_Perturbations, solidTidesModel),
                DECLARE_GETSET_FIELD(t_Perturbations, spaceWeatherEpoch),
                DECLARE_GETSET_FIELD(t_Perturbations, spaceWeatherSource),
                DECLARE_GETSET_FIELD(t_Perturbations, srpModel),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_Perturbations__methods_[] = {
                DECLARE_METHOD(t_Perturbations, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Perturbations, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Perturbations, getAlbedoGridSize, METH_NOARGS),
                DECLARE_METHOD(t_Perturbations, getAlbedoModel, METH_NOARGS),
                DECLARE_METHOD(t_Perturbations, getAtmosphericModel, METH_NOARGS),
                DECLARE_METHOD(t_Perturbations, getCentralBodyRotation, METH_NOARGS),
                DECLARE_METHOD(t_Perturbations, getEquatorialRadius, METH_NOARGS),
                DECLARE_METHOD(t_Perturbations, getFixedF10P7, METH_NOARGS),
                DECLARE_METHOD(t_Perturbations, getFixedF10P7Mean, METH_NOARGS),
                DECLARE_METHOD(t_Perturbations, getFixedGeomagneticAp, METH_NOARGS),
                DECLARE_METHOD(t_Perturbations, getFixedGeomagneticDst, METH_NOARGS),
                DECLARE_METHOD(t_Perturbations, getFixedGeomagneticKp, METH_NOARGS),
                DECLARE_METHOD(t_Perturbations, getFixedM10P7, METH_NOARGS),
                DECLARE_METHOD(t_Perturbations, getFixedM10P7Mean, METH_NOARGS),
                DECLARE_METHOD(t_Perturbations, getFixedS10P7, METH_NOARGS),
                DECLARE_METHOD(t_Perturbations, getFixedS10P7Mean, METH_NOARGS),
                DECLARE_METHOD(t_Perturbations, getFixedY10P7, METH_NOARGS),
                DECLARE_METHOD(t_Perturbations, getFixedY10P7Mean, METH_NOARGS),
                DECLARE_METHOD(t_Perturbations, getGm, METH_NOARGS),
                DECLARE_METHOD(t_Perturbations, getGravityDegree, METH_NOARGS),
                DECLARE_METHOD(t_Perturbations, getGravityModel, METH_NOARGS),
                DECLARE_METHOD(t_Perturbations, getGravityOrder, METH_NOARGS),
                DECLARE_METHOD(t_Perturbations, getInterpMethodSW, METH_NOARGS),
                DECLARE_METHOD(t_Perturbations, getNBodyPerturbations, METH_NOARGS),
                DECLARE_METHOD(t_Perturbations, getOblateFlattening, METH_NOARGS),
                DECLARE_METHOD(t_Perturbations, getOceanTidesModel, METH_NOARGS),
                DECLARE_METHOD(t_Perturbations, getReductionTheory, METH_NOARGS),
                DECLARE_METHOD(t_Perturbations, getShadowBodies, METH_NOARGS),
                DECLARE_METHOD(t_Perturbations, getShadowModel, METH_NOARGS),
                DECLARE_METHOD(t_Perturbations, getSolidTidesModel, METH_NOARGS),
                DECLARE_METHOD(t_Perturbations, getSpaceWeatherEpoch, METH_NOARGS),
                DECLARE_METHOD(t_Perturbations, getSpaceWeatherSource, METH_NOARGS),
                DECLARE_METHOD(t_Perturbations, getSrpModel, METH_NOARGS),
                DECLARE_METHOD(t_Perturbations, setAlbedoGridSize, METH_O),
                DECLARE_METHOD(t_Perturbations, setAlbedoModel, METH_O),
                DECLARE_METHOD(t_Perturbations, setAtmosphericModel, METH_O),
                DECLARE_METHOD(t_Perturbations, setCentralBodyRotation, METH_O),
                DECLARE_METHOD(t_Perturbations, setEquatorialRadius, METH_O),
                DECLARE_METHOD(t_Perturbations, setFixedF10P7, METH_O),
                DECLARE_METHOD(t_Perturbations, setFixedF10P7Mean, METH_O),
                DECLARE_METHOD(t_Perturbations, setFixedGeomagneticAp, METH_O),
                DECLARE_METHOD(t_Perturbations, setFixedGeomagneticDst, METH_O),
                DECLARE_METHOD(t_Perturbations, setFixedGeomagneticKp, METH_O),
                DECLARE_METHOD(t_Perturbations, setFixedM10P7, METH_O),
                DECLARE_METHOD(t_Perturbations, setFixedM10P7Mean, METH_O),
                DECLARE_METHOD(t_Perturbations, setFixedS10P7, METH_O),
                DECLARE_METHOD(t_Perturbations, setFixedS10P7Mean, METH_O),
                DECLARE_METHOD(t_Perturbations, setFixedY10P7, METH_O),
                DECLARE_METHOD(t_Perturbations, setFixedY10P7Mean, METH_O),
                DECLARE_METHOD(t_Perturbations, setGm, METH_O),
                DECLARE_METHOD(t_Perturbations, setGravityModel, METH_VARARGS),
                DECLARE_METHOD(t_Perturbations, setInterpMethodSW, METH_O),
                DECLARE_METHOD(t_Perturbations, setNBodyPerturbations, METH_O),
                DECLARE_METHOD(t_Perturbations, setOblateFlattening, METH_O),
                DECLARE_METHOD(t_Perturbations, setOceanTidesModel, METH_O),
                DECLARE_METHOD(t_Perturbations, setReductionTheory, METH_O),
                DECLARE_METHOD(t_Perturbations, setShadowBodies, METH_O),
                DECLARE_METHOD(t_Perturbations, setShadowModel, METH_O),
                DECLARE_METHOD(t_Perturbations, setSolidTidesModel, METH_O),
                DECLARE_METHOD(t_Perturbations, setSpaceWeatherEpoch, METH_O),
                DECLARE_METHOD(t_Perturbations, setSpaceWeatherSource, METH_O),
                DECLARE_METHOD(t_Perturbations, setSrpModel, METH_O),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(Perturbations)[] = {
                { Py_tp_methods, t_Perturbations__methods_ },
                { Py_tp_init, (void *) t_Perturbations_init_ },
                { Py_tp_getset, t_Perturbations__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(Perturbations)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::section::CommentsContainer),
                NULL
              };

              DEFINE_TYPE(Perturbations, t_Perturbations, Perturbations);

              void t_Perturbations::install(PyObject *module)
              {
                installType(&PY_TYPE(Perturbations), &PY_TYPE_DEF(Perturbations), module, "Perturbations", 0);
              }

              void t_Perturbations::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(Perturbations), "class_", make_descriptor(Perturbations::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Perturbations), "wrapfn_", make_descriptor(t_Perturbations::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Perturbations), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_Perturbations_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, Perturbations::initializeClass, 1)))
                  return NULL;
                return t_Perturbations::wrap_Object(Perturbations(((t_Perturbations *) arg)->object.this$));
              }
              static PyObject *t_Perturbations_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, Perturbations::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_Perturbations_init_(t_Perturbations *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::bodies::CelestialBodies a0((jobject) NULL);
                Perturbations object((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::bodies::CelestialBodies::initializeClass, &a0))
                {
                  INT_CALL(object = Perturbations(a0));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_Perturbations_getAlbedoGridSize(t_Perturbations *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getAlbedoGridSize());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_Perturbations_getAlbedoModel(t_Perturbations *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getAlbedoModel());
                return j2p(result);
              }

              static PyObject *t_Perturbations_getAtmosphericModel(t_Perturbations *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getAtmosphericModel());
                return j2p(result);
              }

              static PyObject *t_Perturbations_getCentralBodyRotation(t_Perturbations *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getCentralBodyRotation());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_Perturbations_getEquatorialRadius(t_Perturbations *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getEquatorialRadius());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_Perturbations_getFixedF10P7(t_Perturbations *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getFixedF10P7());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_Perturbations_getFixedF10P7Mean(t_Perturbations *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getFixedF10P7Mean());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_Perturbations_getFixedGeomagneticAp(t_Perturbations *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getFixedGeomagneticAp());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_Perturbations_getFixedGeomagneticDst(t_Perturbations *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getFixedGeomagneticDst());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_Perturbations_getFixedGeomagneticKp(t_Perturbations *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getFixedGeomagneticKp());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_Perturbations_getFixedM10P7(t_Perturbations *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getFixedM10P7());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_Perturbations_getFixedM10P7Mean(t_Perturbations *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getFixedM10P7Mean());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_Perturbations_getFixedS10P7(t_Perturbations *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getFixedS10P7());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_Perturbations_getFixedS10P7Mean(t_Perturbations *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getFixedS10P7Mean());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_Perturbations_getFixedY10P7(t_Perturbations *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getFixedY10P7());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_Perturbations_getFixedY10P7Mean(t_Perturbations *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getFixedY10P7Mean());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_Perturbations_getGm(t_Perturbations *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getGm());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_Perturbations_getGravityDegree(t_Perturbations *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getGravityDegree());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_Perturbations_getGravityModel(t_Perturbations *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getGravityModel());
                return j2p(result);
              }

              static PyObject *t_Perturbations_getGravityOrder(t_Perturbations *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getGravityOrder());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_Perturbations_getInterpMethodSW(t_Perturbations *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getInterpMethodSW());
                return j2p(result);
              }

              static PyObject *t_Perturbations_getNBodyPerturbations(t_Perturbations *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getNBodyPerturbations());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ccsds::definitions::PY_TYPE(BodyFacade));
              }

              static PyObject *t_Perturbations_getOblateFlattening(t_Perturbations *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getOblateFlattening());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_Perturbations_getOceanTidesModel(t_Perturbations *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getOceanTidesModel());
                return j2p(result);
              }

              static PyObject *t_Perturbations_getReductionTheory(t_Perturbations *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getReductionTheory());
                return j2p(result);
              }

              static PyObject *t_Perturbations_getShadowBodies(t_Perturbations *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getShadowBodies());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ccsds::definitions::PY_TYPE(BodyFacade));
              }

              static PyObject *t_Perturbations_getShadowModel(t_Perturbations *self)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::ShadowModel result((jobject) NULL);
                OBJ_CALL(result = self->object.getShadowModel());
                return ::org::orekit::files::ccsds::ndm::odm::ocm::t_ShadowModel::wrap_Object(result);
              }

              static PyObject *t_Perturbations_getSolidTidesModel(t_Perturbations *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getSolidTidesModel());
                return j2p(result);
              }

              static PyObject *t_Perturbations_getSpaceWeatherEpoch(t_Perturbations *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getSpaceWeatherEpoch());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_Perturbations_getSpaceWeatherSource(t_Perturbations *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getSpaceWeatherSource());
                return j2p(result);
              }

              static PyObject *t_Perturbations_getSrpModel(t_Perturbations *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getSrpModel());
                return j2p(result);
              }

              static PyObject *t_Perturbations_setAlbedoGridSize(t_Perturbations *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setAlbedoGridSize(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setAlbedoGridSize", arg);
                return NULL;
              }

              static PyObject *t_Perturbations_setAlbedoModel(t_Perturbations *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setAlbedoModel(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setAlbedoModel", arg);
                return NULL;
              }

              static PyObject *t_Perturbations_setAtmosphericModel(t_Perturbations *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setAtmosphericModel(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setAtmosphericModel", arg);
                return NULL;
              }

              static PyObject *t_Perturbations_setCentralBodyRotation(t_Perturbations *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setCentralBodyRotation(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setCentralBodyRotation", arg);
                return NULL;
              }

              static PyObject *t_Perturbations_setEquatorialRadius(t_Perturbations *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setEquatorialRadius(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setEquatorialRadius", arg);
                return NULL;
              }

              static PyObject *t_Perturbations_setFixedF10P7(t_Perturbations *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setFixedF10P7(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setFixedF10P7", arg);
                return NULL;
              }

              static PyObject *t_Perturbations_setFixedF10P7Mean(t_Perturbations *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setFixedF10P7Mean(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setFixedF10P7Mean", arg);
                return NULL;
              }

              static PyObject *t_Perturbations_setFixedGeomagneticAp(t_Perturbations *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setFixedGeomagneticAp(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setFixedGeomagneticAp", arg);
                return NULL;
              }

              static PyObject *t_Perturbations_setFixedGeomagneticDst(t_Perturbations *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setFixedGeomagneticDst(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setFixedGeomagneticDst", arg);
                return NULL;
              }

              static PyObject *t_Perturbations_setFixedGeomagneticKp(t_Perturbations *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setFixedGeomagneticKp(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setFixedGeomagneticKp", arg);
                return NULL;
              }

              static PyObject *t_Perturbations_setFixedM10P7(t_Perturbations *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setFixedM10P7(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setFixedM10P7", arg);
                return NULL;
              }

              static PyObject *t_Perturbations_setFixedM10P7Mean(t_Perturbations *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setFixedM10P7Mean(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setFixedM10P7Mean", arg);
                return NULL;
              }

              static PyObject *t_Perturbations_setFixedS10P7(t_Perturbations *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setFixedS10P7(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setFixedS10P7", arg);
                return NULL;
              }

              static PyObject *t_Perturbations_setFixedS10P7Mean(t_Perturbations *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setFixedS10P7Mean(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setFixedS10P7Mean", arg);
                return NULL;
              }

              static PyObject *t_Perturbations_setFixedY10P7(t_Perturbations *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setFixedY10P7(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setFixedY10P7", arg);
                return NULL;
              }

              static PyObject *t_Perturbations_setFixedY10P7Mean(t_Perturbations *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setFixedY10P7Mean(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setFixedY10P7Mean", arg);
                return NULL;
              }

              static PyObject *t_Perturbations_setGm(t_Perturbations *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setGm(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setGm", arg);
                return NULL;
              }

              static PyObject *t_Perturbations_setGravityModel(t_Perturbations *self, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                jint a1;
                jint a2;

                if (!parseArgs(args, "sII", &a0, &a1, &a2))
                {
                  OBJ_CALL(self->object.setGravityModel(a0, a1, a2));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setGravityModel", args);
                return NULL;
              }

              static PyObject *t_Perturbations_setInterpMethodSW(t_Perturbations *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setInterpMethodSW(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setInterpMethodSW", arg);
                return NULL;
              }

              static PyObject *t_Perturbations_setNBodyPerturbations(t_Perturbations *self, PyObject *arg)
              {
                ::java::util::List a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
                {
                  OBJ_CALL(self->object.setNBodyPerturbations(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setNBodyPerturbations", arg);
                return NULL;
              }

              static PyObject *t_Perturbations_setOblateFlattening(t_Perturbations *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setOblateFlattening(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setOblateFlattening", arg);
                return NULL;
              }

              static PyObject *t_Perturbations_setOceanTidesModel(t_Perturbations *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setOceanTidesModel(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setOceanTidesModel", arg);
                return NULL;
              }

              static PyObject *t_Perturbations_setReductionTheory(t_Perturbations *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setReductionTheory(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setReductionTheory", arg);
                return NULL;
              }

              static PyObject *t_Perturbations_setShadowBodies(t_Perturbations *self, PyObject *arg)
              {
                ::java::util::List a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
                {
                  OBJ_CALL(self->object.setShadowBodies(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setShadowBodies", arg);
                return NULL;
              }

              static PyObject *t_Perturbations_setShadowModel(t_Perturbations *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::ShadowModel a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::org::orekit::files::ccsds::ndm::odm::ocm::ShadowModel::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::odm::ocm::t_ShadowModel::parameters_))
                {
                  OBJ_CALL(self->object.setShadowModel(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setShadowModel", arg);
                return NULL;
              }

              static PyObject *t_Perturbations_setSolidTidesModel(t_Perturbations *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setSolidTidesModel(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setSolidTidesModel", arg);
                return NULL;
              }

              static PyObject *t_Perturbations_setSpaceWeatherEpoch(t_Perturbations *self, PyObject *arg)
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setSpaceWeatherEpoch(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setSpaceWeatherEpoch", arg);
                return NULL;
              }

              static PyObject *t_Perturbations_setSpaceWeatherSource(t_Perturbations *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setSpaceWeatherSource(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setSpaceWeatherSource", arg);
                return NULL;
              }

              static PyObject *t_Perturbations_setSrpModel(t_Perturbations *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setSrpModel(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setSrpModel", arg);
                return NULL;
              }

              static PyObject *t_Perturbations_get__albedoGridSize(t_Perturbations *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getAlbedoGridSize());
                return PyLong_FromLong((long) value);
              }
              static int t_Perturbations_set__albedoGridSize(t_Perturbations *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setAlbedoGridSize(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "albedoGridSize", arg);
                return -1;
              }

              static PyObject *t_Perturbations_get__albedoModel(t_Perturbations *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getAlbedoModel());
                return j2p(value);
              }
              static int t_Perturbations_set__albedoModel(t_Perturbations *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setAlbedoModel(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "albedoModel", arg);
                return -1;
              }

              static PyObject *t_Perturbations_get__atmosphericModel(t_Perturbations *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getAtmosphericModel());
                return j2p(value);
              }
              static int t_Perturbations_set__atmosphericModel(t_Perturbations *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setAtmosphericModel(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "atmosphericModel", arg);
                return -1;
              }

              static PyObject *t_Perturbations_get__centralBodyRotation(t_Perturbations *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getCentralBodyRotation());
                return PyFloat_FromDouble((double) value);
              }
              static int t_Perturbations_set__centralBodyRotation(t_Perturbations *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setCentralBodyRotation(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "centralBodyRotation", arg);
                return -1;
              }

              static PyObject *t_Perturbations_get__equatorialRadius(t_Perturbations *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getEquatorialRadius());
                return PyFloat_FromDouble((double) value);
              }
              static int t_Perturbations_set__equatorialRadius(t_Perturbations *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setEquatorialRadius(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "equatorialRadius", arg);
                return -1;
              }

              static PyObject *t_Perturbations_get__fixedF10P7(t_Perturbations *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getFixedF10P7());
                return PyFloat_FromDouble((double) value);
              }
              static int t_Perturbations_set__fixedF10P7(t_Perturbations *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setFixedF10P7(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "fixedF10P7", arg);
                return -1;
              }

              static PyObject *t_Perturbations_get__fixedF10P7Mean(t_Perturbations *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getFixedF10P7Mean());
                return PyFloat_FromDouble((double) value);
              }
              static int t_Perturbations_set__fixedF10P7Mean(t_Perturbations *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setFixedF10P7Mean(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "fixedF10P7Mean", arg);
                return -1;
              }

              static PyObject *t_Perturbations_get__fixedGeomagneticAp(t_Perturbations *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getFixedGeomagneticAp());
                return PyFloat_FromDouble((double) value);
              }
              static int t_Perturbations_set__fixedGeomagneticAp(t_Perturbations *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setFixedGeomagneticAp(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "fixedGeomagneticAp", arg);
                return -1;
              }

              static PyObject *t_Perturbations_get__fixedGeomagneticDst(t_Perturbations *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getFixedGeomagneticDst());
                return PyFloat_FromDouble((double) value);
              }
              static int t_Perturbations_set__fixedGeomagneticDst(t_Perturbations *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setFixedGeomagneticDst(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "fixedGeomagneticDst", arg);
                return -1;
              }

              static PyObject *t_Perturbations_get__fixedGeomagneticKp(t_Perturbations *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getFixedGeomagneticKp());
                return PyFloat_FromDouble((double) value);
              }
              static int t_Perturbations_set__fixedGeomagneticKp(t_Perturbations *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setFixedGeomagneticKp(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "fixedGeomagneticKp", arg);
                return -1;
              }

              static PyObject *t_Perturbations_get__fixedM10P7(t_Perturbations *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getFixedM10P7());
                return PyFloat_FromDouble((double) value);
              }
              static int t_Perturbations_set__fixedM10P7(t_Perturbations *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setFixedM10P7(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "fixedM10P7", arg);
                return -1;
              }

              static PyObject *t_Perturbations_get__fixedM10P7Mean(t_Perturbations *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getFixedM10P7Mean());
                return PyFloat_FromDouble((double) value);
              }
              static int t_Perturbations_set__fixedM10P7Mean(t_Perturbations *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setFixedM10P7Mean(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "fixedM10P7Mean", arg);
                return -1;
              }

              static PyObject *t_Perturbations_get__fixedS10P7(t_Perturbations *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getFixedS10P7());
                return PyFloat_FromDouble((double) value);
              }
              static int t_Perturbations_set__fixedS10P7(t_Perturbations *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setFixedS10P7(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "fixedS10P7", arg);
                return -1;
              }

              static PyObject *t_Perturbations_get__fixedS10P7Mean(t_Perturbations *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getFixedS10P7Mean());
                return PyFloat_FromDouble((double) value);
              }
              static int t_Perturbations_set__fixedS10P7Mean(t_Perturbations *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setFixedS10P7Mean(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "fixedS10P7Mean", arg);
                return -1;
              }

              static PyObject *t_Perturbations_get__fixedY10P7(t_Perturbations *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getFixedY10P7());
                return PyFloat_FromDouble((double) value);
              }
              static int t_Perturbations_set__fixedY10P7(t_Perturbations *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setFixedY10P7(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "fixedY10P7", arg);
                return -1;
              }

              static PyObject *t_Perturbations_get__fixedY10P7Mean(t_Perturbations *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getFixedY10P7Mean());
                return PyFloat_FromDouble((double) value);
              }
              static int t_Perturbations_set__fixedY10P7Mean(t_Perturbations *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setFixedY10P7Mean(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "fixedY10P7Mean", arg);
                return -1;
              }

              static PyObject *t_Perturbations_get__gm(t_Perturbations *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getGm());
                return PyFloat_FromDouble((double) value);
              }
              static int t_Perturbations_set__gm(t_Perturbations *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setGm(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "gm", arg);
                return -1;
              }

              static PyObject *t_Perturbations_get__gravityDegree(t_Perturbations *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getGravityDegree());
                return PyLong_FromLong((long) value);
              }

              static PyObject *t_Perturbations_get__gravityModel(t_Perturbations *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getGravityModel());
                return j2p(value);
              }

              static PyObject *t_Perturbations_get__gravityOrder(t_Perturbations *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getGravityOrder());
                return PyLong_FromLong((long) value);
              }

              static PyObject *t_Perturbations_get__interpMethodSW(t_Perturbations *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getInterpMethodSW());
                return j2p(value);
              }
              static int t_Perturbations_set__interpMethodSW(t_Perturbations *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setInterpMethodSW(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "interpMethodSW", arg);
                return -1;
              }

              static PyObject *t_Perturbations_get__nBodyPerturbations(t_Perturbations *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getNBodyPerturbations());
                return ::java::util::t_List::wrap_Object(value);
              }
              static int t_Perturbations_set__nBodyPerturbations(t_Perturbations *self, PyObject *arg, void *data)
              {
                {
                  ::java::util::List value((jobject) NULL);
                  if (!parseArg(arg, "k", ::java::util::List::initializeClass, &value))
                  {
                    INT_CALL(self->object.setNBodyPerturbations(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "nBodyPerturbations", arg);
                return -1;
              }

              static PyObject *t_Perturbations_get__oblateFlattening(t_Perturbations *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getOblateFlattening());
                return PyFloat_FromDouble((double) value);
              }
              static int t_Perturbations_set__oblateFlattening(t_Perturbations *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setOblateFlattening(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "oblateFlattening", arg);
                return -1;
              }

              static PyObject *t_Perturbations_get__oceanTidesModel(t_Perturbations *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getOceanTidesModel());
                return j2p(value);
              }
              static int t_Perturbations_set__oceanTidesModel(t_Perturbations *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setOceanTidesModel(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "oceanTidesModel", arg);
                return -1;
              }

              static PyObject *t_Perturbations_get__reductionTheory(t_Perturbations *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getReductionTheory());
                return j2p(value);
              }
              static int t_Perturbations_set__reductionTheory(t_Perturbations *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setReductionTheory(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "reductionTheory", arg);
                return -1;
              }

              static PyObject *t_Perturbations_get__shadowBodies(t_Perturbations *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getShadowBodies());
                return ::java::util::t_List::wrap_Object(value);
              }
              static int t_Perturbations_set__shadowBodies(t_Perturbations *self, PyObject *arg, void *data)
              {
                {
                  ::java::util::List value((jobject) NULL);
                  if (!parseArg(arg, "k", ::java::util::List::initializeClass, &value))
                  {
                    INT_CALL(self->object.setShadowBodies(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "shadowBodies", arg);
                return -1;
              }

              static PyObject *t_Perturbations_get__shadowModel(t_Perturbations *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::ShadowModel value((jobject) NULL);
                OBJ_CALL(value = self->object.getShadowModel());
                return ::org::orekit::files::ccsds::ndm::odm::ocm::t_ShadowModel::wrap_Object(value);
              }
              static int t_Perturbations_set__shadowModel(t_Perturbations *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::files::ccsds::ndm::odm::ocm::ShadowModel value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::odm::ocm::ShadowModel::initializeClass, &value))
                  {
                    INT_CALL(self->object.setShadowModel(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "shadowModel", arg);
                return -1;
              }

              static PyObject *t_Perturbations_get__solidTidesModel(t_Perturbations *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getSolidTidesModel());
                return j2p(value);
              }
              static int t_Perturbations_set__solidTidesModel(t_Perturbations *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setSolidTidesModel(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "solidTidesModel", arg);
                return -1;
              }

              static PyObject *t_Perturbations_get__spaceWeatherEpoch(t_Perturbations *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getSpaceWeatherEpoch());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }
              static int t_Perturbations_set__spaceWeatherEpoch(t_Perturbations *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                  {
                    INT_CALL(self->object.setSpaceWeatherEpoch(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "spaceWeatherEpoch", arg);
                return -1;
              }

              static PyObject *t_Perturbations_get__spaceWeatherSource(t_Perturbations *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getSpaceWeatherSource());
                return j2p(value);
              }
              static int t_Perturbations_set__spaceWeatherSource(t_Perturbations *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setSpaceWeatherSource(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "spaceWeatherSource", arg);
                return -1;
              }

              static PyObject *t_Perturbations_get__srpModel(t_Perturbations *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getSrpModel());
                return j2p(value);
              }
              static int t_Perturbations_set__srpModel(t_Perturbations *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setSrpModel(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "srpModel", arg);
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
#include "org/orekit/frames/ShiftingTransformProvider.h"
#include "org/orekit/frames/FieldTransform.h"
#include "org/orekit/frames/TransformProvider.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/frames/Transform.h"
#include "org/orekit/frames/FieldStaticTransform.h"
#include "org/orekit/frames/StaticTransform.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/utils/AngularDerivativesFilter.h"
#include "org/orekit/utils/CartesianDerivativesFilter.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *ShiftingTransformProvider::class$ = NULL;
      jmethodID *ShiftingTransformProvider::mids$ = NULL;
      bool ShiftingTransformProvider::live$ = false;

      jclass ShiftingTransformProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/ShiftingTransformProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_b5ee83e9cfd012af] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/TransformProvider;Lorg/orekit/utils/CartesianDerivativesFilter;Lorg/orekit/utils/AngularDerivativesFilter;IDIDD)V");
          mids$[mid_getGridPoints_55546ef6a647f39b] = env->getMethodID(cls, "getGridPoints", "()I");
          mids$[mid_getRawProvider_51018934a5745bab] = env->getMethodID(cls, "getRawProvider", "()Lorg/orekit/frames/TransformProvider;");
          mids$[mid_getStaticTransform_5f13614b572308e8] = env->getMethodID(cls, "getStaticTransform", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/frames/StaticTransform;");
          mids$[mid_getStaticTransform_09ace34b8a3460b2] = env->getMethodID(cls, "getStaticTransform", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/frames/FieldStaticTransform;");
          mids$[mid_getStep_b74f83833fdad017] = env->getMethodID(cls, "getStep", "()D");
          mids$[mid_getTransform_976d4bc81671ce42] = env->getMethodID(cls, "getTransform", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/frames/Transform;");
          mids$[mid_getTransform_7a8ca6856fe3fc9e] = env->getMethodID(cls, "getTransform", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/frames/FieldTransform;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ShiftingTransformProvider::ShiftingTransformProvider(const ::org::orekit::frames::TransformProvider & a0, const ::org::orekit::utils::CartesianDerivativesFilter & a1, const ::org::orekit::utils::AngularDerivativesFilter & a2, jint a3, jdouble a4, jint a5, jdouble a6, jdouble a7) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b5ee83e9cfd012af, a0.this$, a1.this$, a2.this$, a3, a4, a5, a6, a7)) {}

      jint ShiftingTransformProvider::getGridPoints() const
      {
        return env->callIntMethod(this$, mids$[mid_getGridPoints_55546ef6a647f39b]);
      }

      ::org::orekit::frames::TransformProvider ShiftingTransformProvider::getRawProvider() const
      {
        return ::org::orekit::frames::TransformProvider(env->callObjectMethod(this$, mids$[mid_getRawProvider_51018934a5745bab]));
      }

      ::org::orekit::frames::StaticTransform ShiftingTransformProvider::getStaticTransform(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return ::org::orekit::frames::StaticTransform(env->callObjectMethod(this$, mids$[mid_getStaticTransform_5f13614b572308e8], a0.this$));
      }

      ::org::orekit::frames::FieldStaticTransform ShiftingTransformProvider::getStaticTransform(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::orekit::frames::FieldStaticTransform(env->callObjectMethod(this$, mids$[mid_getStaticTransform_09ace34b8a3460b2], a0.this$));
      }

      jdouble ShiftingTransformProvider::getStep() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getStep_b74f83833fdad017]);
      }

      ::org::orekit::frames::Transform ShiftingTransformProvider::getTransform(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return ::org::orekit::frames::Transform(env->callObjectMethod(this$, mids$[mid_getTransform_976d4bc81671ce42], a0.this$));
      }

      ::org::orekit::frames::FieldTransform ShiftingTransformProvider::getTransform(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::orekit::frames::FieldTransform(env->callObjectMethod(this$, mids$[mid_getTransform_7a8ca6856fe3fc9e], a0.this$));
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
      static PyObject *t_ShiftingTransformProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ShiftingTransformProvider_instance_(PyTypeObject *type, PyObject *arg);
      static int t_ShiftingTransformProvider_init_(t_ShiftingTransformProvider *self, PyObject *args, PyObject *kwds);
      static PyObject *t_ShiftingTransformProvider_getGridPoints(t_ShiftingTransformProvider *self);
      static PyObject *t_ShiftingTransformProvider_getRawProvider(t_ShiftingTransformProvider *self);
      static PyObject *t_ShiftingTransformProvider_getStaticTransform(t_ShiftingTransformProvider *self, PyObject *args);
      static PyObject *t_ShiftingTransformProvider_getStep(t_ShiftingTransformProvider *self);
      static PyObject *t_ShiftingTransformProvider_getTransform(t_ShiftingTransformProvider *self, PyObject *args);
      static PyObject *t_ShiftingTransformProvider_get__gridPoints(t_ShiftingTransformProvider *self, void *data);
      static PyObject *t_ShiftingTransformProvider_get__rawProvider(t_ShiftingTransformProvider *self, void *data);
      static PyObject *t_ShiftingTransformProvider_get__step(t_ShiftingTransformProvider *self, void *data);
      static PyGetSetDef t_ShiftingTransformProvider__fields_[] = {
        DECLARE_GET_FIELD(t_ShiftingTransformProvider, gridPoints),
        DECLARE_GET_FIELD(t_ShiftingTransformProvider, rawProvider),
        DECLARE_GET_FIELD(t_ShiftingTransformProvider, step),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ShiftingTransformProvider__methods_[] = {
        DECLARE_METHOD(t_ShiftingTransformProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ShiftingTransformProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ShiftingTransformProvider, getGridPoints, METH_NOARGS),
        DECLARE_METHOD(t_ShiftingTransformProvider, getRawProvider, METH_NOARGS),
        DECLARE_METHOD(t_ShiftingTransformProvider, getStaticTransform, METH_VARARGS),
        DECLARE_METHOD(t_ShiftingTransformProvider, getStep, METH_NOARGS),
        DECLARE_METHOD(t_ShiftingTransformProvider, getTransform, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ShiftingTransformProvider)[] = {
        { Py_tp_methods, t_ShiftingTransformProvider__methods_ },
        { Py_tp_init, (void *) t_ShiftingTransformProvider_init_ },
        { Py_tp_getset, t_ShiftingTransformProvider__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ShiftingTransformProvider)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ShiftingTransformProvider, t_ShiftingTransformProvider, ShiftingTransformProvider);

      void t_ShiftingTransformProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(ShiftingTransformProvider), &PY_TYPE_DEF(ShiftingTransformProvider), module, "ShiftingTransformProvider", 0);
      }

      void t_ShiftingTransformProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ShiftingTransformProvider), "class_", make_descriptor(ShiftingTransformProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ShiftingTransformProvider), "wrapfn_", make_descriptor(t_ShiftingTransformProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ShiftingTransformProvider), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ShiftingTransformProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ShiftingTransformProvider::initializeClass, 1)))
          return NULL;
        return t_ShiftingTransformProvider::wrap_Object(ShiftingTransformProvider(((t_ShiftingTransformProvider *) arg)->object.this$));
      }
      static PyObject *t_ShiftingTransformProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ShiftingTransformProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_ShiftingTransformProvider_init_(t_ShiftingTransformProvider *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::frames::TransformProvider a0((jobject) NULL);
        ::org::orekit::utils::CartesianDerivativesFilter a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::orekit::utils::AngularDerivativesFilter a2((jobject) NULL);
        PyTypeObject **p2;
        jint a3;
        jdouble a4;
        jint a5;
        jdouble a6;
        jdouble a7;
        ShiftingTransformProvider object((jobject) NULL);

        if (!parseArgs(args, "kKKIDIDD", ::org::orekit::frames::TransformProvider::initializeClass, ::org::orekit::utils::CartesianDerivativesFilter::initializeClass, ::org::orekit::utils::AngularDerivativesFilter::initializeClass, &a0, &a1, &p1, ::org::orekit::utils::t_CartesianDerivativesFilter::parameters_, &a2, &p2, ::org::orekit::utils::t_AngularDerivativesFilter::parameters_, &a3, &a4, &a5, &a6, &a7))
        {
          INT_CALL(object = ShiftingTransformProvider(a0, a1, a2, a3, a4, a5, a6, a7));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_ShiftingTransformProvider_getGridPoints(t_ShiftingTransformProvider *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getGridPoints());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_ShiftingTransformProvider_getRawProvider(t_ShiftingTransformProvider *self)
      {
        ::org::orekit::frames::TransformProvider result((jobject) NULL);
        OBJ_CALL(result = self->object.getRawProvider());
        return ::org::orekit::frames::t_TransformProvider::wrap_Object(result);
      }

      static PyObject *t_ShiftingTransformProvider_getStaticTransform(t_ShiftingTransformProvider *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::frames::StaticTransform result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getStaticTransform(a0));
              return ::org::orekit::frames::t_StaticTransform::wrap_Object(result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::FieldStaticTransform result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.getStaticTransform(a0));
              return ::org::orekit::frames::t_FieldStaticTransform::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getStaticTransform", args);
        return NULL;
      }

      static PyObject *t_ShiftingTransformProvider_getStep(t_ShiftingTransformProvider *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getStep());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_ShiftingTransformProvider_getTransform(t_ShiftingTransformProvider *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::frames::Transform result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getTransform(a0));
              return ::org::orekit::frames::t_Transform::wrap_Object(result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::FieldTransform result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.getTransform(a0));
              return ::org::orekit::frames::t_FieldTransform::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getTransform", args);
        return NULL;
      }

      static PyObject *t_ShiftingTransformProvider_get__gridPoints(t_ShiftingTransformProvider *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getGridPoints());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_ShiftingTransformProvider_get__rawProvider(t_ShiftingTransformProvider *self, void *data)
      {
        ::org::orekit::frames::TransformProvider value((jobject) NULL);
        OBJ_CALL(value = self->object.getRawProvider());
        return ::org::orekit::frames::t_TransformProvider::wrap_Object(value);
      }

      static PyObject *t_ShiftingTransformProvider_get__step(t_ShiftingTransformProvider *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getStep());
        return PyFloat_FromDouble((double) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/cdm/AltCovarianceType.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/cdm/AltCovarianceType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *AltCovarianceType::class$ = NULL;
            jmethodID *AltCovarianceType::mids$ = NULL;
            bool AltCovarianceType::live$ = false;
            AltCovarianceType *AltCovarianceType::CSIG3EIGVEC3 = NULL;
            AltCovarianceType *AltCovarianceType::XYZ = NULL;

            jclass AltCovarianceType::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/AltCovarianceType");

                mids$ = new jmethodID[max_mid];
                mids$[mid_valueOf_9cabe8c248e80798] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/cdm/AltCovarianceType;");
                mids$[mid_values_9864edfe395e44d9] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/cdm/AltCovarianceType;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                CSIG3EIGVEC3 = new AltCovarianceType(env->getStaticObjectField(cls, "CSIG3EIGVEC3", "Lorg/orekit/files/ccsds/ndm/cdm/AltCovarianceType;"));
                XYZ = new AltCovarianceType(env->getStaticObjectField(cls, "XYZ", "Lorg/orekit/files/ccsds/ndm/cdm/AltCovarianceType;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            AltCovarianceType AltCovarianceType::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return AltCovarianceType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_9cabe8c248e80798], a0.this$));
            }

            JArray< AltCovarianceType > AltCovarianceType::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< AltCovarianceType >(env->callStaticObjectMethod(cls, mids$[mid_values_9864edfe395e44d9]));
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
            static PyObject *t_AltCovarianceType_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AltCovarianceType_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AltCovarianceType_of_(t_AltCovarianceType *self, PyObject *args);
            static PyObject *t_AltCovarianceType_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_AltCovarianceType_values(PyTypeObject *type);
            static PyObject *t_AltCovarianceType_get__parameters_(t_AltCovarianceType *self, void *data);
            static PyGetSetDef t_AltCovarianceType__fields_[] = {
              DECLARE_GET_FIELD(t_AltCovarianceType, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_AltCovarianceType__methods_[] = {
              DECLARE_METHOD(t_AltCovarianceType, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AltCovarianceType, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AltCovarianceType, of_, METH_VARARGS),
              DECLARE_METHOD(t_AltCovarianceType, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_AltCovarianceType, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(AltCovarianceType)[] = {
              { Py_tp_methods, t_AltCovarianceType__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_AltCovarianceType__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(AltCovarianceType)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(AltCovarianceType, t_AltCovarianceType, AltCovarianceType);
            PyObject *t_AltCovarianceType::wrap_Object(const AltCovarianceType& object, PyTypeObject *p0)
            {
              PyObject *obj = t_AltCovarianceType::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_AltCovarianceType *self = (t_AltCovarianceType *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_AltCovarianceType::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_AltCovarianceType::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_AltCovarianceType *self = (t_AltCovarianceType *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_AltCovarianceType::install(PyObject *module)
            {
              installType(&PY_TYPE(AltCovarianceType), &PY_TYPE_DEF(AltCovarianceType), module, "AltCovarianceType", 0);
            }

            void t_AltCovarianceType::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(AltCovarianceType), "class_", make_descriptor(AltCovarianceType::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AltCovarianceType), "wrapfn_", make_descriptor(t_AltCovarianceType::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AltCovarianceType), "boxfn_", make_descriptor(boxObject));
              env->getClass(AltCovarianceType::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(AltCovarianceType), "CSIG3EIGVEC3", make_descriptor(t_AltCovarianceType::wrap_Object(*AltCovarianceType::CSIG3EIGVEC3)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AltCovarianceType), "XYZ", make_descriptor(t_AltCovarianceType::wrap_Object(*AltCovarianceType::XYZ)));
            }

            static PyObject *t_AltCovarianceType_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, AltCovarianceType::initializeClass, 1)))
                return NULL;
              return t_AltCovarianceType::wrap_Object(AltCovarianceType(((t_AltCovarianceType *) arg)->object.this$));
            }
            static PyObject *t_AltCovarianceType_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, AltCovarianceType::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_AltCovarianceType_of_(t_AltCovarianceType *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_AltCovarianceType_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              AltCovarianceType result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::cdm::AltCovarianceType::valueOf(a0));
                return t_AltCovarianceType::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_AltCovarianceType_values(PyTypeObject *type)
            {
              JArray< AltCovarianceType > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::cdm::AltCovarianceType::values());
              return JArray<jobject>(result.this$).wrap(t_AltCovarianceType::wrap_jobject);
            }
            static PyObject *t_AltCovarianceType_get__parameters_(t_AltCovarianceType *self, void *data)
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
#include "org/orekit/frames/CR3BPRotatingFrame.h"
#include "org/orekit/bodies/CelestialBody.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *CR3BPRotatingFrame::class$ = NULL;
      jmethodID *CR3BPRotatingFrame::mids$ = NULL;
      bool CR3BPRotatingFrame::live$ = false;

      jclass CR3BPRotatingFrame::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/CR3BPRotatingFrame");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_349663729d1e0824] = env->getMethodID(cls, "<init>", "(DLorg/orekit/bodies/CelestialBody;Lorg/orekit/bodies/CelestialBody;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      CR3BPRotatingFrame::CR3BPRotatingFrame(jdouble a0, const ::org::orekit::bodies::CelestialBody & a1, const ::org::orekit::bodies::CelestialBody & a2) : ::org::orekit::frames::Frame(env->newObject(initializeClass, &mids$, mid_init$_349663729d1e0824, a0, a1.this$, a2.this$)) {}
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace frames {
      static PyObject *t_CR3BPRotatingFrame_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CR3BPRotatingFrame_instance_(PyTypeObject *type, PyObject *arg);
      static int t_CR3BPRotatingFrame_init_(t_CR3BPRotatingFrame *self, PyObject *args, PyObject *kwds);

      static PyMethodDef t_CR3BPRotatingFrame__methods_[] = {
        DECLARE_METHOD(t_CR3BPRotatingFrame, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CR3BPRotatingFrame, instance_, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(CR3BPRotatingFrame)[] = {
        { Py_tp_methods, t_CR3BPRotatingFrame__methods_ },
        { Py_tp_init, (void *) t_CR3BPRotatingFrame_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(CR3BPRotatingFrame)[] = {
        &PY_TYPE_DEF(::org::orekit::frames::Frame),
        NULL
      };

      DEFINE_TYPE(CR3BPRotatingFrame, t_CR3BPRotatingFrame, CR3BPRotatingFrame);

      void t_CR3BPRotatingFrame::install(PyObject *module)
      {
        installType(&PY_TYPE(CR3BPRotatingFrame), &PY_TYPE_DEF(CR3BPRotatingFrame), module, "CR3BPRotatingFrame", 0);
      }

      void t_CR3BPRotatingFrame::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(CR3BPRotatingFrame), "class_", make_descriptor(CR3BPRotatingFrame::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CR3BPRotatingFrame), "wrapfn_", make_descriptor(t_CR3BPRotatingFrame::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CR3BPRotatingFrame), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_CR3BPRotatingFrame_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, CR3BPRotatingFrame::initializeClass, 1)))
          return NULL;
        return t_CR3BPRotatingFrame::wrap_Object(CR3BPRotatingFrame(((t_CR3BPRotatingFrame *) arg)->object.this$));
      }
      static PyObject *t_CR3BPRotatingFrame_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, CR3BPRotatingFrame::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_CR3BPRotatingFrame_init_(t_CR3BPRotatingFrame *self, PyObject *args, PyObject *kwds)
      {
        jdouble a0;
        ::org::orekit::bodies::CelestialBody a1((jobject) NULL);
        ::org::orekit::bodies::CelestialBody a2((jobject) NULL);
        CR3BPRotatingFrame object((jobject) NULL);

        if (!parseArgs(args, "Dkk", ::org::orekit::bodies::CelestialBody::initializeClass, ::org::orekit::bodies::CelestialBody::initializeClass, &a0, &a1, &a2))
        {
          INT_CALL(object = CR3BPRotatingFrame(a0, a1, a2));
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
#include "org/orekit/frames/LOF.h"
#include "org/orekit/frames/FieldTransform.h"
#include "org/orekit/utils/FieldPVCoordinates.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldRotation.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/frames/Transform.h"
#include "org/hipparchus/Field.h"
#include "org/orekit/frames/LOF.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/hipparchus/geometry/euclidean/threed/Rotation.h"
#include "java/lang/String.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *LOF::class$ = NULL;
      jmethodID *LOF::mids$ = NULL;
      bool LOF::live$ = false;

      jclass LOF::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/LOF");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getName_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_isQuasiInertial_9ab94ac1dc23b105] = env->getMethodID(cls, "isQuasiInertial", "()Z");
          mids$[mid_rotationFromInertial_9c03210e4a66b8b3] = env->getMethodID(cls, "rotationFromInertial", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/PVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
          mids$[mid_rotationFromInertial_8f928c19e9edde2b] = env->getMethodID(cls, "rotationFromInertial", "(Lorg/hipparchus/Field;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/utils/FieldPVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
          mids$[mid_rotationFromLOF_a4b25c0232d43859] = env->getMethodID(cls, "rotationFromLOF", "(Lorg/orekit/frames/LOF;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/PVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
          mids$[mid_rotationFromLOF_68a01a5cb563ead4] = env->getMethodID(cls, "rotationFromLOF", "(Lorg/hipparchus/Field;Lorg/orekit/frames/LOF;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/utils/FieldPVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
          mids$[mid_rotationFromLOFInToLOFOut_885e11fa763be356] = env->getStaticMethodID(cls, "rotationFromLOFInToLOFOut", "(Lorg/orekit/frames/LOF;Lorg/orekit/frames/LOF;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/PVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
          mids$[mid_rotationFromLOFInToLOFOut_71053c63fef56b06] = env->getStaticMethodID(cls, "rotationFromLOFInToLOFOut", "(Lorg/hipparchus/Field;Lorg/orekit/frames/LOF;Lorg/orekit/frames/LOF;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/utils/FieldPVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
          mids$[mid_transformFromInertial_e4502aed5587981a] = env->getMethodID(cls, "transformFromInertial", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/utils/FieldPVCoordinates;)Lorg/orekit/frames/FieldTransform;");
          mids$[mid_transformFromInertial_b95ac950aa1cdd61] = env->getMethodID(cls, "transformFromInertial", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/PVCoordinates;)Lorg/orekit/frames/Transform;");
          mids$[mid_transformFromLOF_28d6d2ecbe474174] = env->getMethodID(cls, "transformFromLOF", "(Lorg/orekit/frames/LOF;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/PVCoordinates;)Lorg/orekit/frames/Transform;");
          mids$[mid_transformFromLOF_484988e303f6b17e] = env->getMethodID(cls, "transformFromLOF", "(Lorg/orekit/frames/LOF;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/utils/FieldPVCoordinates;)Lorg/orekit/frames/FieldTransform;");
          mids$[mid_transformFromLOFInToLOFOut_575ca9c31554eb21] = env->getStaticMethodID(cls, "transformFromLOFInToLOFOut", "(Lorg/orekit/frames/LOF;Lorg/orekit/frames/LOF;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/PVCoordinates;)Lorg/orekit/frames/Transform;");
          mids$[mid_transformFromLOFInToLOFOut_61f6e71d06b6e152] = env->getStaticMethodID(cls, "transformFromLOFInToLOFOut", "(Lorg/orekit/frames/LOF;Lorg/orekit/frames/LOF;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/utils/FieldPVCoordinates;)Lorg/orekit/frames/FieldTransform;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::String LOF::getName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_1c1fa1e935d6cdcf]));
      }

      jboolean LOF::isQuasiInertial() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isQuasiInertial_9ab94ac1dc23b105]);
      }

      ::org::hipparchus::geometry::euclidean::threed::Rotation LOF::rotationFromInertial(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::utils::PVCoordinates & a1) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Rotation(env->callObjectMethod(this$, mids$[mid_rotationFromInertial_9c03210e4a66b8b3], a0.this$, a1.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldRotation LOF::rotationFromInertial(const ::org::hipparchus::Field & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::utils::FieldPVCoordinates & a2) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldRotation(env->callObjectMethod(this$, mids$[mid_rotationFromInertial_8f928c19e9edde2b], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Rotation LOF::rotationFromLOF(const LOF & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::utils::PVCoordinates & a2) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Rotation(env->callObjectMethod(this$, mids$[mid_rotationFromLOF_a4b25c0232d43859], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldRotation LOF::rotationFromLOF(const ::org::hipparchus::Field & a0, const LOF & a1, const ::org::orekit::time::FieldAbsoluteDate & a2, const ::org::orekit::utils::FieldPVCoordinates & a3) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldRotation(env->callObjectMethod(this$, mids$[mid_rotationFromLOF_68a01a5cb563ead4], a0.this$, a1.this$, a2.this$, a3.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Rotation LOF::rotationFromLOFInToLOFOut(const LOF & a0, const LOF & a1, const ::org::orekit::time::AbsoluteDate & a2, const ::org::orekit::utils::PVCoordinates & a3)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::geometry::euclidean::threed::Rotation(env->callStaticObjectMethod(cls, mids$[mid_rotationFromLOFInToLOFOut_885e11fa763be356], a0.this$, a1.this$, a2.this$, a3.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldRotation LOF::rotationFromLOFInToLOFOut(const ::org::hipparchus::Field & a0, const LOF & a1, const LOF & a2, const ::org::orekit::time::FieldAbsoluteDate & a3, const ::org::orekit::utils::FieldPVCoordinates & a4)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::geometry::euclidean::threed::FieldRotation(env->callStaticObjectMethod(cls, mids$[mid_rotationFromLOFInToLOFOut_71053c63fef56b06], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$));
      }

      ::org::orekit::frames::FieldTransform LOF::transformFromInertial(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::orekit::utils::FieldPVCoordinates & a1) const
      {
        return ::org::orekit::frames::FieldTransform(env->callObjectMethod(this$, mids$[mid_transformFromInertial_e4502aed5587981a], a0.this$, a1.this$));
      }

      ::org::orekit::frames::Transform LOF::transformFromInertial(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::utils::PVCoordinates & a1) const
      {
        return ::org::orekit::frames::Transform(env->callObjectMethod(this$, mids$[mid_transformFromInertial_b95ac950aa1cdd61], a0.this$, a1.this$));
      }

      ::org::orekit::frames::Transform LOF::transformFromLOF(const LOF & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::utils::PVCoordinates & a2) const
      {
        return ::org::orekit::frames::Transform(env->callObjectMethod(this$, mids$[mid_transformFromLOF_28d6d2ecbe474174], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::frames::FieldTransform LOF::transformFromLOF(const LOF & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::utils::FieldPVCoordinates & a2) const
      {
        return ::org::orekit::frames::FieldTransform(env->callObjectMethod(this$, mids$[mid_transformFromLOF_484988e303f6b17e], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::frames::Transform LOF::transformFromLOFInToLOFOut(const LOF & a0, const LOF & a1, const ::org::orekit::time::AbsoluteDate & a2, const ::org::orekit::utils::PVCoordinates & a3)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::frames::Transform(env->callStaticObjectMethod(cls, mids$[mid_transformFromLOFInToLOFOut_575ca9c31554eb21], a0.this$, a1.this$, a2.this$, a3.this$));
      }

      ::org::orekit::frames::FieldTransform LOF::transformFromLOFInToLOFOut(const LOF & a0, const LOF & a1, const ::org::orekit::time::FieldAbsoluteDate & a2, const ::org::orekit::utils::FieldPVCoordinates & a3)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::frames::FieldTransform(env->callStaticObjectMethod(cls, mids$[mid_transformFromLOFInToLOFOut_61f6e71d06b6e152], a0.this$, a1.this$, a2.this$, a3.this$));
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
      static PyObject *t_LOF_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LOF_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LOF_getName(t_LOF *self);
      static PyObject *t_LOF_isQuasiInertial(t_LOF *self);
      static PyObject *t_LOF_rotationFromInertial(t_LOF *self, PyObject *args);
      static PyObject *t_LOF_rotationFromLOF(t_LOF *self, PyObject *args);
      static PyObject *t_LOF_rotationFromLOFInToLOFOut(PyTypeObject *type, PyObject *args);
      static PyObject *t_LOF_transformFromInertial(t_LOF *self, PyObject *args);
      static PyObject *t_LOF_transformFromLOF(t_LOF *self, PyObject *args);
      static PyObject *t_LOF_transformFromLOFInToLOFOut(PyTypeObject *type, PyObject *args);
      static PyObject *t_LOF_get__name(t_LOF *self, void *data);
      static PyObject *t_LOF_get__quasiInertial(t_LOF *self, void *data);
      static PyGetSetDef t_LOF__fields_[] = {
        DECLARE_GET_FIELD(t_LOF, name),
        DECLARE_GET_FIELD(t_LOF, quasiInertial),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_LOF__methods_[] = {
        DECLARE_METHOD(t_LOF, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LOF, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LOF, getName, METH_NOARGS),
        DECLARE_METHOD(t_LOF, isQuasiInertial, METH_NOARGS),
        DECLARE_METHOD(t_LOF, rotationFromInertial, METH_VARARGS),
        DECLARE_METHOD(t_LOF, rotationFromLOF, METH_VARARGS),
        DECLARE_METHOD(t_LOF, rotationFromLOFInToLOFOut, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_LOF, transformFromInertial, METH_VARARGS),
        DECLARE_METHOD(t_LOF, transformFromLOF, METH_VARARGS),
        DECLARE_METHOD(t_LOF, transformFromLOFInToLOFOut, METH_VARARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(LOF)[] = {
        { Py_tp_methods, t_LOF__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_LOF__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(LOF)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(LOF, t_LOF, LOF);

      void t_LOF::install(PyObject *module)
      {
        installType(&PY_TYPE(LOF), &PY_TYPE_DEF(LOF), module, "LOF", 0);
      }

      void t_LOF::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(LOF), "class_", make_descriptor(LOF::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LOF), "wrapfn_", make_descriptor(t_LOF::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LOF), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_LOF_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, LOF::initializeClass, 1)))
          return NULL;
        return t_LOF::wrap_Object(LOF(((t_LOF *) arg)->object.this$));
      }
      static PyObject *t_LOF_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, LOF::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_LOF_getName(t_LOF *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getName());
        return j2p(result);
      }

      static PyObject *t_LOF_isQuasiInertial(t_LOF *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isQuasiInertial());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_LOF_rotationFromInertial(t_LOF *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::utils::PVCoordinates a1((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Rotation result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.rotationFromInertial(a0, a1));
              return ::org::hipparchus::geometry::euclidean::threed::t_Rotation::wrap_Object(result);
            }
          }
          break;
         case 3:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::FieldPVCoordinates a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::hipparchus::geometry::euclidean::threed::FieldRotation result((jobject) NULL);

            if (!parseArgs(args, "KKK", ::org::hipparchus::Field::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a2, &p2, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
            {
              OBJ_CALL(result = self->object.rotationFromInertial(a0, a1, a2));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "rotationFromInertial", args);
        return NULL;
      }

      static PyObject *t_LOF_rotationFromLOF(t_LOF *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            LOF a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            ::org::orekit::utils::PVCoordinates a2((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Rotation result((jobject) NULL);

            if (!parseArgs(args, "kkk", LOF::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.rotationFromLOF(a0, a1, a2));
              return ::org::hipparchus::geometry::euclidean::threed::t_Rotation::wrap_Object(result);
            }
          }
          break;
         case 4:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            LOF a1((jobject) NULL);
            ::org::orekit::time::FieldAbsoluteDate a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::utils::FieldPVCoordinates a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::hipparchus::geometry::euclidean::threed::FieldRotation result((jobject) NULL);

            if (!parseArgs(args, "KkKK", ::org::hipparchus::Field::initializeClass, LOF::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &p2, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a3, &p3, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
            {
              OBJ_CALL(result = self->object.rotationFromLOF(a0, a1, a2, a3));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "rotationFromLOF", args);
        return NULL;
      }

      static PyObject *t_LOF_rotationFromLOFInToLOFOut(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 4:
          {
            LOF a0((jobject) NULL);
            LOF a1((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
            ::org::orekit::utils::PVCoordinates a3((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Rotation result((jobject) NULL);

            if (!parseArgs(args, "kkkk", LOF::initializeClass, LOF::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = ::org::orekit::frames::LOF::rotationFromLOFInToLOFOut(a0, a1, a2, a3));
              return ::org::hipparchus::geometry::euclidean::threed::t_Rotation::wrap_Object(result);
            }
          }
          break;
         case 5:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            LOF a1((jobject) NULL);
            LOF a2((jobject) NULL);
            ::org::orekit::time::FieldAbsoluteDate a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::orekit::utils::FieldPVCoordinates a4((jobject) NULL);
            PyTypeObject **p4;
            ::org::hipparchus::geometry::euclidean::threed::FieldRotation result((jobject) NULL);

            if (!parseArgs(args, "KkkKK", ::org::hipparchus::Field::initializeClass, LOF::initializeClass, LOF::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &a3, &p3, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a4, &p4, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
            {
              OBJ_CALL(result = ::org::orekit::frames::LOF::rotationFromLOFInToLOFOut(a0, a1, a2, a3, a4));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "rotationFromLOFInToLOFOut", args);
        return NULL;
      }

      static PyObject *t_LOF_transformFromInertial(t_LOF *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::utils::PVCoordinates a1((jobject) NULL);
            ::org::orekit::frames::Transform result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.transformFromInertial(a0, a1));
              return ::org::orekit::frames::t_Transform::wrap_Object(result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::utils::FieldPVCoordinates a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::frames::FieldTransform result((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
            {
              OBJ_CALL(result = self->object.transformFromInertial(a0, a1));
              return ::org::orekit::frames::t_FieldTransform::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "transformFromInertial", args);
        return NULL;
      }

      static PyObject *t_LOF_transformFromLOF(t_LOF *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            LOF a0((jobject) NULL);
            ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::FieldPVCoordinates a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::frames::FieldTransform result((jobject) NULL);

            if (!parseArgs(args, "kKK", LOF::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a2, &p2, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
            {
              OBJ_CALL(result = self->object.transformFromLOF(a0, a1, a2));
              return ::org::orekit::frames::t_FieldTransform::wrap_Object(result);
            }
          }
          {
            LOF a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            ::org::orekit::utils::PVCoordinates a2((jobject) NULL);
            ::org::orekit::frames::Transform result((jobject) NULL);

            if (!parseArgs(args, "kkk", LOF::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.transformFromLOF(a0, a1, a2));
              return ::org::orekit::frames::t_Transform::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "transformFromLOF", args);
        return NULL;
      }

      static PyObject *t_LOF_transformFromLOFInToLOFOut(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 4:
          {
            LOF a0((jobject) NULL);
            LOF a1((jobject) NULL);
            ::org::orekit::time::FieldAbsoluteDate a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::utils::FieldPVCoordinates a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::orekit::frames::FieldTransform result((jobject) NULL);

            if (!parseArgs(args, "kkKK", LOF::initializeClass, LOF::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a3, &p3, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
            {
              OBJ_CALL(result = ::org::orekit::frames::LOF::transformFromLOFInToLOFOut(a0, a1, a2, a3));
              return ::org::orekit::frames::t_FieldTransform::wrap_Object(result);
            }
          }
          {
            LOF a0((jobject) NULL);
            LOF a1((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
            ::org::orekit::utils::PVCoordinates a3((jobject) NULL);
            ::org::orekit::frames::Transform result((jobject) NULL);

            if (!parseArgs(args, "kkkk", LOF::initializeClass, LOF::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = ::org::orekit::frames::LOF::transformFromLOFInToLOFOut(a0, a1, a2, a3));
              return ::org::orekit::frames::t_Transform::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "transformFromLOFInToLOFOut", args);
        return NULL;
      }

      static PyObject *t_LOF_get__name(t_LOF *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getName());
        return j2p(value);
      }

      static PyObject *t_LOF_get__quasiInertial(t_LOF *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isQuasiInertial());
        Py_RETURN_BOOL(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/data/DataProvidersManager.h"
#include "java/util/List.h"
#include "org/orekit/data/DataLoader.h"
#include "java/util/Set.h"
#include "java/lang/Class.h"
#include "org/orekit/data/DataProvider.h"
#include "java/lang/String.h"
#include "org/orekit/data/FiltersManager.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *DataProvidersManager::class$ = NULL;
      jmethodID *DataProvidersManager::mids$ = NULL;
      bool DataProvidersManager::live$ = false;
      ::java::lang::String *DataProvidersManager::OREKIT_DATA_PATH = NULL;

      jclass DataProvidersManager::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/DataProvidersManager");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_addDefaultProviders_a1fa5dae97ea5ed2] = env->getMethodID(cls, "addDefaultProviders", "()V");
          mids$[mid_addProvider_84a0646757ec5507] = env->getMethodID(cls, "addProvider", "(Lorg/orekit/data/DataProvider;)V");
          mids$[mid_clearLoadedDataNames_a1fa5dae97ea5ed2] = env->getMethodID(cls, "clearLoadedDataNames", "()V");
          mids$[mid_clearProviders_a1fa5dae97ea5ed2] = env->getMethodID(cls, "clearProviders", "()V");
          mids$[mid_feed_ec883b81a8ab3cb3] = env->getMethodID(cls, "feed", "(Ljava/lang/String;Lorg/orekit/data/DataLoader;)Z");
          mids$[mid_getFiltersManager_15c99bd7b29bc28d] = env->getMethodID(cls, "getFiltersManager", "()Lorg/orekit/data/FiltersManager;");
          mids$[mid_getLoadedDataNames_7e8f11dd23d1142c] = env->getMethodID(cls, "getLoadedDataNames", "()Ljava/util/Set;");
          mids$[mid_getProviders_e62d3bb06d56d7e3] = env->getMethodID(cls, "getProviders", "()Ljava/util/List;");
          mids$[mid_isSupported_3c68971827ec2e7c] = env->getMethodID(cls, "isSupported", "(Lorg/orekit/data/DataProvider;)Z");
          mids$[mid_removeProvider_57f5f42ad329d7c6] = env->getMethodID(cls, "removeProvider", "(Lorg/orekit/data/DataProvider;)Lorg/orekit/data/DataProvider;");
          mids$[mid_resetFiltersToDefault_a1fa5dae97ea5ed2] = env->getMethodID(cls, "resetFiltersToDefault", "()V");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          OREKIT_DATA_PATH = new ::java::lang::String(env->getStaticObjectField(cls, "OREKIT_DATA_PATH", "Ljava/lang/String;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      DataProvidersManager::DataProvidersManager() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

      void DataProvidersManager::addDefaultProviders() const
      {
        env->callVoidMethod(this$, mids$[mid_addDefaultProviders_a1fa5dae97ea5ed2]);
      }

      void DataProvidersManager::addProvider(const ::org::orekit::data::DataProvider & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_addProvider_84a0646757ec5507], a0.this$);
      }

      void DataProvidersManager::clearLoadedDataNames() const
      {
        env->callVoidMethod(this$, mids$[mid_clearLoadedDataNames_a1fa5dae97ea5ed2]);
      }

      void DataProvidersManager::clearProviders() const
      {
        env->callVoidMethod(this$, mids$[mid_clearProviders_a1fa5dae97ea5ed2]);
      }

      jboolean DataProvidersManager::feed(const ::java::lang::String & a0, const ::org::orekit::data::DataLoader & a1) const
      {
        return env->callBooleanMethod(this$, mids$[mid_feed_ec883b81a8ab3cb3], a0.this$, a1.this$);
      }

      ::org::orekit::data::FiltersManager DataProvidersManager::getFiltersManager() const
      {
        return ::org::orekit::data::FiltersManager(env->callObjectMethod(this$, mids$[mid_getFiltersManager_15c99bd7b29bc28d]));
      }

      ::java::util::Set DataProvidersManager::getLoadedDataNames() const
      {
        return ::java::util::Set(env->callObjectMethod(this$, mids$[mid_getLoadedDataNames_7e8f11dd23d1142c]));
      }

      ::java::util::List DataProvidersManager::getProviders() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getProviders_e62d3bb06d56d7e3]));
      }

      jboolean DataProvidersManager::isSupported(const ::org::orekit::data::DataProvider & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_isSupported_3c68971827ec2e7c], a0.this$);
      }

      ::org::orekit::data::DataProvider DataProvidersManager::removeProvider(const ::org::orekit::data::DataProvider & a0) const
      {
        return ::org::orekit::data::DataProvider(env->callObjectMethod(this$, mids$[mid_removeProvider_57f5f42ad329d7c6], a0.this$));
      }

      void DataProvidersManager::resetFiltersToDefault() const
      {
        env->callVoidMethod(this$, mids$[mid_resetFiltersToDefault_a1fa5dae97ea5ed2]);
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
      static PyObject *t_DataProvidersManager_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DataProvidersManager_instance_(PyTypeObject *type, PyObject *arg);
      static int t_DataProvidersManager_init_(t_DataProvidersManager *self, PyObject *args, PyObject *kwds);
      static PyObject *t_DataProvidersManager_addDefaultProviders(t_DataProvidersManager *self);
      static PyObject *t_DataProvidersManager_addProvider(t_DataProvidersManager *self, PyObject *arg);
      static PyObject *t_DataProvidersManager_clearLoadedDataNames(t_DataProvidersManager *self);
      static PyObject *t_DataProvidersManager_clearProviders(t_DataProvidersManager *self);
      static PyObject *t_DataProvidersManager_feed(t_DataProvidersManager *self, PyObject *args);
      static PyObject *t_DataProvidersManager_getFiltersManager(t_DataProvidersManager *self);
      static PyObject *t_DataProvidersManager_getLoadedDataNames(t_DataProvidersManager *self);
      static PyObject *t_DataProvidersManager_getProviders(t_DataProvidersManager *self);
      static PyObject *t_DataProvidersManager_isSupported(t_DataProvidersManager *self, PyObject *arg);
      static PyObject *t_DataProvidersManager_removeProvider(t_DataProvidersManager *self, PyObject *arg);
      static PyObject *t_DataProvidersManager_resetFiltersToDefault(t_DataProvidersManager *self);
      static PyObject *t_DataProvidersManager_get__filtersManager(t_DataProvidersManager *self, void *data);
      static PyObject *t_DataProvidersManager_get__loadedDataNames(t_DataProvidersManager *self, void *data);
      static PyObject *t_DataProvidersManager_get__providers(t_DataProvidersManager *self, void *data);
      static PyGetSetDef t_DataProvidersManager__fields_[] = {
        DECLARE_GET_FIELD(t_DataProvidersManager, filtersManager),
        DECLARE_GET_FIELD(t_DataProvidersManager, loadedDataNames),
        DECLARE_GET_FIELD(t_DataProvidersManager, providers),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_DataProvidersManager__methods_[] = {
        DECLARE_METHOD(t_DataProvidersManager, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DataProvidersManager, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DataProvidersManager, addDefaultProviders, METH_NOARGS),
        DECLARE_METHOD(t_DataProvidersManager, addProvider, METH_O),
        DECLARE_METHOD(t_DataProvidersManager, clearLoadedDataNames, METH_NOARGS),
        DECLARE_METHOD(t_DataProvidersManager, clearProviders, METH_NOARGS),
        DECLARE_METHOD(t_DataProvidersManager, feed, METH_VARARGS),
        DECLARE_METHOD(t_DataProvidersManager, getFiltersManager, METH_NOARGS),
        DECLARE_METHOD(t_DataProvidersManager, getLoadedDataNames, METH_NOARGS),
        DECLARE_METHOD(t_DataProvidersManager, getProviders, METH_NOARGS),
        DECLARE_METHOD(t_DataProvidersManager, isSupported, METH_O),
        DECLARE_METHOD(t_DataProvidersManager, removeProvider, METH_O),
        DECLARE_METHOD(t_DataProvidersManager, resetFiltersToDefault, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(DataProvidersManager)[] = {
        { Py_tp_methods, t_DataProvidersManager__methods_ },
        { Py_tp_init, (void *) t_DataProvidersManager_init_ },
        { Py_tp_getset, t_DataProvidersManager__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(DataProvidersManager)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(DataProvidersManager, t_DataProvidersManager, DataProvidersManager);

      void t_DataProvidersManager::install(PyObject *module)
      {
        installType(&PY_TYPE(DataProvidersManager), &PY_TYPE_DEF(DataProvidersManager), module, "DataProvidersManager", 0);
      }

      void t_DataProvidersManager::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(DataProvidersManager), "class_", make_descriptor(DataProvidersManager::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DataProvidersManager), "wrapfn_", make_descriptor(t_DataProvidersManager::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DataProvidersManager), "boxfn_", make_descriptor(boxObject));
        env->getClass(DataProvidersManager::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(DataProvidersManager), "OREKIT_DATA_PATH", make_descriptor(j2p(*DataProvidersManager::OREKIT_DATA_PATH)));
      }

      static PyObject *t_DataProvidersManager_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, DataProvidersManager::initializeClass, 1)))
          return NULL;
        return t_DataProvidersManager::wrap_Object(DataProvidersManager(((t_DataProvidersManager *) arg)->object.this$));
      }
      static PyObject *t_DataProvidersManager_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, DataProvidersManager::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_DataProvidersManager_init_(t_DataProvidersManager *self, PyObject *args, PyObject *kwds)
      {
        DataProvidersManager object((jobject) NULL);

        INT_CALL(object = DataProvidersManager());
        self->object = object;

        return 0;
      }

      static PyObject *t_DataProvidersManager_addDefaultProviders(t_DataProvidersManager *self)
      {
        OBJ_CALL(self->object.addDefaultProviders());
        Py_RETURN_NONE;
      }

      static PyObject *t_DataProvidersManager_addProvider(t_DataProvidersManager *self, PyObject *arg)
      {
        ::org::orekit::data::DataProvider a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::data::DataProvider::initializeClass, &a0))
        {
          OBJ_CALL(self->object.addProvider(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addProvider", arg);
        return NULL;
      }

      static PyObject *t_DataProvidersManager_clearLoadedDataNames(t_DataProvidersManager *self)
      {
        OBJ_CALL(self->object.clearLoadedDataNames());
        Py_RETURN_NONE;
      }

      static PyObject *t_DataProvidersManager_clearProviders(t_DataProvidersManager *self)
      {
        OBJ_CALL(self->object.clearProviders());
        Py_RETURN_NONE;
      }

      static PyObject *t_DataProvidersManager_feed(t_DataProvidersManager *self, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        ::org::orekit::data::DataLoader a1((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "sk", ::org::orekit::data::DataLoader::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.feed(a0, a1));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "feed", args);
        return NULL;
      }

      static PyObject *t_DataProvidersManager_getFiltersManager(t_DataProvidersManager *self)
      {
        ::org::orekit::data::FiltersManager result((jobject) NULL);
        OBJ_CALL(result = self->object.getFiltersManager());
        return ::org::orekit::data::t_FiltersManager::wrap_Object(result);
      }

      static PyObject *t_DataProvidersManager_getLoadedDataNames(t_DataProvidersManager *self)
      {
        ::java::util::Set result((jobject) NULL);
        OBJ_CALL(result = self->object.getLoadedDataNames());
        return ::java::util::t_Set::wrap_Object(result, ::java::lang::PY_TYPE(String));
      }

      static PyObject *t_DataProvidersManager_getProviders(t_DataProvidersManager *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getProviders());
        return ::java::util::t_List::wrap_Object(result, ::org::orekit::data::PY_TYPE(DataProvider));
      }

      static PyObject *t_DataProvidersManager_isSupported(t_DataProvidersManager *self, PyObject *arg)
      {
        ::org::orekit::data::DataProvider a0((jobject) NULL);
        jboolean result;

        if (!parseArg(arg, "k", ::org::orekit::data::DataProvider::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.isSupported(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "isSupported", arg);
        return NULL;
      }

      static PyObject *t_DataProvidersManager_removeProvider(t_DataProvidersManager *self, PyObject *arg)
      {
        ::org::orekit::data::DataProvider a0((jobject) NULL);
        ::org::orekit::data::DataProvider result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::data::DataProvider::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.removeProvider(a0));
          return ::org::orekit::data::t_DataProvider::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "removeProvider", arg);
        return NULL;
      }

      static PyObject *t_DataProvidersManager_resetFiltersToDefault(t_DataProvidersManager *self)
      {
        OBJ_CALL(self->object.resetFiltersToDefault());
        Py_RETURN_NONE;
      }

      static PyObject *t_DataProvidersManager_get__filtersManager(t_DataProvidersManager *self, void *data)
      {
        ::org::orekit::data::FiltersManager value((jobject) NULL);
        OBJ_CALL(value = self->object.getFiltersManager());
        return ::org::orekit::data::t_FiltersManager::wrap_Object(value);
      }

      static PyObject *t_DataProvidersManager_get__loadedDataNames(t_DataProvidersManager *self, void *data)
      {
        ::java::util::Set value((jobject) NULL);
        OBJ_CALL(value = self->object.getLoadedDataNames());
        return ::java::util::t_Set::wrap_Object(value);
      }

      static PyObject *t_DataProvidersManager_get__providers(t_DataProvidersManager *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getProviders());
        return ::java::util::t_List::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ilrs/CRDConfiguration$SystemConfiguration.h"
#include "java/lang/String.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        ::java::lang::Class *CRDConfiguration$SystemConfiguration::class$ = NULL;
        jmethodID *CRDConfiguration$SystemConfiguration::mids$ = NULL;
        bool CRDConfiguration$SystemConfiguration::live$ = false;

        jclass CRDConfiguration$SystemConfiguration::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/ilrs/CRDConfiguration$SystemConfiguration");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_getComponents_e62d3bb06d56d7e3] = env->getMethodID(cls, "getComponents", "()Ljava/util/List;");
            mids$[mid_getSystemId_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getSystemId", "()Ljava/lang/String;");
            mids$[mid_getWavelength_b74f83833fdad017] = env->getMethodID(cls, "getWavelength", "()D");
            mids$[mid_setComponents_4f1e9165cc3f09e7] = env->getMethodID(cls, "setComponents", "([Ljava/lang/String;)V");
            mids$[mid_setSystemId_734b91ac30d5f9b4] = env->getMethodID(cls, "setSystemId", "(Ljava/lang/String;)V");
            mids$[mid_setWavelength_8ba9fe7a847cecad] = env->getMethodID(cls, "setWavelength", "(D)V");
            mids$[mid_toCrdString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toCrdString", "()Ljava/lang/String;");
            mids$[mid_toString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        CRDConfiguration$SystemConfiguration::CRDConfiguration$SystemConfiguration() : ::org::orekit::files::ilrs::CRDConfiguration$BaseConfiguration(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        ::java::util::List CRDConfiguration$SystemConfiguration::getComponents() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getComponents_e62d3bb06d56d7e3]));
        }

        ::java::lang::String CRDConfiguration$SystemConfiguration::getSystemId() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSystemId_1c1fa1e935d6cdcf]));
        }

        jdouble CRDConfiguration$SystemConfiguration::getWavelength() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getWavelength_b74f83833fdad017]);
        }

        void CRDConfiguration$SystemConfiguration::setComponents(const JArray< ::java::lang::String > & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setComponents_4f1e9165cc3f09e7], a0.this$);
        }

        void CRDConfiguration$SystemConfiguration::setSystemId(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setSystemId_734b91ac30d5f9b4], a0.this$);
        }

        void CRDConfiguration$SystemConfiguration::setWavelength(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setWavelength_8ba9fe7a847cecad], a0);
        }

        ::java::lang::String CRDConfiguration$SystemConfiguration::toCrdString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toCrdString_1c1fa1e935d6cdcf]));
        }

        ::java::lang::String CRDConfiguration$SystemConfiguration::toString() const
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
        static PyObject *t_CRDConfiguration$SystemConfiguration_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CRDConfiguration$SystemConfiguration_instance_(PyTypeObject *type, PyObject *arg);
        static int t_CRDConfiguration$SystemConfiguration_init_(t_CRDConfiguration$SystemConfiguration *self, PyObject *args, PyObject *kwds);
        static PyObject *t_CRDConfiguration$SystemConfiguration_getComponents(t_CRDConfiguration$SystemConfiguration *self);
        static PyObject *t_CRDConfiguration$SystemConfiguration_getSystemId(t_CRDConfiguration$SystemConfiguration *self);
        static PyObject *t_CRDConfiguration$SystemConfiguration_getWavelength(t_CRDConfiguration$SystemConfiguration *self);
        static PyObject *t_CRDConfiguration$SystemConfiguration_setComponents(t_CRDConfiguration$SystemConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$SystemConfiguration_setSystemId(t_CRDConfiguration$SystemConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$SystemConfiguration_setWavelength(t_CRDConfiguration$SystemConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$SystemConfiguration_toCrdString(t_CRDConfiguration$SystemConfiguration *self, PyObject *args);
        static PyObject *t_CRDConfiguration$SystemConfiguration_toString(t_CRDConfiguration$SystemConfiguration *self, PyObject *args);
        static PyObject *t_CRDConfiguration$SystemConfiguration_get__components(t_CRDConfiguration$SystemConfiguration *self, void *data);
        static int t_CRDConfiguration$SystemConfiguration_set__components(t_CRDConfiguration$SystemConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$SystemConfiguration_get__systemId(t_CRDConfiguration$SystemConfiguration *self, void *data);
        static int t_CRDConfiguration$SystemConfiguration_set__systemId(t_CRDConfiguration$SystemConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$SystemConfiguration_get__wavelength(t_CRDConfiguration$SystemConfiguration *self, void *data);
        static int t_CRDConfiguration$SystemConfiguration_set__wavelength(t_CRDConfiguration$SystemConfiguration *self, PyObject *arg, void *data);
        static PyGetSetDef t_CRDConfiguration$SystemConfiguration__fields_[] = {
          DECLARE_GETSET_FIELD(t_CRDConfiguration$SystemConfiguration, components),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$SystemConfiguration, systemId),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$SystemConfiguration, wavelength),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_CRDConfiguration$SystemConfiguration__methods_[] = {
          DECLARE_METHOD(t_CRDConfiguration$SystemConfiguration, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRDConfiguration$SystemConfiguration, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRDConfiguration$SystemConfiguration, getComponents, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$SystemConfiguration, getSystemId, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$SystemConfiguration, getWavelength, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$SystemConfiguration, setComponents, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$SystemConfiguration, setSystemId, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$SystemConfiguration, setWavelength, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$SystemConfiguration, toCrdString, METH_VARARGS),
          DECLARE_METHOD(t_CRDConfiguration$SystemConfiguration, toString, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(CRDConfiguration$SystemConfiguration)[] = {
          { Py_tp_methods, t_CRDConfiguration$SystemConfiguration__methods_ },
          { Py_tp_init, (void *) t_CRDConfiguration$SystemConfiguration_init_ },
          { Py_tp_getset, t_CRDConfiguration$SystemConfiguration__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(CRDConfiguration$SystemConfiguration)[] = {
          &PY_TYPE_DEF(::org::orekit::files::ilrs::CRDConfiguration$BaseConfiguration),
          NULL
        };

        DEFINE_TYPE(CRDConfiguration$SystemConfiguration, t_CRDConfiguration$SystemConfiguration, CRDConfiguration$SystemConfiguration);

        void t_CRDConfiguration$SystemConfiguration::install(PyObject *module)
        {
          installType(&PY_TYPE(CRDConfiguration$SystemConfiguration), &PY_TYPE_DEF(CRDConfiguration$SystemConfiguration), module, "CRDConfiguration$SystemConfiguration", 0);
        }

        void t_CRDConfiguration$SystemConfiguration::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration$SystemConfiguration), "class_", make_descriptor(CRDConfiguration$SystemConfiguration::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration$SystemConfiguration), "wrapfn_", make_descriptor(t_CRDConfiguration$SystemConfiguration::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration$SystemConfiguration), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_CRDConfiguration$SystemConfiguration_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, CRDConfiguration$SystemConfiguration::initializeClass, 1)))
            return NULL;
          return t_CRDConfiguration$SystemConfiguration::wrap_Object(CRDConfiguration$SystemConfiguration(((t_CRDConfiguration$SystemConfiguration *) arg)->object.this$));
        }
        static PyObject *t_CRDConfiguration$SystemConfiguration_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, CRDConfiguration$SystemConfiguration::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_CRDConfiguration$SystemConfiguration_init_(t_CRDConfiguration$SystemConfiguration *self, PyObject *args, PyObject *kwds)
        {
          CRDConfiguration$SystemConfiguration object((jobject) NULL);

          INT_CALL(object = CRDConfiguration$SystemConfiguration());
          self->object = object;

          return 0;
        }

        static PyObject *t_CRDConfiguration$SystemConfiguration_getComponents(t_CRDConfiguration$SystemConfiguration *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getComponents());
          return ::java::util::t_List::wrap_Object(result, ::java::lang::PY_TYPE(String));
        }

        static PyObject *t_CRDConfiguration$SystemConfiguration_getSystemId(t_CRDConfiguration$SystemConfiguration *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getSystemId());
          return j2p(result);
        }

        static PyObject *t_CRDConfiguration$SystemConfiguration_getWavelength(t_CRDConfiguration$SystemConfiguration *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getWavelength());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRDConfiguration$SystemConfiguration_setComponents(t_CRDConfiguration$SystemConfiguration *self, PyObject *arg)
        {
          JArray< ::java::lang::String > a0((jobject) NULL);

          if (!parseArg(arg, "[s", &a0))
          {
            OBJ_CALL(self->object.setComponents(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setComponents", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$SystemConfiguration_setSystemId(t_CRDConfiguration$SystemConfiguration *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setSystemId(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setSystemId", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$SystemConfiguration_setWavelength(t_CRDConfiguration$SystemConfiguration *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setWavelength(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setWavelength", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$SystemConfiguration_toCrdString(t_CRDConfiguration$SystemConfiguration *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toCrdString());
            return j2p(result);
          }

          return callSuper(PY_TYPE(CRDConfiguration$SystemConfiguration), (PyObject *) self, "toCrdString", args, 2);
        }

        static PyObject *t_CRDConfiguration$SystemConfiguration_toString(t_CRDConfiguration$SystemConfiguration *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toString());
            return j2p(result);
          }

          return callSuper(PY_TYPE(CRDConfiguration$SystemConfiguration), (PyObject *) self, "toString", args, 2);
        }

        static PyObject *t_CRDConfiguration$SystemConfiguration_get__components(t_CRDConfiguration$SystemConfiguration *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getComponents());
          return ::java::util::t_List::wrap_Object(value);
        }
        static int t_CRDConfiguration$SystemConfiguration_set__components(t_CRDConfiguration$SystemConfiguration *self, PyObject *arg, void *data)
        {
          {
            JArray< ::java::lang::String > value((jobject) NULL);
            if (!parseArg(arg, "[s", &value))
            {
              INT_CALL(self->object.setComponents(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "components", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$SystemConfiguration_get__systemId(t_CRDConfiguration$SystemConfiguration *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getSystemId());
          return j2p(value);
        }
        static int t_CRDConfiguration$SystemConfiguration_set__systemId(t_CRDConfiguration$SystemConfiguration *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setSystemId(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "systemId", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$SystemConfiguration_get__wavelength(t_CRDConfiguration$SystemConfiguration *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getWavelength());
          return PyFloat_FromDouble((double) value);
        }
        static int t_CRDConfiguration$SystemConfiguration_set__wavelength(t_CRDConfiguration$SystemConfiguration *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setWavelength(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "wavelength", arg);
          return -1;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/ShortPeriodTerms.h"
#include "java/util/Map.h"
#include "org/orekit/orbits/Orbit.h"
#include "java/util/Set.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {

            ::java::lang::Class *ShortPeriodTerms::class$ = NULL;
            jmethodID *ShortPeriodTerms::mids$ = NULL;
            bool ShortPeriodTerms::live$ = false;

            jclass ShortPeriodTerms::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/forces/ShortPeriodTerms");

                mids$ = new jmethodID[max_mid];
                mids$[mid_getCoefficients_92ad788dda1c7643] = env->getMethodID(cls, "getCoefficients", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/Set;)Ljava/util/Map;");
                mids$[mid_getCoefficientsKeyPrefix_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getCoefficientsKeyPrefix", "()Ljava/lang/String;");
                mids$[mid_value_88da41feb340affc] = env->getMethodID(cls, "value", "(Lorg/orekit/orbits/Orbit;)[D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ::java::util::Map ShortPeriodTerms::getCoefficients(const ::org::orekit::time::AbsoluteDate & a0, const ::java::util::Set & a1) const
            {
              return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getCoefficients_92ad788dda1c7643], a0.this$, a1.this$));
            }

            ::java::lang::String ShortPeriodTerms::getCoefficientsKeyPrefix() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCoefficientsKeyPrefix_1c1fa1e935d6cdcf]));
            }

            JArray< jdouble > ShortPeriodTerms::value(const ::org::orekit::orbits::Orbit & a0) const
            {
              return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_value_88da41feb340affc], a0.this$));
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
            static PyObject *t_ShortPeriodTerms_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ShortPeriodTerms_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ShortPeriodTerms_getCoefficients(t_ShortPeriodTerms *self, PyObject *args);
            static PyObject *t_ShortPeriodTerms_getCoefficientsKeyPrefix(t_ShortPeriodTerms *self);
            static PyObject *t_ShortPeriodTerms_value(t_ShortPeriodTerms *self, PyObject *arg);
            static PyObject *t_ShortPeriodTerms_get__coefficientsKeyPrefix(t_ShortPeriodTerms *self, void *data);
            static PyGetSetDef t_ShortPeriodTerms__fields_[] = {
              DECLARE_GET_FIELD(t_ShortPeriodTerms, coefficientsKeyPrefix),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_ShortPeriodTerms__methods_[] = {
              DECLARE_METHOD(t_ShortPeriodTerms, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ShortPeriodTerms, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ShortPeriodTerms, getCoefficients, METH_VARARGS),
              DECLARE_METHOD(t_ShortPeriodTerms, getCoefficientsKeyPrefix, METH_NOARGS),
              DECLARE_METHOD(t_ShortPeriodTerms, value, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ShortPeriodTerms)[] = {
              { Py_tp_methods, t_ShortPeriodTerms__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_ShortPeriodTerms__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ShortPeriodTerms)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(ShortPeriodTerms, t_ShortPeriodTerms, ShortPeriodTerms);

            void t_ShortPeriodTerms::install(PyObject *module)
            {
              installType(&PY_TYPE(ShortPeriodTerms), &PY_TYPE_DEF(ShortPeriodTerms), module, "ShortPeriodTerms", 0);
            }

            void t_ShortPeriodTerms::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ShortPeriodTerms), "class_", make_descriptor(ShortPeriodTerms::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ShortPeriodTerms), "wrapfn_", make_descriptor(t_ShortPeriodTerms::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ShortPeriodTerms), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ShortPeriodTerms_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ShortPeriodTerms::initializeClass, 1)))
                return NULL;
              return t_ShortPeriodTerms::wrap_Object(ShortPeriodTerms(((t_ShortPeriodTerms *) arg)->object.this$));
            }
            static PyObject *t_ShortPeriodTerms_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ShortPeriodTerms::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_ShortPeriodTerms_getCoefficients(t_ShortPeriodTerms *self, PyObject *args)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              ::java::util::Set a1((jobject) NULL);
              PyTypeObject **p1;
              ::java::util::Map result((jobject) NULL);

              if (!parseArgs(args, "kK", ::org::orekit::time::AbsoluteDate::initializeClass, ::java::util::Set::initializeClass, &a0, &a1, &p1, ::java::util::t_Set::parameters_))
              {
                OBJ_CALL(result = self->object.getCoefficients(a0, a1));
                return ::java::util::t_Map::wrap_Object(result, ::java::lang::PY_TYPE(String), ::java::lang::PY_TYPE(Object));
              }

              PyErr_SetArgsError((PyObject *) self, "getCoefficients", args);
              return NULL;
            }

            static PyObject *t_ShortPeriodTerms_getCoefficientsKeyPrefix(t_ShortPeriodTerms *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getCoefficientsKeyPrefix());
              return j2p(result);
            }

            static PyObject *t_ShortPeriodTerms_value(t_ShortPeriodTerms *self, PyObject *arg)
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              JArray< jdouble > result((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::orbits::Orbit::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.value(a0));
                return result.wrap();
              }

              PyErr_SetArgsError((PyObject *) self, "value", arg);
              return NULL;
            }

            static PyObject *t_ShortPeriodTerms_get__coefficientsKeyPrefix(t_ShortPeriodTerms *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getCoefficientsKeyPrefix());
              return j2p(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitDetermination.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *OrbitDeterminationKey::class$ = NULL;
              jmethodID *OrbitDeterminationKey::mids$ = NULL;
              bool OrbitDeterminationKey::live$ = false;
              OrbitDeterminationKey *OrbitDeterminationKey::ACTUAL_OD_SPAN = NULL;
              OrbitDeterminationKey *OrbitDeterminationKey::COMMENT = NULL;
              OrbitDeterminationKey *OrbitDeterminationKey::CONSIDER_N = NULL;
              OrbitDeterminationKey *OrbitDeterminationKey::CONSIDER_PARAMS = NULL;
              OrbitDeterminationKey *OrbitDeterminationKey::DATA_TYPES = NULL;
              OrbitDeterminationKey *OrbitDeterminationKey::DAYS_SINCE_FIRST_OBS = NULL;
              OrbitDeterminationKey *OrbitDeterminationKey::DAYS_SINCE_LAST_OBS = NULL;
              OrbitDeterminationKey *OrbitDeterminationKey::GDOP = NULL;
              OrbitDeterminationKey *OrbitDeterminationKey::MAXIMUM_OBS_GAP = NULL;
              OrbitDeterminationKey *OrbitDeterminationKey::OBS_AVAILABLE = NULL;
              OrbitDeterminationKey *OrbitDeterminationKey::OBS_USED = NULL;
              OrbitDeterminationKey *OrbitDeterminationKey::OD_CONFIDENCE = NULL;
              OrbitDeterminationKey *OrbitDeterminationKey::OD_EPOCH = NULL;
              OrbitDeterminationKey *OrbitDeterminationKey::OD_EPOCH_EIGINT = NULL;
              OrbitDeterminationKey *OrbitDeterminationKey::OD_EPOCH_EIGMAJ = NULL;
              OrbitDeterminationKey *OrbitDeterminationKey::OD_EPOCH_EIGMIN = NULL;
              OrbitDeterminationKey *OrbitDeterminationKey::OD_ID = NULL;
              OrbitDeterminationKey *OrbitDeterminationKey::OD_MAX_PRED_EIGMAJ = NULL;
              OrbitDeterminationKey *OrbitDeterminationKey::OD_METHOD = NULL;
              OrbitDeterminationKey *OrbitDeterminationKey::OD_MIN_PRED_EIGMIN = NULL;
              OrbitDeterminationKey *OrbitDeterminationKey::OD_PREV_ID = NULL;
              OrbitDeterminationKey *OrbitDeterminationKey::RECOMMENDED_OD_SPAN = NULL;
              OrbitDeterminationKey *OrbitDeterminationKey::SEDR = NULL;
              OrbitDeterminationKey *OrbitDeterminationKey::SENSORS = NULL;
              OrbitDeterminationKey *OrbitDeterminationKey::SENSORS_N = NULL;
              OrbitDeterminationKey *OrbitDeterminationKey::SOLVE_N = NULL;
              OrbitDeterminationKey *OrbitDeterminationKey::SOLVE_STATES = NULL;
              OrbitDeterminationKey *OrbitDeterminationKey::TRACKS_AVAILABLE = NULL;
              OrbitDeterminationKey *OrbitDeterminationKey::TRACKS_USED = NULL;
              OrbitDeterminationKey *OrbitDeterminationKey::WEIGHTED_RMS = NULL;

              jclass OrbitDeterminationKey::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_process_22f0fccb35944945] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDetermination;)Z");
                  mids$[mid_valueOf_9354acd6506346ad] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey;");
                  mids$[mid_values_1ed7791c9e6b718f] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  ACTUAL_OD_SPAN = new OrbitDeterminationKey(env->getStaticObjectField(cls, "ACTUAL_OD_SPAN", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey;"));
                  COMMENT = new OrbitDeterminationKey(env->getStaticObjectField(cls, "COMMENT", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey;"));
                  CONSIDER_N = new OrbitDeterminationKey(env->getStaticObjectField(cls, "CONSIDER_N", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey;"));
                  CONSIDER_PARAMS = new OrbitDeterminationKey(env->getStaticObjectField(cls, "CONSIDER_PARAMS", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey;"));
                  DATA_TYPES = new OrbitDeterminationKey(env->getStaticObjectField(cls, "DATA_TYPES", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey;"));
                  DAYS_SINCE_FIRST_OBS = new OrbitDeterminationKey(env->getStaticObjectField(cls, "DAYS_SINCE_FIRST_OBS", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey;"));
                  DAYS_SINCE_LAST_OBS = new OrbitDeterminationKey(env->getStaticObjectField(cls, "DAYS_SINCE_LAST_OBS", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey;"));
                  GDOP = new OrbitDeterminationKey(env->getStaticObjectField(cls, "GDOP", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey;"));
                  MAXIMUM_OBS_GAP = new OrbitDeterminationKey(env->getStaticObjectField(cls, "MAXIMUM_OBS_GAP", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey;"));
                  OBS_AVAILABLE = new OrbitDeterminationKey(env->getStaticObjectField(cls, "OBS_AVAILABLE", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey;"));
                  OBS_USED = new OrbitDeterminationKey(env->getStaticObjectField(cls, "OBS_USED", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey;"));
                  OD_CONFIDENCE = new OrbitDeterminationKey(env->getStaticObjectField(cls, "OD_CONFIDENCE", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey;"));
                  OD_EPOCH = new OrbitDeterminationKey(env->getStaticObjectField(cls, "OD_EPOCH", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey;"));
                  OD_EPOCH_EIGINT = new OrbitDeterminationKey(env->getStaticObjectField(cls, "OD_EPOCH_EIGINT", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey;"));
                  OD_EPOCH_EIGMAJ = new OrbitDeterminationKey(env->getStaticObjectField(cls, "OD_EPOCH_EIGMAJ", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey;"));
                  OD_EPOCH_EIGMIN = new OrbitDeterminationKey(env->getStaticObjectField(cls, "OD_EPOCH_EIGMIN", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey;"));
                  OD_ID = new OrbitDeterminationKey(env->getStaticObjectField(cls, "OD_ID", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey;"));
                  OD_MAX_PRED_EIGMAJ = new OrbitDeterminationKey(env->getStaticObjectField(cls, "OD_MAX_PRED_EIGMAJ", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey;"));
                  OD_METHOD = new OrbitDeterminationKey(env->getStaticObjectField(cls, "OD_METHOD", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey;"));
                  OD_MIN_PRED_EIGMIN = new OrbitDeterminationKey(env->getStaticObjectField(cls, "OD_MIN_PRED_EIGMIN", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey;"));
                  OD_PREV_ID = new OrbitDeterminationKey(env->getStaticObjectField(cls, "OD_PREV_ID", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey;"));
                  RECOMMENDED_OD_SPAN = new OrbitDeterminationKey(env->getStaticObjectField(cls, "RECOMMENDED_OD_SPAN", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey;"));
                  SEDR = new OrbitDeterminationKey(env->getStaticObjectField(cls, "SEDR", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey;"));
                  SENSORS = new OrbitDeterminationKey(env->getStaticObjectField(cls, "SENSORS", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey;"));
                  SENSORS_N = new OrbitDeterminationKey(env->getStaticObjectField(cls, "SENSORS_N", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey;"));
                  SOLVE_N = new OrbitDeterminationKey(env->getStaticObjectField(cls, "SOLVE_N", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey;"));
                  SOLVE_STATES = new OrbitDeterminationKey(env->getStaticObjectField(cls, "SOLVE_STATES", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey;"));
                  TRACKS_AVAILABLE = new OrbitDeterminationKey(env->getStaticObjectField(cls, "TRACKS_AVAILABLE", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey;"));
                  TRACKS_USED = new OrbitDeterminationKey(env->getStaticObjectField(cls, "TRACKS_USED", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey;"));
                  WEIGHTED_RMS = new OrbitDeterminationKey(env->getStaticObjectField(cls, "WEIGHTED_RMS", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              jboolean OrbitDeterminationKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitDetermination & a2) const
              {
                return env->callBooleanMethod(this$, mids$[mid_process_22f0fccb35944945], a0.this$, a1.this$, a2.this$);
              }

              OrbitDeterminationKey OrbitDeterminationKey::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return OrbitDeterminationKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_9354acd6506346ad], a0.this$));
              }

              JArray< OrbitDeterminationKey > OrbitDeterminationKey::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< OrbitDeterminationKey >(env->callStaticObjectMethod(cls, mids$[mid_values_1ed7791c9e6b718f]));
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
              static PyObject *t_OrbitDeterminationKey_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OrbitDeterminationKey_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OrbitDeterminationKey_of_(t_OrbitDeterminationKey *self, PyObject *args);
              static PyObject *t_OrbitDeterminationKey_process(t_OrbitDeterminationKey *self, PyObject *args);
              static PyObject *t_OrbitDeterminationKey_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_OrbitDeterminationKey_values(PyTypeObject *type);
              static PyObject *t_OrbitDeterminationKey_get__parameters_(t_OrbitDeterminationKey *self, void *data);
              static PyGetSetDef t_OrbitDeterminationKey__fields_[] = {
                DECLARE_GET_FIELD(t_OrbitDeterminationKey, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OrbitDeterminationKey__methods_[] = {
                DECLARE_METHOD(t_OrbitDeterminationKey, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OrbitDeterminationKey, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OrbitDeterminationKey, of_, METH_VARARGS),
                DECLARE_METHOD(t_OrbitDeterminationKey, process, METH_VARARGS),
                DECLARE_METHOD(t_OrbitDeterminationKey, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_OrbitDeterminationKey, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OrbitDeterminationKey)[] = {
                { Py_tp_methods, t_OrbitDeterminationKey__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_OrbitDeterminationKey__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OrbitDeterminationKey)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(OrbitDeterminationKey, t_OrbitDeterminationKey, OrbitDeterminationKey);
              PyObject *t_OrbitDeterminationKey::wrap_Object(const OrbitDeterminationKey& object, PyTypeObject *p0)
              {
                PyObject *obj = t_OrbitDeterminationKey::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OrbitDeterminationKey *self = (t_OrbitDeterminationKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_OrbitDeterminationKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_OrbitDeterminationKey::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OrbitDeterminationKey *self = (t_OrbitDeterminationKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_OrbitDeterminationKey::install(PyObject *module)
              {
                installType(&PY_TYPE(OrbitDeterminationKey), &PY_TYPE_DEF(OrbitDeterminationKey), module, "OrbitDeterminationKey", 0);
              }

              void t_OrbitDeterminationKey::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDeterminationKey), "class_", make_descriptor(OrbitDeterminationKey::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDeterminationKey), "wrapfn_", make_descriptor(t_OrbitDeterminationKey::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDeterminationKey), "boxfn_", make_descriptor(boxObject));
                env->getClass(OrbitDeterminationKey::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDeterminationKey), "ACTUAL_OD_SPAN", make_descriptor(t_OrbitDeterminationKey::wrap_Object(*OrbitDeterminationKey::ACTUAL_OD_SPAN)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDeterminationKey), "COMMENT", make_descriptor(t_OrbitDeterminationKey::wrap_Object(*OrbitDeterminationKey::COMMENT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDeterminationKey), "CONSIDER_N", make_descriptor(t_OrbitDeterminationKey::wrap_Object(*OrbitDeterminationKey::CONSIDER_N)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDeterminationKey), "CONSIDER_PARAMS", make_descriptor(t_OrbitDeterminationKey::wrap_Object(*OrbitDeterminationKey::CONSIDER_PARAMS)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDeterminationKey), "DATA_TYPES", make_descriptor(t_OrbitDeterminationKey::wrap_Object(*OrbitDeterminationKey::DATA_TYPES)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDeterminationKey), "DAYS_SINCE_FIRST_OBS", make_descriptor(t_OrbitDeterminationKey::wrap_Object(*OrbitDeterminationKey::DAYS_SINCE_FIRST_OBS)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDeterminationKey), "DAYS_SINCE_LAST_OBS", make_descriptor(t_OrbitDeterminationKey::wrap_Object(*OrbitDeterminationKey::DAYS_SINCE_LAST_OBS)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDeterminationKey), "GDOP", make_descriptor(t_OrbitDeterminationKey::wrap_Object(*OrbitDeterminationKey::GDOP)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDeterminationKey), "MAXIMUM_OBS_GAP", make_descriptor(t_OrbitDeterminationKey::wrap_Object(*OrbitDeterminationKey::MAXIMUM_OBS_GAP)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDeterminationKey), "OBS_AVAILABLE", make_descriptor(t_OrbitDeterminationKey::wrap_Object(*OrbitDeterminationKey::OBS_AVAILABLE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDeterminationKey), "OBS_USED", make_descriptor(t_OrbitDeterminationKey::wrap_Object(*OrbitDeterminationKey::OBS_USED)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDeterminationKey), "OD_CONFIDENCE", make_descriptor(t_OrbitDeterminationKey::wrap_Object(*OrbitDeterminationKey::OD_CONFIDENCE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDeterminationKey), "OD_EPOCH", make_descriptor(t_OrbitDeterminationKey::wrap_Object(*OrbitDeterminationKey::OD_EPOCH)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDeterminationKey), "OD_EPOCH_EIGINT", make_descriptor(t_OrbitDeterminationKey::wrap_Object(*OrbitDeterminationKey::OD_EPOCH_EIGINT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDeterminationKey), "OD_EPOCH_EIGMAJ", make_descriptor(t_OrbitDeterminationKey::wrap_Object(*OrbitDeterminationKey::OD_EPOCH_EIGMAJ)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDeterminationKey), "OD_EPOCH_EIGMIN", make_descriptor(t_OrbitDeterminationKey::wrap_Object(*OrbitDeterminationKey::OD_EPOCH_EIGMIN)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDeterminationKey), "OD_ID", make_descriptor(t_OrbitDeterminationKey::wrap_Object(*OrbitDeterminationKey::OD_ID)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDeterminationKey), "OD_MAX_PRED_EIGMAJ", make_descriptor(t_OrbitDeterminationKey::wrap_Object(*OrbitDeterminationKey::OD_MAX_PRED_EIGMAJ)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDeterminationKey), "OD_METHOD", make_descriptor(t_OrbitDeterminationKey::wrap_Object(*OrbitDeterminationKey::OD_METHOD)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDeterminationKey), "OD_MIN_PRED_EIGMIN", make_descriptor(t_OrbitDeterminationKey::wrap_Object(*OrbitDeterminationKey::OD_MIN_PRED_EIGMIN)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDeterminationKey), "OD_PREV_ID", make_descriptor(t_OrbitDeterminationKey::wrap_Object(*OrbitDeterminationKey::OD_PREV_ID)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDeterminationKey), "RECOMMENDED_OD_SPAN", make_descriptor(t_OrbitDeterminationKey::wrap_Object(*OrbitDeterminationKey::RECOMMENDED_OD_SPAN)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDeterminationKey), "SEDR", make_descriptor(t_OrbitDeterminationKey::wrap_Object(*OrbitDeterminationKey::SEDR)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDeterminationKey), "SENSORS", make_descriptor(t_OrbitDeterminationKey::wrap_Object(*OrbitDeterminationKey::SENSORS)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDeterminationKey), "SENSORS_N", make_descriptor(t_OrbitDeterminationKey::wrap_Object(*OrbitDeterminationKey::SENSORS_N)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDeterminationKey), "SOLVE_N", make_descriptor(t_OrbitDeterminationKey::wrap_Object(*OrbitDeterminationKey::SOLVE_N)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDeterminationKey), "SOLVE_STATES", make_descriptor(t_OrbitDeterminationKey::wrap_Object(*OrbitDeterminationKey::SOLVE_STATES)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDeterminationKey), "TRACKS_AVAILABLE", make_descriptor(t_OrbitDeterminationKey::wrap_Object(*OrbitDeterminationKey::TRACKS_AVAILABLE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDeterminationKey), "TRACKS_USED", make_descriptor(t_OrbitDeterminationKey::wrap_Object(*OrbitDeterminationKey::TRACKS_USED)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDeterminationKey), "WEIGHTED_RMS", make_descriptor(t_OrbitDeterminationKey::wrap_Object(*OrbitDeterminationKey::WEIGHTED_RMS)));
              }

              static PyObject *t_OrbitDeterminationKey_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OrbitDeterminationKey::initializeClass, 1)))
                  return NULL;
                return t_OrbitDeterminationKey::wrap_Object(OrbitDeterminationKey(((t_OrbitDeterminationKey *) arg)->object.this$));
              }
              static PyObject *t_OrbitDeterminationKey_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OrbitDeterminationKey::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_OrbitDeterminationKey_of_(t_OrbitDeterminationKey *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_OrbitDeterminationKey_process(t_OrbitDeterminationKey *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
                ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitDetermination a2((jobject) NULL);
                jboolean result;

                if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitDetermination::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.process(a0, a1, a2));
                  Py_RETURN_BOOL(result);
                }

                PyErr_SetArgsError((PyObject *) self, "process", args);
                return NULL;
              }

              static PyObject *t_OrbitDeterminationKey_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                OrbitDeterminationKey result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitDeterminationKey::valueOf(a0));
                  return t_OrbitDeterminationKey::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_OrbitDeterminationKey_values(PyTypeObject *type)
              {
                JArray< OrbitDeterminationKey > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitDeterminationKey::values());
                return JArray<jobject>(result.this$).wrap(t_OrbitDeterminationKey::wrap_jobject);
              }
              static PyObject *t_OrbitDeterminationKey_get__parameters_(t_OrbitDeterminationKey *self, void *data)
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
#include "org/orekit/files/ccsds/definitions/OrbitRelativeFrame.h"
#include "org/orekit/frames/LOFType.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/definitions/OrbitRelativeFrame.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace definitions {

          ::java::lang::Class *OrbitRelativeFrame::class$ = NULL;
          jmethodID *OrbitRelativeFrame::mids$ = NULL;
          bool OrbitRelativeFrame::live$ = false;
          OrbitRelativeFrame *OrbitRelativeFrame::EQW_INERTIAL = NULL;
          OrbitRelativeFrame *OrbitRelativeFrame::LVLH = NULL;
          OrbitRelativeFrame *OrbitRelativeFrame::LVLH_INERTIAL = NULL;
          OrbitRelativeFrame *OrbitRelativeFrame::LVLH_ROTATING = NULL;
          OrbitRelativeFrame *OrbitRelativeFrame::NSW_INERTIAL = NULL;
          OrbitRelativeFrame *OrbitRelativeFrame::NSW_ROTATING = NULL;
          OrbitRelativeFrame *OrbitRelativeFrame::NTW_INERTIAL = NULL;
          OrbitRelativeFrame *OrbitRelativeFrame::NTW_ROTATING = NULL;
          OrbitRelativeFrame *OrbitRelativeFrame::PQW_INERTIAL = NULL;
          OrbitRelativeFrame *OrbitRelativeFrame::QSW = NULL;
          OrbitRelativeFrame *OrbitRelativeFrame::RIC = NULL;
          OrbitRelativeFrame *OrbitRelativeFrame::RSW = NULL;
          OrbitRelativeFrame *OrbitRelativeFrame::RSW_INERTIAL = NULL;
          OrbitRelativeFrame *OrbitRelativeFrame::RSW_ROTATING = NULL;
          OrbitRelativeFrame *OrbitRelativeFrame::RTN = NULL;
          OrbitRelativeFrame *OrbitRelativeFrame::SEZ_INERTIAL = NULL;
          OrbitRelativeFrame *OrbitRelativeFrame::SEZ_ROTATING = NULL;
          OrbitRelativeFrame *OrbitRelativeFrame::TNW = NULL;
          OrbitRelativeFrame *OrbitRelativeFrame::TNW_INERTIAL = NULL;
          OrbitRelativeFrame *OrbitRelativeFrame::TNW_ROTATING = NULL;
          OrbitRelativeFrame *OrbitRelativeFrame::VNC_INERTIAL = NULL;
          OrbitRelativeFrame *OrbitRelativeFrame::VNC_ROTATING = NULL;

          jclass OrbitRelativeFrame::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/definitions/OrbitRelativeFrame");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getLofType_f183bcc89f4a1412] = env->getMethodID(cls, "getLofType", "()Lorg/orekit/frames/LOFType;");
              mids$[mid_isQuasiInertial_9ab94ac1dc23b105] = env->getMethodID(cls, "isQuasiInertial", "()Z");
              mids$[mid_valueOf_ca9c0b65a5a10e81] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/definitions/OrbitRelativeFrame;");
              mids$[mid_values_a251dbe84800b83c] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/definitions/OrbitRelativeFrame;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              EQW_INERTIAL = new OrbitRelativeFrame(env->getStaticObjectField(cls, "EQW_INERTIAL", "Lorg/orekit/files/ccsds/definitions/OrbitRelativeFrame;"));
              LVLH = new OrbitRelativeFrame(env->getStaticObjectField(cls, "LVLH", "Lorg/orekit/files/ccsds/definitions/OrbitRelativeFrame;"));
              LVLH_INERTIAL = new OrbitRelativeFrame(env->getStaticObjectField(cls, "LVLH_INERTIAL", "Lorg/orekit/files/ccsds/definitions/OrbitRelativeFrame;"));
              LVLH_ROTATING = new OrbitRelativeFrame(env->getStaticObjectField(cls, "LVLH_ROTATING", "Lorg/orekit/files/ccsds/definitions/OrbitRelativeFrame;"));
              NSW_INERTIAL = new OrbitRelativeFrame(env->getStaticObjectField(cls, "NSW_INERTIAL", "Lorg/orekit/files/ccsds/definitions/OrbitRelativeFrame;"));
              NSW_ROTATING = new OrbitRelativeFrame(env->getStaticObjectField(cls, "NSW_ROTATING", "Lorg/orekit/files/ccsds/definitions/OrbitRelativeFrame;"));
              NTW_INERTIAL = new OrbitRelativeFrame(env->getStaticObjectField(cls, "NTW_INERTIAL", "Lorg/orekit/files/ccsds/definitions/OrbitRelativeFrame;"));
              NTW_ROTATING = new OrbitRelativeFrame(env->getStaticObjectField(cls, "NTW_ROTATING", "Lorg/orekit/files/ccsds/definitions/OrbitRelativeFrame;"));
              PQW_INERTIAL = new OrbitRelativeFrame(env->getStaticObjectField(cls, "PQW_INERTIAL", "Lorg/orekit/files/ccsds/definitions/OrbitRelativeFrame;"));
              QSW = new OrbitRelativeFrame(env->getStaticObjectField(cls, "QSW", "Lorg/orekit/files/ccsds/definitions/OrbitRelativeFrame;"));
              RIC = new OrbitRelativeFrame(env->getStaticObjectField(cls, "RIC", "Lorg/orekit/files/ccsds/definitions/OrbitRelativeFrame;"));
              RSW = new OrbitRelativeFrame(env->getStaticObjectField(cls, "RSW", "Lorg/orekit/files/ccsds/definitions/OrbitRelativeFrame;"));
              RSW_INERTIAL = new OrbitRelativeFrame(env->getStaticObjectField(cls, "RSW_INERTIAL", "Lorg/orekit/files/ccsds/definitions/OrbitRelativeFrame;"));
              RSW_ROTATING = new OrbitRelativeFrame(env->getStaticObjectField(cls, "RSW_ROTATING", "Lorg/orekit/files/ccsds/definitions/OrbitRelativeFrame;"));
              RTN = new OrbitRelativeFrame(env->getStaticObjectField(cls, "RTN", "Lorg/orekit/files/ccsds/definitions/OrbitRelativeFrame;"));
              SEZ_INERTIAL = new OrbitRelativeFrame(env->getStaticObjectField(cls, "SEZ_INERTIAL", "Lorg/orekit/files/ccsds/definitions/OrbitRelativeFrame;"));
              SEZ_ROTATING = new OrbitRelativeFrame(env->getStaticObjectField(cls, "SEZ_ROTATING", "Lorg/orekit/files/ccsds/definitions/OrbitRelativeFrame;"));
              TNW = new OrbitRelativeFrame(env->getStaticObjectField(cls, "TNW", "Lorg/orekit/files/ccsds/definitions/OrbitRelativeFrame;"));
              TNW_INERTIAL = new OrbitRelativeFrame(env->getStaticObjectField(cls, "TNW_INERTIAL", "Lorg/orekit/files/ccsds/definitions/OrbitRelativeFrame;"));
              TNW_ROTATING = new OrbitRelativeFrame(env->getStaticObjectField(cls, "TNW_ROTATING", "Lorg/orekit/files/ccsds/definitions/OrbitRelativeFrame;"));
              VNC_INERTIAL = new OrbitRelativeFrame(env->getStaticObjectField(cls, "VNC_INERTIAL", "Lorg/orekit/files/ccsds/definitions/OrbitRelativeFrame;"));
              VNC_ROTATING = new OrbitRelativeFrame(env->getStaticObjectField(cls, "VNC_ROTATING", "Lorg/orekit/files/ccsds/definitions/OrbitRelativeFrame;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::orekit::frames::LOFType OrbitRelativeFrame::getLofType() const
          {
            return ::org::orekit::frames::LOFType(env->callObjectMethod(this$, mids$[mid_getLofType_f183bcc89f4a1412]));
          }

          jboolean OrbitRelativeFrame::isQuasiInertial() const
          {
            return env->callBooleanMethod(this$, mids$[mid_isQuasiInertial_9ab94ac1dc23b105]);
          }

          OrbitRelativeFrame OrbitRelativeFrame::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return OrbitRelativeFrame(env->callStaticObjectMethod(cls, mids$[mid_valueOf_ca9c0b65a5a10e81], a0.this$));
          }

          JArray< OrbitRelativeFrame > OrbitRelativeFrame::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< OrbitRelativeFrame >(env->callStaticObjectMethod(cls, mids$[mid_values_a251dbe84800b83c]));
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
          static PyObject *t_OrbitRelativeFrame_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_OrbitRelativeFrame_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_OrbitRelativeFrame_of_(t_OrbitRelativeFrame *self, PyObject *args);
          static PyObject *t_OrbitRelativeFrame_getLofType(t_OrbitRelativeFrame *self);
          static PyObject *t_OrbitRelativeFrame_isQuasiInertial(t_OrbitRelativeFrame *self);
          static PyObject *t_OrbitRelativeFrame_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_OrbitRelativeFrame_values(PyTypeObject *type);
          static PyObject *t_OrbitRelativeFrame_get__lofType(t_OrbitRelativeFrame *self, void *data);
          static PyObject *t_OrbitRelativeFrame_get__quasiInertial(t_OrbitRelativeFrame *self, void *data);
          static PyObject *t_OrbitRelativeFrame_get__parameters_(t_OrbitRelativeFrame *self, void *data);
          static PyGetSetDef t_OrbitRelativeFrame__fields_[] = {
            DECLARE_GET_FIELD(t_OrbitRelativeFrame, lofType),
            DECLARE_GET_FIELD(t_OrbitRelativeFrame, quasiInertial),
            DECLARE_GET_FIELD(t_OrbitRelativeFrame, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_OrbitRelativeFrame__methods_[] = {
            DECLARE_METHOD(t_OrbitRelativeFrame, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OrbitRelativeFrame, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OrbitRelativeFrame, of_, METH_VARARGS),
            DECLARE_METHOD(t_OrbitRelativeFrame, getLofType, METH_NOARGS),
            DECLARE_METHOD(t_OrbitRelativeFrame, isQuasiInertial, METH_NOARGS),
            DECLARE_METHOD(t_OrbitRelativeFrame, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_OrbitRelativeFrame, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(OrbitRelativeFrame)[] = {
            { Py_tp_methods, t_OrbitRelativeFrame__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_OrbitRelativeFrame__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(OrbitRelativeFrame)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(OrbitRelativeFrame, t_OrbitRelativeFrame, OrbitRelativeFrame);
          PyObject *t_OrbitRelativeFrame::wrap_Object(const OrbitRelativeFrame& object, PyTypeObject *p0)
          {
            PyObject *obj = t_OrbitRelativeFrame::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_OrbitRelativeFrame *self = (t_OrbitRelativeFrame *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_OrbitRelativeFrame::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_OrbitRelativeFrame::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_OrbitRelativeFrame *self = (t_OrbitRelativeFrame *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_OrbitRelativeFrame::install(PyObject *module)
          {
            installType(&PY_TYPE(OrbitRelativeFrame), &PY_TYPE_DEF(OrbitRelativeFrame), module, "OrbitRelativeFrame", 0);
          }

          void t_OrbitRelativeFrame::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitRelativeFrame), "class_", make_descriptor(OrbitRelativeFrame::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitRelativeFrame), "wrapfn_", make_descriptor(t_OrbitRelativeFrame::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitRelativeFrame), "boxfn_", make_descriptor(boxObject));
            env->getClass(OrbitRelativeFrame::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitRelativeFrame), "EQW_INERTIAL", make_descriptor(t_OrbitRelativeFrame::wrap_Object(*OrbitRelativeFrame::EQW_INERTIAL)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitRelativeFrame), "LVLH", make_descriptor(t_OrbitRelativeFrame::wrap_Object(*OrbitRelativeFrame::LVLH)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitRelativeFrame), "LVLH_INERTIAL", make_descriptor(t_OrbitRelativeFrame::wrap_Object(*OrbitRelativeFrame::LVLH_INERTIAL)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitRelativeFrame), "LVLH_ROTATING", make_descriptor(t_OrbitRelativeFrame::wrap_Object(*OrbitRelativeFrame::LVLH_ROTATING)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitRelativeFrame), "NSW_INERTIAL", make_descriptor(t_OrbitRelativeFrame::wrap_Object(*OrbitRelativeFrame::NSW_INERTIAL)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitRelativeFrame), "NSW_ROTATING", make_descriptor(t_OrbitRelativeFrame::wrap_Object(*OrbitRelativeFrame::NSW_ROTATING)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitRelativeFrame), "NTW_INERTIAL", make_descriptor(t_OrbitRelativeFrame::wrap_Object(*OrbitRelativeFrame::NTW_INERTIAL)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitRelativeFrame), "NTW_ROTATING", make_descriptor(t_OrbitRelativeFrame::wrap_Object(*OrbitRelativeFrame::NTW_ROTATING)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitRelativeFrame), "PQW_INERTIAL", make_descriptor(t_OrbitRelativeFrame::wrap_Object(*OrbitRelativeFrame::PQW_INERTIAL)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitRelativeFrame), "QSW", make_descriptor(t_OrbitRelativeFrame::wrap_Object(*OrbitRelativeFrame::QSW)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitRelativeFrame), "RIC", make_descriptor(t_OrbitRelativeFrame::wrap_Object(*OrbitRelativeFrame::RIC)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitRelativeFrame), "RSW", make_descriptor(t_OrbitRelativeFrame::wrap_Object(*OrbitRelativeFrame::RSW)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitRelativeFrame), "RSW_INERTIAL", make_descriptor(t_OrbitRelativeFrame::wrap_Object(*OrbitRelativeFrame::RSW_INERTIAL)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitRelativeFrame), "RSW_ROTATING", make_descriptor(t_OrbitRelativeFrame::wrap_Object(*OrbitRelativeFrame::RSW_ROTATING)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitRelativeFrame), "RTN", make_descriptor(t_OrbitRelativeFrame::wrap_Object(*OrbitRelativeFrame::RTN)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitRelativeFrame), "SEZ_INERTIAL", make_descriptor(t_OrbitRelativeFrame::wrap_Object(*OrbitRelativeFrame::SEZ_INERTIAL)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitRelativeFrame), "SEZ_ROTATING", make_descriptor(t_OrbitRelativeFrame::wrap_Object(*OrbitRelativeFrame::SEZ_ROTATING)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitRelativeFrame), "TNW", make_descriptor(t_OrbitRelativeFrame::wrap_Object(*OrbitRelativeFrame::TNW)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitRelativeFrame), "TNW_INERTIAL", make_descriptor(t_OrbitRelativeFrame::wrap_Object(*OrbitRelativeFrame::TNW_INERTIAL)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitRelativeFrame), "TNW_ROTATING", make_descriptor(t_OrbitRelativeFrame::wrap_Object(*OrbitRelativeFrame::TNW_ROTATING)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitRelativeFrame), "VNC_INERTIAL", make_descriptor(t_OrbitRelativeFrame::wrap_Object(*OrbitRelativeFrame::VNC_INERTIAL)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitRelativeFrame), "VNC_ROTATING", make_descriptor(t_OrbitRelativeFrame::wrap_Object(*OrbitRelativeFrame::VNC_ROTATING)));
          }

          static PyObject *t_OrbitRelativeFrame_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, OrbitRelativeFrame::initializeClass, 1)))
              return NULL;
            return t_OrbitRelativeFrame::wrap_Object(OrbitRelativeFrame(((t_OrbitRelativeFrame *) arg)->object.this$));
          }
          static PyObject *t_OrbitRelativeFrame_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, OrbitRelativeFrame::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_OrbitRelativeFrame_of_(t_OrbitRelativeFrame *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_OrbitRelativeFrame_getLofType(t_OrbitRelativeFrame *self)
          {
            ::org::orekit::frames::LOFType result((jobject) NULL);
            OBJ_CALL(result = self->object.getLofType());
            return ::org::orekit::frames::t_LOFType::wrap_Object(result);
          }

          static PyObject *t_OrbitRelativeFrame_isQuasiInertial(t_OrbitRelativeFrame *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.isQuasiInertial());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_OrbitRelativeFrame_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            OrbitRelativeFrame result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::OrbitRelativeFrame::valueOf(a0));
              return t_OrbitRelativeFrame::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_OrbitRelativeFrame_values(PyTypeObject *type)
          {
            JArray< OrbitRelativeFrame > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::OrbitRelativeFrame::values());
            return JArray<jobject>(result.this$).wrap(t_OrbitRelativeFrame::wrap_jobject);
          }
          static PyObject *t_OrbitRelativeFrame_get__parameters_(t_OrbitRelativeFrame *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_OrbitRelativeFrame_get__lofType(t_OrbitRelativeFrame *self, void *data)
          {
            ::org::orekit::frames::LOFType value((jobject) NULL);
            OBJ_CALL(value = self->object.getLofType());
            return ::org::orekit::frames::t_LOFType::wrap_Object(value);
          }

          static PyObject *t_OrbitRelativeFrame_get__quasiInertial(t_OrbitRelativeFrame *self, void *data)
          {
            jboolean value;
            OBJ_CALL(value = self->object.isQuasiInertial());
            Py_RETURN_BOOL(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/data/PolynomialParser$Unit.h"
#include "java/lang/String.h"
#include "org/orekit/data/PolynomialParser$Unit.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *PolynomialParser$Unit::class$ = NULL;
      jmethodID *PolynomialParser$Unit::mids$ = NULL;
      bool PolynomialParser$Unit::live$ = false;
      PolynomialParser$Unit *PolynomialParser$Unit::ARC_SECONDS = NULL;
      PolynomialParser$Unit *PolynomialParser$Unit::DEGREES = NULL;
      PolynomialParser$Unit *PolynomialParser$Unit::MICRO_ARC_SECONDS = NULL;
      PolynomialParser$Unit *PolynomialParser$Unit::MILLI_ARC_SECONDS = NULL;
      PolynomialParser$Unit *PolynomialParser$Unit::NO_UNITS = NULL;
      PolynomialParser$Unit *PolynomialParser$Unit::RADIANS = NULL;

      jclass PolynomialParser$Unit::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/PolynomialParser$Unit");

          mids$ = new jmethodID[max_mid];
          mids$[mid_toSI_04fd0666b613d2ab] = env->getMethodID(cls, "toSI", "(D)D");
          mids$[mid_valueOf_52f78fb719985f2d] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/data/PolynomialParser$Unit;");
          mids$[mid_values_bbedfa0aeebf6004] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/data/PolynomialParser$Unit;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          ARC_SECONDS = new PolynomialParser$Unit(env->getStaticObjectField(cls, "ARC_SECONDS", "Lorg/orekit/data/PolynomialParser$Unit;"));
          DEGREES = new PolynomialParser$Unit(env->getStaticObjectField(cls, "DEGREES", "Lorg/orekit/data/PolynomialParser$Unit;"));
          MICRO_ARC_SECONDS = new PolynomialParser$Unit(env->getStaticObjectField(cls, "MICRO_ARC_SECONDS", "Lorg/orekit/data/PolynomialParser$Unit;"));
          MILLI_ARC_SECONDS = new PolynomialParser$Unit(env->getStaticObjectField(cls, "MILLI_ARC_SECONDS", "Lorg/orekit/data/PolynomialParser$Unit;"));
          NO_UNITS = new PolynomialParser$Unit(env->getStaticObjectField(cls, "NO_UNITS", "Lorg/orekit/data/PolynomialParser$Unit;"));
          RADIANS = new PolynomialParser$Unit(env->getStaticObjectField(cls, "RADIANS", "Lorg/orekit/data/PolynomialParser$Unit;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble PolynomialParser$Unit::toSI(jdouble a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_toSI_04fd0666b613d2ab], a0);
      }

      PolynomialParser$Unit PolynomialParser$Unit::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return PolynomialParser$Unit(env->callStaticObjectMethod(cls, mids$[mid_valueOf_52f78fb719985f2d], a0.this$));
      }

      JArray< PolynomialParser$Unit > PolynomialParser$Unit::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< PolynomialParser$Unit >(env->callStaticObjectMethod(cls, mids$[mid_values_bbedfa0aeebf6004]));
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
      static PyObject *t_PolynomialParser$Unit_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PolynomialParser$Unit_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PolynomialParser$Unit_of_(t_PolynomialParser$Unit *self, PyObject *args);
      static PyObject *t_PolynomialParser$Unit_toSI(t_PolynomialParser$Unit *self, PyObject *arg);
      static PyObject *t_PolynomialParser$Unit_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_PolynomialParser$Unit_values(PyTypeObject *type);
      static PyObject *t_PolynomialParser$Unit_get__parameters_(t_PolynomialParser$Unit *self, void *data);
      static PyGetSetDef t_PolynomialParser$Unit__fields_[] = {
        DECLARE_GET_FIELD(t_PolynomialParser$Unit, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PolynomialParser$Unit__methods_[] = {
        DECLARE_METHOD(t_PolynomialParser$Unit, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PolynomialParser$Unit, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PolynomialParser$Unit, of_, METH_VARARGS),
        DECLARE_METHOD(t_PolynomialParser$Unit, toSI, METH_O),
        DECLARE_METHOD(t_PolynomialParser$Unit, valueOf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_PolynomialParser$Unit, values, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PolynomialParser$Unit)[] = {
        { Py_tp_methods, t_PolynomialParser$Unit__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_PolynomialParser$Unit__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PolynomialParser$Unit)[] = {
        &PY_TYPE_DEF(::java::lang::Enum),
        NULL
      };

      DEFINE_TYPE(PolynomialParser$Unit, t_PolynomialParser$Unit, PolynomialParser$Unit);
      PyObject *t_PolynomialParser$Unit::wrap_Object(const PolynomialParser$Unit& object, PyTypeObject *p0)
      {
        PyObject *obj = t_PolynomialParser$Unit::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PolynomialParser$Unit *self = (t_PolynomialParser$Unit *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_PolynomialParser$Unit::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_PolynomialParser$Unit::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PolynomialParser$Unit *self = (t_PolynomialParser$Unit *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_PolynomialParser$Unit::install(PyObject *module)
      {
        installType(&PY_TYPE(PolynomialParser$Unit), &PY_TYPE_DEF(PolynomialParser$Unit), module, "PolynomialParser$Unit", 0);
      }

      void t_PolynomialParser$Unit::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialParser$Unit), "class_", make_descriptor(PolynomialParser$Unit::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialParser$Unit), "wrapfn_", make_descriptor(t_PolynomialParser$Unit::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialParser$Unit), "boxfn_", make_descriptor(boxObject));
        env->getClass(PolynomialParser$Unit::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialParser$Unit), "ARC_SECONDS", make_descriptor(t_PolynomialParser$Unit::wrap_Object(*PolynomialParser$Unit::ARC_SECONDS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialParser$Unit), "DEGREES", make_descriptor(t_PolynomialParser$Unit::wrap_Object(*PolynomialParser$Unit::DEGREES)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialParser$Unit), "MICRO_ARC_SECONDS", make_descriptor(t_PolynomialParser$Unit::wrap_Object(*PolynomialParser$Unit::MICRO_ARC_SECONDS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialParser$Unit), "MILLI_ARC_SECONDS", make_descriptor(t_PolynomialParser$Unit::wrap_Object(*PolynomialParser$Unit::MILLI_ARC_SECONDS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialParser$Unit), "NO_UNITS", make_descriptor(t_PolynomialParser$Unit::wrap_Object(*PolynomialParser$Unit::NO_UNITS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialParser$Unit), "RADIANS", make_descriptor(t_PolynomialParser$Unit::wrap_Object(*PolynomialParser$Unit::RADIANS)));
      }

      static PyObject *t_PolynomialParser$Unit_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PolynomialParser$Unit::initializeClass, 1)))
          return NULL;
        return t_PolynomialParser$Unit::wrap_Object(PolynomialParser$Unit(((t_PolynomialParser$Unit *) arg)->object.this$));
      }
      static PyObject *t_PolynomialParser$Unit_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PolynomialParser$Unit::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_PolynomialParser$Unit_of_(t_PolynomialParser$Unit *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_PolynomialParser$Unit_toSI(t_PolynomialParser$Unit *self, PyObject *arg)
      {
        jdouble a0;
        jdouble result;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.toSI(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "toSI", arg);
        return NULL;
      }

      static PyObject *t_PolynomialParser$Unit_valueOf(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        PolynomialParser$Unit result((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          OBJ_CALL(result = ::org::orekit::data::PolynomialParser$Unit::valueOf(a0));
          return t_PolynomialParser$Unit::wrap_Object(result);
        }

        return callSuper(type, "valueOf", args, 2);
      }

      static PyObject *t_PolynomialParser$Unit_values(PyTypeObject *type)
      {
        JArray< PolynomialParser$Unit > result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::data::PolynomialParser$Unit::values());
        return JArray<jobject>(result.this$).wrap(t_PolynomialParser$Unit::wrap_jobject);
      }
      static PyObject *t_PolynomialParser$Unit_get__parameters_(t_PolynomialParser$Unit *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}

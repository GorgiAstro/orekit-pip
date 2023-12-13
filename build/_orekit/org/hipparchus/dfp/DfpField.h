#ifndef org_hipparchus_dfp_DfpField_H
#define org_hipparchus_dfp_DfpField_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace dfp {
      class Dfp;
      class DfpField$RoundingMode;
      class DfpField;
    }
    class Field;
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace dfp {

      class DfpField : public ::java::lang::Object {
       public:
        enum {
          mid_init$_44ed599e93e8a30c,
          mid_clearIEEEFlags_a1fa5dae97ea5ed2,
          mid_computeExp_cd2054800f3587f2,
          mid_computeLn_da0be084c071642e,
          mid_equals_460c5e2d9d51c6cc,
          mid_getDegToRad_2b93193437c3f00d,
          mid_getE_2b93193437c3f00d,
          mid_getESplit_e7edd720248d9ae1,
          mid_getExtendedField_3f5b091477f8c156,
          mid_getIEEEFlags_55546ef6a647f39b,
          mid_getLn10_2b93193437c3f00d,
          mid_getLn2_2b93193437c3f00d,
          mid_getLn2Split_e7edd720248d9ae1,
          mid_getLn5_2b93193437c3f00d,
          mid_getLn5Split_e7edd720248d9ae1,
          mid_getOne_2b93193437c3f00d,
          mid_getPi_2b93193437c3f00d,
          mid_getPiSplit_e7edd720248d9ae1,
          mid_getRadToDeg_2b93193437c3f00d,
          mid_getRadixDigits_55546ef6a647f39b,
          mid_getRoundingMode_bf0385b3132fa276,
          mid_getRuntimeClass_1aeb0737a960d371,
          mid_getSqr2_2b93193437c3f00d,
          mid_getSqr2Reciprocal_2b93193437c3f00d,
          mid_getSqr2Split_e7edd720248d9ae1,
          mid_getSqr3_2b93193437c3f00d,
          mid_getSqr3Reciprocal_2b93193437c3f00d,
          mid_getTwo_2b93193437c3f00d,
          mid_getZero_2b93193437c3f00d,
          mid_hashCode_55546ef6a647f39b,
          mid_newDfp_2b93193437c3f00d,
          mid_newDfp_844df78cba5c1168,
          mid_newDfp_a714269abf022321,
          mid_newDfp_3dbae42c27edb89e,
          mid_newDfp_757f32f1791cffc4,
          mid_newDfp_026cdd2d1c22b25b,
          mid_newDfp_a276979b31da24ca,
          mid_newDfp_65a23ba49b68f64d,
          mid_setIEEEFlags_44ed599e93e8a30c,
          mid_setIEEEFlagsBits_44ed599e93e8a30c,
          mid_setRoundingMode_a5811dede3ca4549,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit DfpField(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        DfpField(const DfpField& obj) : ::java::lang::Object(obj) {}

        static jint FLAG_DIV_ZERO;
        static jint FLAG_INEXACT;
        static jint FLAG_INVALID;
        static jint FLAG_OVERFLOW;
        static jint FLAG_UNDERFLOW;

        DfpField(jint);

        void clearIEEEFlags() const;
        static ::org::hipparchus::dfp::Dfp computeExp(const ::org::hipparchus::dfp::Dfp &, const ::org::hipparchus::dfp::Dfp &);
        static ::org::hipparchus::dfp::Dfp computeLn(const ::org::hipparchus::dfp::Dfp &, const ::org::hipparchus::dfp::Dfp &, const ::org::hipparchus::dfp::Dfp &);
        jboolean equals(const ::java::lang::Object &) const;
        ::org::hipparchus::dfp::Dfp getDegToRad() const;
        ::org::hipparchus::dfp::Dfp getE() const;
        JArray< ::org::hipparchus::dfp::Dfp > getESplit() const;
        DfpField getExtendedField(jint, jboolean) const;
        jint getIEEEFlags() const;
        ::org::hipparchus::dfp::Dfp getLn10() const;
        ::org::hipparchus::dfp::Dfp getLn2() const;
        JArray< ::org::hipparchus::dfp::Dfp > getLn2Split() const;
        ::org::hipparchus::dfp::Dfp getLn5() const;
        JArray< ::org::hipparchus::dfp::Dfp > getLn5Split() const;
        ::org::hipparchus::dfp::Dfp getOne() const;
        ::org::hipparchus::dfp::Dfp getPi() const;
        JArray< ::org::hipparchus::dfp::Dfp > getPiSplit() const;
        ::org::hipparchus::dfp::Dfp getRadToDeg() const;
        jint getRadixDigits() const;
        ::org::hipparchus::dfp::DfpField$RoundingMode getRoundingMode() const;
        ::java::lang::Class getRuntimeClass() const;
        ::org::hipparchus::dfp::Dfp getSqr2() const;
        ::org::hipparchus::dfp::Dfp getSqr2Reciprocal() const;
        JArray< ::org::hipparchus::dfp::Dfp > getSqr2Split() const;
        ::org::hipparchus::dfp::Dfp getSqr3() const;
        ::org::hipparchus::dfp::Dfp getSqr3Reciprocal() const;
        ::org::hipparchus::dfp::Dfp getTwo() const;
        ::org::hipparchus::dfp::Dfp getZero() const;
        jint hashCode() const;
        ::org::hipparchus::dfp::Dfp newDfp() const;
        ::org::hipparchus::dfp::Dfp newDfp(const ::java::lang::String &) const;
        ::org::hipparchus::dfp::Dfp newDfp(const ::org::hipparchus::dfp::Dfp &) const;
        ::org::hipparchus::dfp::Dfp newDfp(jbyte) const;
        ::org::hipparchus::dfp::Dfp newDfp(jdouble) const;
        ::org::hipparchus::dfp::Dfp newDfp(jint) const;
        ::org::hipparchus::dfp::Dfp newDfp(jlong) const;
        ::org::hipparchus::dfp::Dfp newDfp(jbyte, jbyte) const;
        void setIEEEFlags(jint) const;
        void setIEEEFlagsBits(jint) const;
        void setRoundingMode(const ::org::hipparchus::dfp::DfpField$RoundingMode &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace dfp {
      extern PyType_Def PY_TYPE_DEF(DfpField);
      extern PyTypeObject *PY_TYPE(DfpField);

      class t_DfpField {
      public:
        PyObject_HEAD
        DfpField object;
        static PyObject *wrap_Object(const DfpField&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif

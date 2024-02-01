#ifndef org_hipparchus_dfp_DfpField_H
#define org_hipparchus_dfp_DfpField_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace dfp {
      class DfpField;
      class Dfp;
      class DfpField$RoundingMode;
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
          mid_init$_8fd427ab23829bf5,
          mid_clearIEEEFlags_ff7cb6c242604316,
          mid_computeExp_6c69a9f186dcd94b,
          mid_computeLn_00bbef85bd29e052,
          mid_equals_72faff9b05f5ed5e,
          mid_getDegToRad_4b2d5e048d6e2660,
          mid_getE_4b2d5e048d6e2660,
          mid_getESplit_04f69f04f1bb77bf,
          mid_getExtendedField_75edf5f8864ad6b3,
          mid_getIEEEFlags_d6ab429752e7c267,
          mid_getLn10_4b2d5e048d6e2660,
          mid_getLn2_4b2d5e048d6e2660,
          mid_getLn2Split_04f69f04f1bb77bf,
          mid_getLn5_4b2d5e048d6e2660,
          mid_getLn5Split_04f69f04f1bb77bf,
          mid_getOne_4b2d5e048d6e2660,
          mid_getPi_4b2d5e048d6e2660,
          mid_getPiSplit_04f69f04f1bb77bf,
          mid_getRadToDeg_4b2d5e048d6e2660,
          mid_getRadixDigits_d6ab429752e7c267,
          mid_getRoundingMode_61e9ede417fcba7d,
          mid_getRuntimeClass_d5247e4b166c4ce8,
          mid_getSqr2_4b2d5e048d6e2660,
          mid_getSqr2Reciprocal_4b2d5e048d6e2660,
          mid_getSqr2Split_04f69f04f1bb77bf,
          mid_getSqr3_4b2d5e048d6e2660,
          mid_getSqr3Reciprocal_4b2d5e048d6e2660,
          mid_getTwo_4b2d5e048d6e2660,
          mid_getZero_4b2d5e048d6e2660,
          mid_hashCode_d6ab429752e7c267,
          mid_newDfp_4b2d5e048d6e2660,
          mid_newDfp_d41bacfbb0036b2f,
          mid_newDfp_f4723517f29214b4,
          mid_newDfp_d026e8379de654e0,
          mid_newDfp_e99ab98f8c6bb318,
          mid_newDfp_c17cec9f6bbb62d4,
          mid_newDfp_9e2bf41ef3516323,
          mid_newDfp_1a6c1bff63409b1a,
          mid_setIEEEFlags_8fd427ab23829bf5,
          mid_setIEEEFlagsBits_8fd427ab23829bf5,
          mid_setRoundingMode_daf037a5ce730483,
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

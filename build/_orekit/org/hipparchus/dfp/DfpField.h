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
          mid_init$_99803b0791f320ff,
          mid_clearIEEEFlags_0fa09c18fee449d5,
          mid_computeExp_e130e149d282e384,
          mid_computeLn_9c78f332607c1977,
          mid_equals_65c7d273e80d497a,
          mid_getDegToRad_7fd146fa3f090bf3,
          mid_getE_7fd146fa3f090bf3,
          mid_getESplit_0ca66b07d05059e1,
          mid_getExtendedField_e90ad1b7c724c3a9,
          mid_getIEEEFlags_570ce0828f81a2c1,
          mid_getLn10_7fd146fa3f090bf3,
          mid_getLn2_7fd146fa3f090bf3,
          mid_getLn2Split_0ca66b07d05059e1,
          mid_getLn5_7fd146fa3f090bf3,
          mid_getLn5Split_0ca66b07d05059e1,
          mid_getOne_7fd146fa3f090bf3,
          mid_getPi_7fd146fa3f090bf3,
          mid_getPiSplit_0ca66b07d05059e1,
          mid_getRadToDeg_7fd146fa3f090bf3,
          mid_getRadixDigits_570ce0828f81a2c1,
          mid_getRoundingMode_bf46aec6cfca2c16,
          mid_getRuntimeClass_7c16c5008b34b3db,
          mid_getSqr2_7fd146fa3f090bf3,
          mid_getSqr2Reciprocal_7fd146fa3f090bf3,
          mid_getSqr2Split_0ca66b07d05059e1,
          mid_getSqr3_7fd146fa3f090bf3,
          mid_getSqr3Reciprocal_7fd146fa3f090bf3,
          mid_getTwo_7fd146fa3f090bf3,
          mid_getZero_7fd146fa3f090bf3,
          mid_hashCode_570ce0828f81a2c1,
          mid_newDfp_7fd146fa3f090bf3,
          mid_newDfp_71d71a82cc65a754,
          mid_newDfp_63aa6f5f01162583,
          mid_newDfp_57809bf392b66806,
          mid_newDfp_81c4d69757062546,
          mid_newDfp_0fe5880f95528b86,
          mid_newDfp_0b19f2e563b71fc5,
          mid_newDfp_84679f0649faeef6,
          mid_setIEEEFlags_99803b0791f320ff,
          mid_setIEEEFlagsBits_99803b0791f320ff,
          mid_setRoundingMode_3e40fdd14a832bfd,
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

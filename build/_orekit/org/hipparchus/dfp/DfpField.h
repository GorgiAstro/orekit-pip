#ifndef org_hipparchus_dfp_DfpField_H
#define org_hipparchus_dfp_DfpField_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace dfp {
      class Dfp;
      class DfpField;
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
          mid_init$_a3da1a935cb37f7b,
          mid_clearIEEEFlags_0640e6acf969ed28,
          mid_computeExp_badefef06f0dff33,
          mid_computeLn_ccc00cb9ce7ea30d,
          mid_equals_221e8e85cb385209,
          mid_getDegToRad_dce9a968b1de6538,
          mid_getE_dce9a968b1de6538,
          mid_getESplit_107269c3c3a896e2,
          mid_getExtendedField_49cc80964470be8f,
          mid_getIEEEFlags_412668abc8d889e9,
          mid_getLn10_dce9a968b1de6538,
          mid_getLn2_dce9a968b1de6538,
          mid_getLn2Split_107269c3c3a896e2,
          mid_getLn5_dce9a968b1de6538,
          mid_getLn5Split_107269c3c3a896e2,
          mid_getOne_dce9a968b1de6538,
          mid_getPi_dce9a968b1de6538,
          mid_getPiSplit_107269c3c3a896e2,
          mid_getRadToDeg_dce9a968b1de6538,
          mid_getRadixDigits_412668abc8d889e9,
          mid_getRoundingMode_81c548bb52bf4b30,
          mid_getRuntimeClass_d4b191ff8147475d,
          mid_getSqr2_dce9a968b1de6538,
          mid_getSqr2Reciprocal_dce9a968b1de6538,
          mid_getSqr2Split_107269c3c3a896e2,
          mid_getSqr3_dce9a968b1de6538,
          mid_getSqr3Reciprocal_dce9a968b1de6538,
          mid_getTwo_dce9a968b1de6538,
          mid_getZero_dce9a968b1de6538,
          mid_hashCode_412668abc8d889e9,
          mid_newDfp_dce9a968b1de6538,
          mid_newDfp_4cf97baa750c9172,
          mid_newDfp_f081bcbf4bd8f1ad,
          mid_newDfp_e45f329aeeedfd27,
          mid_newDfp_48c0a79cfaaf4ea7,
          mid_newDfp_8418d0fac935c091,
          mid_newDfp_521fd622f2a09126,
          mid_newDfp_7b144e66c7452202,
          mid_setIEEEFlags_a3da1a935cb37f7b,
          mid_setIEEEFlagsBits_a3da1a935cb37f7b,
          mid_setRoundingMode_e521e3e702ddc984,
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

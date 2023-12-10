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
          mid_init$_0a2a1ac2721c0336,
          mid_clearIEEEFlags_7ae3461a92a43152,
          mid_computeExp_5f4c8a207222b7cd,
          mid_computeLn_c2256d3172717411,
          mid_equals_229c87223f486349,
          mid_getDegToRad_20a565cdc6596121,
          mid_getE_20a565cdc6596121,
          mid_getESplit_53f64053b72856d9,
          mid_getExtendedField_42067aa86adf9969,
          mid_getIEEEFlags_f2f64475e4580546,
          mid_getLn10_20a565cdc6596121,
          mid_getLn2_20a565cdc6596121,
          mid_getLn2Split_53f64053b72856d9,
          mid_getLn5_20a565cdc6596121,
          mid_getLn5Split_53f64053b72856d9,
          mid_getOne_20a565cdc6596121,
          mid_getPi_20a565cdc6596121,
          mid_getPiSplit_53f64053b72856d9,
          mid_getRadToDeg_20a565cdc6596121,
          mid_getRadixDigits_f2f64475e4580546,
          mid_getRoundingMode_bcea9c91bc9ea72e,
          mid_getRuntimeClass_8f66acc08d2a174c,
          mid_getSqr2_20a565cdc6596121,
          mid_getSqr2Reciprocal_20a565cdc6596121,
          mid_getSqr2Split_53f64053b72856d9,
          mid_getSqr3_20a565cdc6596121,
          mid_getSqr3Reciprocal_20a565cdc6596121,
          mid_getTwo_20a565cdc6596121,
          mid_getZero_20a565cdc6596121,
          mid_hashCode_f2f64475e4580546,
          mid_newDfp_20a565cdc6596121,
          mid_newDfp_3f89d25657eee84e,
          mid_newDfp_f0d5166eeb6b0680,
          mid_newDfp_970ab21c4d121514,
          mid_newDfp_5caa6ddeafdf80db,
          mid_newDfp_f72d07eb955b446b,
          mid_newDfp_aaf2a1c8efdefd0f,
          mid_newDfp_7c8aa6cad7f772b2,
          mid_setIEEEFlags_0a2a1ac2721c0336,
          mid_setIEEEFlagsBits_0a2a1ac2721c0336,
          mid_setRoundingMode_e773112af5ce88fd,
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

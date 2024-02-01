#ifndef org_hipparchus_dfp_DfpDec_H
#define org_hipparchus_dfp_DfpDec_H

#include "org/hipparchus/dfp/Dfp.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace dfp {

      class DfpDec : public ::org::hipparchus::dfp::Dfp {
       public:
        enum {
          mid_init$_9c0627e220735f30,
          mid_newInstance_4b2d5e048d6e2660,
          mid_newInstance_d41bacfbb0036b2f,
          mid_newInstance_f4723517f29214b4,
          mid_newInstance_d026e8379de654e0,
          mid_newInstance_e99ab98f8c6bb318,
          mid_newInstance_c17cec9f6bbb62d4,
          mid_newInstance_9e2bf41ef3516323,
          mid_newInstance_1a6c1bff63409b1a,
          mid_nextAfter_f4723517f29214b4,
          mid_getDecimalDigits_d6ab429752e7c267,
          mid_round_d938fc64e8c6df2d,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit DfpDec(jobject obj) : ::org::hipparchus::dfp::Dfp(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        DfpDec(const DfpDec& obj) : ::org::hipparchus::dfp::Dfp(obj) {}

        DfpDec(const ::org::hipparchus::dfp::Dfp &);

        ::org::hipparchus::dfp::Dfp newInstance() const;
        ::org::hipparchus::dfp::Dfp newInstance(const ::java::lang::String &) const;
        ::org::hipparchus::dfp::Dfp newInstance(const ::org::hipparchus::dfp::Dfp &) const;
        ::org::hipparchus::dfp::Dfp newInstance(jbyte) const;
        ::org::hipparchus::dfp::Dfp newInstance(jdouble) const;
        ::org::hipparchus::dfp::Dfp newInstance(jint) const;
        ::org::hipparchus::dfp::Dfp newInstance(jlong) const;
        ::org::hipparchus::dfp::Dfp newInstance(jbyte, jbyte) const;
        ::org::hipparchus::dfp::Dfp nextAfter(const ::org::hipparchus::dfp::Dfp &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace dfp {
      extern PyType_Def PY_TYPE_DEF(DfpDec);
      extern PyTypeObject *PY_TYPE(DfpDec);

      class t_DfpDec {
      public:
        PyObject_HEAD
        DfpDec object;
        static PyObject *wrap_Object(const DfpDec&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif

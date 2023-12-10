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
          mid_init$_88386d9d5c982f52,
          mid_newInstance_7fd146fa3f090bf3,
          mid_newInstance_71d71a82cc65a754,
          mid_newInstance_63aa6f5f01162583,
          mid_newInstance_57809bf392b66806,
          mid_newInstance_81c4d69757062546,
          mid_newInstance_0fe5880f95528b86,
          mid_newInstance_0b19f2e563b71fc5,
          mid_newInstance_84679f0649faeef6,
          mid_nextAfter_63aa6f5f01162583,
          mid_getDecimalDigits_570ce0828f81a2c1,
          mid_round_2235cd056f5a882b,
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

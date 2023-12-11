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
          mid_init$_9e05f0ac249e16a6,
          mid_newInstance_dce9a968b1de6538,
          mid_newInstance_4cf97baa750c9172,
          mid_newInstance_f081bcbf4bd8f1ad,
          mid_newInstance_e45f329aeeedfd27,
          mid_newInstance_48c0a79cfaaf4ea7,
          mid_newInstance_8418d0fac935c091,
          mid_newInstance_521fd622f2a09126,
          mid_newInstance_7b144e66c7452202,
          mid_nextAfter_f081bcbf4bd8f1ad,
          mid_getDecimalDigits_412668abc8d889e9,
          mid_round_0092017e99012694,
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

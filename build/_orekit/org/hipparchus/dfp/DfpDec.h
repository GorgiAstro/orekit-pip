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
          mid_init$_afbcdba9812369ae,
          mid_newInstance_20a565cdc6596121,
          mid_newInstance_3f89d25657eee84e,
          mid_newInstance_f0d5166eeb6b0680,
          mid_newInstance_970ab21c4d121514,
          mid_newInstance_5caa6ddeafdf80db,
          mid_newInstance_f72d07eb955b446b,
          mid_newInstance_aaf2a1c8efdefd0f,
          mid_newInstance_7c8aa6cad7f772b2,
          mid_nextAfter_f0d5166eeb6b0680,
          mid_getDecimalDigits_f2f64475e4580546,
          mid_round_38565d58479aa24a,
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

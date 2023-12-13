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
          mid_init$_d77491573342a7ca,
          mid_newInstance_2b93193437c3f00d,
          mid_newInstance_844df78cba5c1168,
          mid_newInstance_a714269abf022321,
          mid_newInstance_3dbae42c27edb89e,
          mid_newInstance_757f32f1791cffc4,
          mid_newInstance_026cdd2d1c22b25b,
          mid_newInstance_a276979b31da24ca,
          mid_newInstance_65a23ba49b68f64d,
          mid_nextAfter_a714269abf022321,
          mid_getDecimalDigits_55546ef6a647f39b,
          mid_round_0e7cf35192c3effe,
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

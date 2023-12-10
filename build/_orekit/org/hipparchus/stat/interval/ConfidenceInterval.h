#ifndef org_hipparchus_stat_interval_ConfidenceInterval_H
#define org_hipparchus_stat_interval_ConfidenceInterval_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace interval {

        class ConfidenceInterval : public ::java::lang::Object {
         public:
          enum {
            mid_init$_d0d6094fbd7015c5,
            mid_getConfidenceLevel_456d9a2f64d6b28d,
            mid_getLowerBound_456d9a2f64d6b28d,
            mid_getUpperBound_456d9a2f64d6b28d,
            mid_toString_0090f7797e403f43,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ConfidenceInterval(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          ConfidenceInterval(const ConfidenceInterval& obj) : ::java::lang::Object(obj) {}

          ConfidenceInterval(jdouble, jdouble, jdouble);

          jdouble getConfidenceLevel() const;
          jdouble getLowerBound() const;
          jdouble getUpperBound() const;
          ::java::lang::String toString() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace interval {
        extern PyType_Def PY_TYPE_DEF(ConfidenceInterval);
        extern PyTypeObject *PY_TYPE(ConfidenceInterval);

        class t_ConfidenceInterval {
        public:
          PyObject_HEAD
          ConfidenceInterval object;
          static PyObject *wrap_Object(const ConfidenceInterval&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif

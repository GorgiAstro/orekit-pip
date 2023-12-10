#ifndef org_orekit_propagation_semianalytical_dsst_forces_ShortPeriodTerms_H
#define org_orekit_propagation_semianalytical_dsst_forces_ShortPeriodTerms_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Map;
    class Set;
  }
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace orekit {
    namespace orbits {
      class Orbit;
    }
    namespace time {
      class AbsoluteDate;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {

            class ShortPeriodTerms : public ::java::lang::Object {
             public:
              enum {
                mid_getCoefficients_f2bf54770645c00d,
                mid_getCoefficientsKeyPrefix_0090f7797e403f43,
                mid_value_bae9521eacc13195,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit ShortPeriodTerms(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              ShortPeriodTerms(const ShortPeriodTerms& obj) : ::java::lang::Object(obj) {}

              ::java::util::Map getCoefficients(const ::org::orekit::time::AbsoluteDate &, const ::java::util::Set &) const;
              ::java::lang::String getCoefficientsKeyPrefix() const;
              JArray< jdouble > value(const ::org::orekit::orbits::Orbit &) const;
            };
          }
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {
            extern PyType_Def PY_TYPE_DEF(ShortPeriodTerms);
            extern PyTypeObject *PY_TYPE(ShortPeriodTerms);

            class t_ShortPeriodTerms {
            public:
              PyObject_HEAD
              ShortPeriodTerms object;
              static PyObject *wrap_Object(const ShortPeriodTerms&);
              static PyObject *wrap_jobject(const jobject&);
              static void install(PyObject *module);
              static void initialize(PyObject *module);
            };
          }
        }
      }
    }
  }
}

#endif

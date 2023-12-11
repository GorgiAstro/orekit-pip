#ifndef org_orekit_propagation_semianalytical_dsst_forces_PythonShortPeriodTerms_H
#define org_orekit_propagation_semianalytical_dsst_forces_PythonShortPeriodTerms_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Map;
    class Set;
  }
  namespace lang {
    class Throwable;
    class Class;
    class String;
  }
}
namespace org {
  namespace orekit {
    namespace time {
      class AbsoluteDate;
    }
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {
            class ShortPeriodTerms;
          }
        }
      }
    }
    namespace orbits {
      class Orbit;
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

            class PythonShortPeriodTerms : public ::java::lang::Object {
             public:
              enum {
                mid_init$_0640e6acf969ed28,
                mid_finalize_0640e6acf969ed28,
                mid_getCoefficients_ee77cc1344480b7f,
                mid_getCoefficientsKeyPrefix_3cffd47377eca18a,
                mid_pythonDecRef_0640e6acf969ed28,
                mid_pythonExtension_9e26256fb0d384a2,
                mid_pythonExtension_3cd6a6b354c6aa22,
                mid_value_5997117348549fd3,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit PythonShortPeriodTerms(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              PythonShortPeriodTerms(const PythonShortPeriodTerms& obj) : ::java::lang::Object(obj) {}

              PythonShortPeriodTerms();

              void finalize() const;
              ::java::util::Map getCoefficients(const ::org::orekit::time::AbsoluteDate &, const ::java::util::Set &) const;
              ::java::lang::String getCoefficientsKeyPrefix() const;
              void pythonDecRef() const;
              jlong pythonExtension() const;
              void pythonExtension(jlong) const;
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
            extern PyType_Def PY_TYPE_DEF(PythonShortPeriodTerms);
            extern PyTypeObject *PY_TYPE(PythonShortPeriodTerms);

            class t_PythonShortPeriodTerms {
            public:
              PyObject_HEAD
              PythonShortPeriodTerms object;
              static PyObject *wrap_Object(const PythonShortPeriodTerms&);
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

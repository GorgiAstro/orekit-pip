#ifndef org_orekit_estimation_measurements_gnss_PythonAbstractSingleFrequencyCombination_H
#define org_orekit_estimation_measurements_gnss_PythonAbstractSingleFrequencyCombination_H

#include "org/orekit/estimation/measurements/gnss/AbstractSingleFrequencyCombination.h"

namespace org {
  namespace orekit {
    namespace gnss {
      class SatelliteSystem;
    }
    namespace estimation {
      namespace measurements {
        namespace gnss {
          class CombinationType;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class Throwable;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          class PythonAbstractSingleFrequencyCombination : public ::org::orekit::estimation::measurements::gnss::AbstractSingleFrequencyCombination {
           public:
            enum {
              mid_init$_43eea351c64a25e1,
              mid_finalize_ff7cb6c242604316,
              mid_getCombinedValue_82f92590f4247da1,
              mid_pythonDecRef_ff7cb6c242604316,
              mid_pythonExtension_42c72b98e3c2e08a,
              mid_pythonExtension_f5bbab7e97879358,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PythonAbstractSingleFrequencyCombination(jobject obj) : ::org::orekit::estimation::measurements::gnss::AbstractSingleFrequencyCombination(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PythonAbstractSingleFrequencyCombination(const PythonAbstractSingleFrequencyCombination& obj) : ::org::orekit::estimation::measurements::gnss::AbstractSingleFrequencyCombination(obj) {}

            PythonAbstractSingleFrequencyCombination(const ::org::orekit::estimation::measurements::gnss::CombinationType &, const ::org::orekit::gnss::SatelliteSystem &);

            void finalize() const;
            jdouble getCombinedValue(jdouble, jdouble) const;
            void pythonDecRef() const;
            jlong pythonExtension() const;
            void pythonExtension(jlong) const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {
          extern PyType_Def PY_TYPE_DEF(PythonAbstractSingleFrequencyCombination);
          extern PyTypeObject *PY_TYPE(PythonAbstractSingleFrequencyCombination);

          class t_PythonAbstractSingleFrequencyCombination {
          public:
            PyObject_HEAD
            PythonAbstractSingleFrequencyCombination object;
            static PyObject *wrap_Object(const PythonAbstractSingleFrequencyCombination&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif

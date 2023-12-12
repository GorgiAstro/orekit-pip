#ifndef org_orekit_estimation_measurements_gnss_PythonAbstractDualFrequencyCombination_H
#define org_orekit_estimation_measurements_gnss_PythonAbstractDualFrequencyCombination_H

#include "org/orekit/estimation/measurements/gnss/AbstractDualFrequencyCombination.h"

namespace org {
  namespace orekit {
    namespace gnss {
      class Frequency;
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
    class Throwable;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          class PythonAbstractDualFrequencyCombination : public ::org::orekit::estimation::measurements::gnss::AbstractDualFrequencyCombination {
           public:
            enum {
              mid_init$_e2286686e76d4599,
              mid_finalize_0640e6acf969ed28,
              mid_getCombinedFrequency_ec5e21d51ba3cb9a,
              mid_getCombinedValue_1aca6111050d8282,
              mid_pythonDecRef_0640e6acf969ed28,
              mid_pythonExtension_9e26256fb0d384a2,
              mid_pythonExtension_3cd6a6b354c6aa22,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PythonAbstractDualFrequencyCombination(jobject obj) : ::org::orekit::estimation::measurements::gnss::AbstractDualFrequencyCombination(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PythonAbstractDualFrequencyCombination(const PythonAbstractDualFrequencyCombination& obj) : ::org::orekit::estimation::measurements::gnss::AbstractDualFrequencyCombination(obj) {}

            PythonAbstractDualFrequencyCombination(const ::org::orekit::estimation::measurements::gnss::CombinationType &, const ::org::orekit::gnss::SatelliteSystem &);

            void finalize() const;
            jdouble getCombinedFrequency(const ::org::orekit::gnss::Frequency &, const ::org::orekit::gnss::Frequency &) const;
            jdouble getCombinedValue(jdouble, const ::org::orekit::gnss::Frequency &, jdouble, const ::org::orekit::gnss::Frequency &) const;
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
          extern PyType_Def PY_TYPE_DEF(PythonAbstractDualFrequencyCombination);
          extern PyTypeObject *PY_TYPE(PythonAbstractDualFrequencyCombination);

          class t_PythonAbstractDualFrequencyCombination {
          public:
            PyObject_HEAD
            PythonAbstractDualFrequencyCombination object;
            static PyObject *wrap_Object(const PythonAbstractDualFrequencyCombination&);
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

#ifndef org_orekit_estimation_measurements_gnss_PythonAbstractDualFrequencyCombination_H
#define org_orekit_estimation_measurements_gnss_PythonAbstractDualFrequencyCombination_H

#include "org/orekit/estimation/measurements/gnss/AbstractDualFrequencyCombination.h"

namespace org {
  namespace orekit {
    namespace gnss {
      class SatelliteSystem;
      class Frequency;
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
              mid_init$_1af956d1b87222ce,
              mid_finalize_a1fa5dae97ea5ed2,
              mid_getCombinedFrequency_7bbbdc452eac601c,
              mid_getCombinedValue_67abdaf53ea90950,
              mid_pythonDecRef_a1fa5dae97ea5ed2,
              mid_pythonExtension_6c0ce7e438e5ded4,
              mid_pythonExtension_3d7dd2314a0dd456,
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

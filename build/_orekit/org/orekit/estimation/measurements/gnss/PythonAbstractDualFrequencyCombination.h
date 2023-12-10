#ifndef org_orekit_estimation_measurements_gnss_PythonAbstractDualFrequencyCombination_H
#define org_orekit_estimation_measurements_gnss_PythonAbstractDualFrequencyCombination_H

#include "org/orekit/estimation/measurements/gnss/AbstractDualFrequencyCombination.h"

namespace java {
  namespace lang {
    class Throwable;
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {
          class CombinationType;
        }
      }
    }
    namespace gnss {
      class SatelliteSystem;
      class Frequency;
    }
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
              mid_init$_809b540e573977f2,
              mid_finalize_7ae3461a92a43152,
              mid_getCombinedFrequency_f4c99548ccdd1967,
              mid_getCombinedValue_17aea80d13f83b81,
              mid_pythonDecRef_7ae3461a92a43152,
              mid_pythonExtension_a27fc9afd27e559d,
              mid_pythonExtension_fefb08975c10f0a1,
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

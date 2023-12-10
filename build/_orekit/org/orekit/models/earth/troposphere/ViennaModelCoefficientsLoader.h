#ifndef org_orekit_models_earth_troposphere_ViennaModelCoefficientsLoader_H
#define org_orekit_models_earth_troposphere_ViennaModelCoefficientsLoader_H

#include "org/orekit/data/AbstractSelfFeedingLoader.h"

namespace java {
  namespace text {
    class ParseException;
  }
  namespace io {
    class IOException;
    class InputStream;
  }
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace orekit {
    namespace data {
      class DataProvidersManager;
      class DataLoader;
    }
    namespace time {
      class DateTimeComponents;
    }
    namespace models {
      namespace earth {
        namespace troposphere {
          class ViennaModelType;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace troposphere {

          class ViennaModelCoefficientsLoader : public ::org::orekit::data::AbstractSelfFeedingLoader {
           public:
            enum {
              mid_init$_10464a1e1406b2a8,
              mid_init$_e2acdcd5ca89a6e6,
              mid_init$_615a551bd8547b2e,
              mid_getA_60c7040667a7dc5c,
              mid_getSupportedNames_11b109bd155ca898,
              mid_getZenithDelay_60c7040667a7dc5c,
              mid_loadData_1815f85c118161ad,
              mid_loadViennaCoefficients_0fa09c18fee449d5,
              mid_loadViennaCoefficients_4d63b530baf1ccb7,
              mid_stillAcceptsData_b108b35ef48e27bd,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ViennaModelCoefficientsLoader(jobject obj) : ::org::orekit::data::AbstractSelfFeedingLoader(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ViennaModelCoefficientsLoader(const ViennaModelCoefficientsLoader& obj) : ::org::orekit::data::AbstractSelfFeedingLoader(obj) {}

            static ::java::lang::String *DEFAULT_SUPPORTED_NAMES;

            ViennaModelCoefficientsLoader(jdouble, jdouble, const ::org::orekit::models::earth::troposphere::ViennaModelType &);
            ViennaModelCoefficientsLoader(const ::java::lang::String &, jdouble, jdouble, const ::org::orekit::models::earth::troposphere::ViennaModelType &);
            ViennaModelCoefficientsLoader(const ::java::lang::String &, jdouble, jdouble, const ::org::orekit::models::earth::troposphere::ViennaModelType &, const ::org::orekit::data::DataProvidersManager &);

            JArray< jdouble > getA() const;
            ::java::lang::String getSupportedNames() const;
            JArray< jdouble > getZenithDelay() const;
            void loadData(const ::java::io::InputStream &, const ::java::lang::String &) const;
            void loadViennaCoefficients() const;
            void loadViennaCoefficients(const ::org::orekit::time::DateTimeComponents &) const;
            jboolean stillAcceptsData() const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace troposphere {
          extern PyType_Def PY_TYPE_DEF(ViennaModelCoefficientsLoader);
          extern PyTypeObject *PY_TYPE(ViennaModelCoefficientsLoader);

          class t_ViennaModelCoefficientsLoader {
          public:
            PyObject_HEAD
            ViennaModelCoefficientsLoader object;
            static PyObject *wrap_Object(const ViennaModelCoefficientsLoader&);
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

#ifndef org_orekit_models_earth_troposphere_ViennaModelCoefficientsLoader_H
#define org_orekit_models_earth_troposphere_ViennaModelCoefficientsLoader_H

#include "org/orekit/data/AbstractSelfFeedingLoader.h"

namespace java {
  namespace io {
    class IOException;
    class InputStream;
  }
  namespace text {
    class ParseException;
  }
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace orekit {
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
    namespace data {
      class DataLoader;
      class DataProvidersManager;
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
              mid_init$_78b7236f6301a45c,
              mid_init$_546546d83e2025a2,
              mid_init$_eae678247058e615,
              mid_getA_be783177b060994b,
              mid_getSupportedNames_d2c8eb4129821f0e,
              mid_getZenithDelay_be783177b060994b,
              mid_loadData_bec0f846e5ec73da,
              mid_loadViennaCoefficients_ff7cb6c242604316,
              mid_loadViennaCoefficients_d3c621492f146ad9,
              mid_stillAcceptsData_eee3de00fe971136,
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

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
    namespace time {
      class DateTimeComponents;
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
              mid_init$_7c93207b27c1d5d1,
              mid_init$_7decaa8221e502f9,
              mid_init$_e8b83fa5b312fd3e,
              mid_getA_a53a7513ecedada2,
              mid_getSupportedNames_3cffd47377eca18a,
              mid_getZenithDelay_a53a7513ecedada2,
              mid_loadData_15770e8d8949a557,
              mid_loadViennaCoefficients_0640e6acf969ed28,
              mid_loadViennaCoefficients_f86c144703aac3d6,
              mid_stillAcceptsData_89b302893bdbe1f1,
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

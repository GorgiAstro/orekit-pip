#ifndef org_orekit_models_earth_troposphere_ViennaModelCoefficientsLoader_H
#define org_orekit_models_earth_troposphere_ViennaModelCoefficientsLoader_H

#include "org/orekit/data/AbstractSelfFeedingLoader.h"

namespace org {
  namespace orekit {
    namespace data {
      class DataLoader;
      class DataProvidersManager;
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
namespace java {
  namespace io {
    class InputStream;
    class IOException;
  }
  namespace text {
    class ParseException;
  }
  namespace lang {
    class Class;
    class String;
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
              mid_init$_94a432a96b6f2908,
              mid_init$_10c8955a59d23838,
              mid_init$_293ce9451bede7f1,
              mid_getA_25e1757a36c4dde2,
              mid_getSupportedNames_1c1fa1e935d6cdcf,
              mid_getZenithDelay_25e1757a36c4dde2,
              mid_loadData_360461e719fb564c,
              mid_loadViennaCoefficients_a1fa5dae97ea5ed2,
              mid_loadViennaCoefficients_0ae14a6b384129f2,
              mid_stillAcceptsData_9ab94ac1dc23b105,
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

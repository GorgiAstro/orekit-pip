#ifndef org_orekit_models_earth_troposphere_ViennaModelCoefficientsLoader_H
#define org_orekit_models_earth_troposphere_ViennaModelCoefficientsLoader_H

#include "org/orekit/data/AbstractSelfFeedingLoader.h"

namespace java {
  namespace io {
    class IOException;
    class InputStream;
  }
  namespace lang {
    class Class;
    class String;
  }
  namespace text {
    class ParseException;
  }
}
namespace org {
  namespace orekit {
    namespace time {
      class DateTimeComponents;
    }
    namespace data {
      class DataProvidersManager;
      class DataLoader;
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
              mid_init$_320383c73b780816,
              mid_init$_7cde855d7ec2fcd3,
              mid_init$_5ac77ae5b8feddee,
              mid_getA_7cdc325af0834901,
              mid_getSupportedNames_0090f7797e403f43,
              mid_getZenithDelay_7cdc325af0834901,
              mid_loadData_ec60cb5f4b3de555,
              mid_loadViennaCoefficients_7ae3461a92a43152,
              mid_loadViennaCoefficients_994b26ed44999e86,
              mid_stillAcceptsData_e470b6d9e0d979db,
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

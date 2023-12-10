#ifndef org_orekit_models_earth_displacement_OceanLoadingCoefficientsBLQFactory_H
#define org_orekit_models_earth_displacement_OceanLoadingCoefficientsBLQFactory_H

#include "org/orekit/data/AbstractSelfFeedingLoader.h"

namespace java {
  namespace util {
    class List;
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
    }
    namespace models {
      namespace earth {
        namespace displacement {
          class OceanLoadingCoefficients;
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
        namespace displacement {

          class OceanLoadingCoefficientsBLQFactory : public ::org::orekit::data::AbstractSelfFeedingLoader {
           public:
            enum {
              mid_init$_e939c6558ae8d313,
              mid_init$_2a9119a84e92f14a,
              mid_getCoefficients_b3cb1d0c3deafefc,
              mid_getSites_a6156df500549a58,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit OceanLoadingCoefficientsBLQFactory(jobject obj) : ::org::orekit::data::AbstractSelfFeedingLoader(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            OceanLoadingCoefficientsBLQFactory(const OceanLoadingCoefficientsBLQFactory& obj) : ::org::orekit::data::AbstractSelfFeedingLoader(obj) {}

            static ::java::lang::String *DEFAULT_BLQ_SUPPORTED_NAMES;

            OceanLoadingCoefficientsBLQFactory(const ::java::lang::String &);
            OceanLoadingCoefficientsBLQFactory(const ::java::lang::String &, const ::org::orekit::data::DataProvidersManager &);

            ::org::orekit::models::earth::displacement::OceanLoadingCoefficients getCoefficients(const ::java::lang::String &) const;
            ::java::util::List getSites() const;
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
        namespace displacement {
          extern PyType_Def PY_TYPE_DEF(OceanLoadingCoefficientsBLQFactory);
          extern PyTypeObject *PY_TYPE(OceanLoadingCoefficientsBLQFactory);

          class t_OceanLoadingCoefficientsBLQFactory {
          public:
            PyObject_HEAD
            OceanLoadingCoefficientsBLQFactory object;
            static PyObject *wrap_Object(const OceanLoadingCoefficientsBLQFactory&);
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

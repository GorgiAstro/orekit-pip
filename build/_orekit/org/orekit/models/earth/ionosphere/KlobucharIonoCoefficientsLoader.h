#ifndef org_orekit_models_earth_ionosphere_KlobucharIonoCoefficientsLoader_H
#define org_orekit_models_earth_ionosphere_KlobucharIonoCoefficientsLoader_H

#include "org/orekit/data/AbstractSelfFeedingLoader.h"

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
namespace org {
  namespace orekit {
    namespace data {
      class DataLoader;
      class DataProvidersManager;
    }
    namespace time {
      class DateComponents;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace ionosphere {

          class KlobucharIonoCoefficientsLoader : public ::org::orekit::data::AbstractSelfFeedingLoader {
           public:
            enum {
              mid_init$_a1fa5dae97ea5ed2,
              mid_init$_734b91ac30d5f9b4,
              mid_init$_0343d25c5af74eca,
              mid_getAlpha_25e1757a36c4dde2,
              mid_getBeta_25e1757a36c4dde2,
              mid_getSupportedNames_1c1fa1e935d6cdcf,
              mid_loadData_360461e719fb564c,
              mid_loadKlobucharIonosphericCoefficients_a1fa5dae97ea5ed2,
              mid_loadKlobucharIonosphericCoefficients_a97e9138404c69cd,
              mid_stillAcceptsData_9ab94ac1dc23b105,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit KlobucharIonoCoefficientsLoader(jobject obj) : ::org::orekit::data::AbstractSelfFeedingLoader(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            KlobucharIonoCoefficientsLoader(const KlobucharIonoCoefficientsLoader& obj) : ::org::orekit::data::AbstractSelfFeedingLoader(obj) {}

            static ::java::lang::String *DEFAULT_SUPPORTED_NAMES;

            KlobucharIonoCoefficientsLoader();
            KlobucharIonoCoefficientsLoader(const ::java::lang::String &);
            KlobucharIonoCoefficientsLoader(const ::java::lang::String &, const ::org::orekit::data::DataProvidersManager &);

            JArray< jdouble > getAlpha() const;
            JArray< jdouble > getBeta() const;
            ::java::lang::String getSupportedNames() const;
            void loadData(const ::java::io::InputStream &, const ::java::lang::String &) const;
            void loadKlobucharIonosphericCoefficients() const;
            void loadKlobucharIonosphericCoefficients(const ::org::orekit::time::DateComponents &) const;
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
        namespace ionosphere {
          extern PyType_Def PY_TYPE_DEF(KlobucharIonoCoefficientsLoader);
          extern PyTypeObject *PY_TYPE(KlobucharIonoCoefficientsLoader);

          class t_KlobucharIonoCoefficientsLoader {
          public:
            PyObject_HEAD
            KlobucharIonoCoefficientsLoader object;
            static PyObject *wrap_Object(const KlobucharIonoCoefficientsLoader&);
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

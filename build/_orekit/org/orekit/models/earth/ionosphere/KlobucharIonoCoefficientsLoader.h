#ifndef org_orekit_models_earth_ionosphere_KlobucharIonoCoefficientsLoader_H
#define org_orekit_models_earth_ionosphere_KlobucharIonoCoefficientsLoader_H

#include "org/orekit/data/AbstractSelfFeedingLoader.h"

namespace org {
  namespace orekit {
    namespace time {
      class DateComponents;
    }
    namespace data {
      class DataLoader;
      class DataProvidersManager;
    }
  }
}
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
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace ionosphere {

          class KlobucharIonoCoefficientsLoader : public ::org::orekit::data::AbstractSelfFeedingLoader {
           public:
            enum {
              mid_init$_0640e6acf969ed28,
              mid_init$_f5ffdf29129ef90a,
              mid_init$_28c7bdc075bb74e8,
              mid_getAlpha_a53a7513ecedada2,
              mid_getBeta_a53a7513ecedada2,
              mid_getSupportedNames_3cffd47377eca18a,
              mid_loadData_15770e8d8949a557,
              mid_loadKlobucharIonosphericCoefficients_0640e6acf969ed28,
              mid_loadKlobucharIonosphericCoefficients_4d2eb60c6d6ac3df,
              mid_stillAcceptsData_89b302893bdbe1f1,
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

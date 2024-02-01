#ifndef org_orekit_models_earth_ionosphere_KlobucharIonoCoefficientsLoader_H
#define org_orekit_models_earth_ionosphere_KlobucharIonoCoefficientsLoader_H

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
              mid_init$_ff7cb6c242604316,
              mid_init$_105e1eadb709d9ac,
              mid_init$_4c16e57d19ddaa09,
              mid_getAlpha_be783177b060994b,
              mid_getBeta_be783177b060994b,
              mid_getSupportedNames_d2c8eb4129821f0e,
              mid_loadData_bec0f846e5ec73da,
              mid_loadKlobucharIonosphericCoefficients_ff7cb6c242604316,
              mid_loadKlobucharIonosphericCoefficients_badbbe8d1e1c6168,
              mid_stillAcceptsData_eee3de00fe971136,
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

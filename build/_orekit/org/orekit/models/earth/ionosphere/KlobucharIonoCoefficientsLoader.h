#ifndef org_orekit_models_earth_ionosphere_KlobucharIonoCoefficientsLoader_H
#define org_orekit_models_earth_ionosphere_KlobucharIonoCoefficientsLoader_H

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
              mid_init$_0fa09c18fee449d5,
              mid_init$_d0bc48d5b00dc40c,
              mid_init$_63232a42a5419b09,
              mid_getAlpha_60c7040667a7dc5c,
              mid_getBeta_60c7040667a7dc5c,
              mid_getSupportedNames_11b109bd155ca898,
              mid_loadData_1815f85c118161ad,
              mid_loadKlobucharIonosphericCoefficients_0fa09c18fee449d5,
              mid_loadKlobucharIonosphericCoefficients_56dc33c3871b1cb7,
              mid_stillAcceptsData_b108b35ef48e27bd,
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

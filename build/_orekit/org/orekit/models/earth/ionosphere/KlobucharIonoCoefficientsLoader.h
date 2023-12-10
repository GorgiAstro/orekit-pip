#ifndef org_orekit_models_earth_ionosphere_KlobucharIonoCoefficientsLoader_H
#define org_orekit_models_earth_ionosphere_KlobucharIonoCoefficientsLoader_H

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
              mid_init$_7ae3461a92a43152,
              mid_init$_e939c6558ae8d313,
              mid_init$_2a9119a84e92f14a,
              mid_getAlpha_7cdc325af0834901,
              mid_getBeta_7cdc325af0834901,
              mid_getSupportedNames_0090f7797e403f43,
              mid_loadData_ec60cb5f4b3de555,
              mid_loadKlobucharIonosphericCoefficients_7ae3461a92a43152,
              mid_loadKlobucharIonosphericCoefficients_cd567be04bee4d03,
              mid_stillAcceptsData_e470b6d9e0d979db,
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

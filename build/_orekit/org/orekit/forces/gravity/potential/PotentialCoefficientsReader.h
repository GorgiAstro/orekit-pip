#ifndef org_orekit_forces_gravity_potential_PotentialCoefficientsReader_H
#define org_orekit_forces_gravity_potential_PotentialCoefficientsReader_H

#include "java/lang/Object.h"

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
    namespace errors {
      class OrekitException;
    }
    namespace data {
      class DataLoader;
    }
    namespace forces {
      namespace gravity {
        namespace potential {
          class RawSphericalHarmonicsProvider;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {

          class PotentialCoefficientsReader : public ::java::lang::Object {
           public:
            enum {
              mid_getMaxAvailableDegree_f2f64475e4580546,
              mid_getMaxAvailableOrder_f2f64475e4580546,
              mid_getMaxParseDegree_f2f64475e4580546,
              mid_getMaxParseOrder_f2f64475e4580546,
              mid_getProvider_086897fc27688c23,
              mid_getSupportedNames_0090f7797e403f43,
              mid_loadData_ec60cb5f4b3de555,
              mid_missingCoefficientsAllowed_e470b6d9e0d979db,
              mid_setMaxParseDegree_0a2a1ac2721c0336,
              mid_setMaxParseOrder_0a2a1ac2721c0336,
              mid_stillAcceptsData_e470b6d9e0d979db,
              mid_getMu_456d9a2f64d6b28d,
              mid_getAe_456d9a2f64d6b28d,
              mid_getTideSystem_b3b39360f3c8a6ac,
              mid_rescale_603395f9c9d40754,
              mid_rescale_c0bac7c5b0ea5f9b,
              mid_setMu_77e0f9a1f260e2e5,
              mid_toDate_5e0af9b6a38de143,
              mid_toDate_a6298298e8300bc3,
              mid_buildFlatArray_787b397a6d306d3e,
              mid_buildRow_752de4f2ebe33c25,
              mid_setReadComplete_50a2e0b139e80a58,
              mid_setAe_77e0f9a1f260e2e5,
              mid_setTideSystem_e24b20eb26eb22bd,
              mid_parseCoefficient_43c7e8e4ff38596a,
              mid_setRawCoefficients_9ba7c4948102f888,
              mid_getBaseProvider_bd2bf0402b184c8a,
              mid_parseDouble_531dcf669f2059aa,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PotentialCoefficientsReader(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PotentialCoefficientsReader(const PotentialCoefficientsReader& obj) : ::java::lang::Object(obj) {}

            jint getMaxAvailableDegree() const;
            jint getMaxAvailableOrder() const;
            jint getMaxParseDegree() const;
            jint getMaxParseOrder() const;
            ::org::orekit::forces::gravity::potential::RawSphericalHarmonicsProvider getProvider(jboolean, jint, jint) const;
            ::java::lang::String getSupportedNames() const;
            void loadData(const ::java::io::InputStream &, const ::java::lang::String &) const;
            jboolean missingCoefficientsAllowed() const;
            void setMaxParseDegree(jint) const;
            void setMaxParseOrder(jint) const;
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
    namespace forces {
      namespace gravity {
        namespace potential {
          extern PyType_Def PY_TYPE_DEF(PotentialCoefficientsReader);
          extern PyTypeObject *PY_TYPE(PotentialCoefficientsReader);

          class t_PotentialCoefficientsReader {
          public:
            PyObject_HEAD
            PotentialCoefficientsReader object;
            static PyObject *wrap_Object(const PotentialCoefficientsReader&);
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

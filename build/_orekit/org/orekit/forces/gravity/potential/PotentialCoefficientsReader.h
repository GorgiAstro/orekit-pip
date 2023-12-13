#ifndef org_orekit_forces_gravity_potential_PotentialCoefficientsReader_H
#define org_orekit_forces_gravity_potential_PotentialCoefficientsReader_H

#include "java/lang/Object.h"

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
    }
    namespace errors {
      class OrekitException;
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
              mid_getMaxAvailableDegree_55546ef6a647f39b,
              mid_getMaxAvailableOrder_55546ef6a647f39b,
              mid_getMaxParseDegree_55546ef6a647f39b,
              mid_getMaxParseOrder_55546ef6a647f39b,
              mid_getProvider_752316a4c911183b,
              mid_getSupportedNames_1c1fa1e935d6cdcf,
              mid_loadData_360461e719fb564c,
              mid_missingCoefficientsAllowed_9ab94ac1dc23b105,
              mid_setMaxParseDegree_44ed599e93e8a30c,
              mid_setMaxParseOrder_44ed599e93e8a30c,
              mid_stillAcceptsData_9ab94ac1dc23b105,
              mid_rescale_bf4a5ef300e8660d,
              mid_rescale_866d83410dd782dc,
              mid_getMu_b74f83833fdad017,
              mid_getAe_b74f83833fdad017,
              mid_getTideSystem_b2b14af197a8eaf6,
              mid_setTideSystem_000902343092f062,
              mid_setReadComplete_fcb96c98de6fad04,
              mid_getBaseProvider_124a94790014d0c0,
              mid_setAe_8ba9fe7a847cecad,
              mid_setMu_8ba9fe7a847cecad,
              mid_toDate_d623b29c1aec099c,
              mid_toDate_196362129130a95d,
              mid_buildFlatArray_ec5bff1c48966184,
              mid_parseCoefficient_c428066e62422ca4,
              mid_setRawCoefficients_74176397b7cf8789,
              mid_buildRow_e7bae2b43681e826,
              mid_parseDouble_a84f304e8cd7ce1b,
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

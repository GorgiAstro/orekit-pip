#ifndef org_orekit_forces_gravity_potential_PotentialCoefficientsReader_H
#define org_orekit_forces_gravity_potential_PotentialCoefficientsReader_H

#include "java/lang/Object.h"

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
    namespace forces {
      namespace gravity {
        namespace potential {
          class RawSphericalHarmonicsProvider;
        }
      }
    }
    namespace data {
      class DataLoader;
    }
    namespace errors {
      class OrekitException;
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
              mid_getMaxAvailableDegree_d6ab429752e7c267,
              mid_getMaxAvailableOrder_d6ab429752e7c267,
              mid_getMaxParseDegree_d6ab429752e7c267,
              mid_getMaxParseOrder_d6ab429752e7c267,
              mid_getProvider_0c94c2344ee8a0fa,
              mid_getSupportedNames_d2c8eb4129821f0e,
              mid_loadData_bec0f846e5ec73da,
              mid_missingCoefficientsAllowed_eee3de00fe971136,
              mid_setMaxParseDegree_8fd427ab23829bf5,
              mid_setMaxParseOrder_8fd427ab23829bf5,
              mid_stillAcceptsData_eee3de00fe971136,
              mid_getMu_9981f74b2d109da6,
              mid_getAe_9981f74b2d109da6,
              mid_getTideSystem_1e0f912623cd4841,
              mid_setMu_1ad26e8c8c0cd65b,
              mid_setReadComplete_b35db77cae58639e,
              mid_setAe_1ad26e8c8c0cd65b,
              mid_setTideSystem_9bb8c9e1687750ae,
              mid_parseCoefficient_33876e9c717884ad,
              mid_setRawCoefficients_c01babe726b6f761,
              mid_getBaseProvider_53620227e4e88d38,
              mid_buildFlatArray_7915044ffca812bd,
              mid_buildRow_77d4e204031b0229,
              mid_toDate_bb97c745b89acad5,
              mid_toDate_af5c997a6fa63020,
              mid_rescale_aed4679379b294cb,
              mid_rescale_a33ccef86d94be5f,
              mid_parseDouble_f2fc085ab82846a3,
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

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
              mid_getMaxAvailableDegree_412668abc8d889e9,
              mid_getMaxAvailableOrder_412668abc8d889e9,
              mid_getMaxParseDegree_412668abc8d889e9,
              mid_getMaxParseOrder_412668abc8d889e9,
              mid_getProvider_f0b357b475e18957,
              mid_getSupportedNames_3cffd47377eca18a,
              mid_loadData_15770e8d8949a557,
              mid_missingCoefficientsAllowed_89b302893bdbe1f1,
              mid_setMaxParseDegree_a3da1a935cb37f7b,
              mid_setMaxParseOrder_a3da1a935cb37f7b,
              mid_stillAcceptsData_89b302893bdbe1f1,
              mid_getMu_557b8123390d8d0c,
              mid_getAe_557b8123390d8d0c,
              mid_getTideSystem_7d9a2a298dcb49fa,
              mid_toDate_469425c83a305968,
              mid_toDate_d2ab2a876c299d78,
              mid_rescale_694cbd0c9d2012bc,
              mid_rescale_30c637d022c053e7,
              mid_setMu_10f281d777284cea,
              mid_parseCoefficient_18c60afe1bc1abc4,
              mid_setReadComplete_ed2afdb8506b9742,
              mid_setAe_10f281d777284cea,
              mid_setTideSystem_fe9afd278841d180,
              mid_setRawCoefficients_b7bd4586f308d44a,
              mid_getBaseProvider_0e1e7c4563c4b007,
              mid_buildFlatArray_4d37aaaa24dcf6a3,
              mid_buildRow_7ded574d710da36c,
              mid_parseDouble_071554b5f5a6b17b,
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

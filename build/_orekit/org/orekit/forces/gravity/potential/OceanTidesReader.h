#ifndef org_orekit_forces_gravity_potential_OceanTidesReader_H
#define org_orekit_forces_gravity_potential_OceanTidesReader_H

#include "java/lang/Object.h"

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
      class DataLoader;
    }
    namespace forces {
      namespace gravity {
        namespace potential {
          class OceanTidesWave;
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

          class OceanTidesReader : public ::java::lang::Object {
           public:
            enum {
              mid_init$_d0bc48d5b00dc40c,
              mid_canAdd_4bcf680fb63dc524,
              mid_getMaxParseDegree_570ce0828f81a2c1,
              mid_getMaxParseOrder_570ce0828f81a2c1,
              mid_getSupportedNames_11b109bd155ca898,
              mid_getWaves_2afa36052df4765d,
              mid_setMaxParseDegree_99803b0791f320ff,
              mid_setMaxParseOrder_99803b0791f320ff,
              mid_stillAcceptsData_b108b35ef48e27bd,
              mid_endParse_0fa09c18fee449d5,
              mid_startParse_d0bc48d5b00dc40c,
              mid_addWaveCoefficients_0d53f0d16fa90ec6,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit OceanTidesReader(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            OceanTidesReader(const OceanTidesReader& obj) : ::java::lang::Object(obj) {}

            OceanTidesReader(const ::java::lang::String &);

            jboolean canAdd(jint, jint) const;
            jint getMaxParseDegree() const;
            jint getMaxParseOrder() const;
            ::java::lang::String getSupportedNames() const;
            ::java::util::List getWaves() const;
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
          extern PyType_Def PY_TYPE_DEF(OceanTidesReader);
          extern PyTypeObject *PY_TYPE(OceanTidesReader);

          class t_OceanTidesReader {
          public:
            PyObject_HEAD
            OceanTidesReader object;
            static PyObject *wrap_Object(const OceanTidesReader&);
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

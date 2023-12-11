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
              mid_init$_f5ffdf29129ef90a,
              mid_canAdd_1e0f61f59fdd7111,
              mid_getMaxParseDegree_412668abc8d889e9,
              mid_getMaxParseOrder_412668abc8d889e9,
              mid_getSupportedNames_3cffd47377eca18a,
              mid_getWaves_0d9551367f7ecdef,
              mid_setMaxParseDegree_a3da1a935cb37f7b,
              mid_setMaxParseOrder_a3da1a935cb37f7b,
              mid_stillAcceptsData_89b302893bdbe1f1,
              mid_addWaveCoefficients_9f0359e61fbe1af2,
              mid_endParse_0640e6acf969ed28,
              mid_startParse_f5ffdf29129ef90a,
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

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
              mid_init$_734b91ac30d5f9b4,
              mid_canAdd_75f431eefaad4f32,
              mid_getMaxParseDegree_55546ef6a647f39b,
              mid_getMaxParseOrder_55546ef6a647f39b,
              mid_getSupportedNames_1c1fa1e935d6cdcf,
              mid_getWaves_e62d3bb06d56d7e3,
              mid_setMaxParseDegree_44ed599e93e8a30c,
              mid_setMaxParseOrder_44ed599e93e8a30c,
              mid_stillAcceptsData_9ab94ac1dc23b105,
              mid_startParse_734b91ac30d5f9b4,
              mid_addWaveCoefficients_5e9b52046c638255,
              mid_endParse_a1fa5dae97ea5ed2,
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

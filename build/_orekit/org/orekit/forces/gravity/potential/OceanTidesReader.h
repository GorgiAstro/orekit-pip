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
              mid_init$_e939c6558ae8d313,
              mid_canAdd_638a6e940edd0ad7,
              mid_getMaxParseDegree_f2f64475e4580546,
              mid_getMaxParseOrder_f2f64475e4580546,
              mid_getSupportedNames_0090f7797e403f43,
              mid_getWaves_a6156df500549a58,
              mid_setMaxParseDegree_0a2a1ac2721c0336,
              mid_setMaxParseOrder_0a2a1ac2721c0336,
              mid_stillAcceptsData_e470b6d9e0d979db,
              mid_addWaveCoefficients_38819d7d75f86e45,
              mid_endParse_7ae3461a92a43152,
              mid_startParse_e939c6558ae8d313,
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

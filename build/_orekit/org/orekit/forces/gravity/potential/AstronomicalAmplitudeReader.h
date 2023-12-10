#ifndef org_orekit_forces_gravity_potential_AstronomicalAmplitudeReader_H
#define org_orekit_forces_gravity_potential_AstronomicalAmplitudeReader_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class IOException;
    class InputStream;
  }
  namespace util {
    class Map;
  }
  namespace lang {
    class Integer;
    class Double;
    class Class;
    class String;
  }
}
namespace org {
  namespace orekit {
    namespace data {
      class DataLoader;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {

          class AstronomicalAmplitudeReader : public ::java::lang::Object {
           public:
            enum {
              mid_init$_8b8ad8f318d7ad17,
              mid_getAstronomicalAmplitudesMap_d6753b7055940a54,
              mid_getSupportedNames_0090f7797e403f43,
              mid_loadData_ec60cb5f4b3de555,
              mid_stillAcceptsData_e470b6d9e0d979db,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit AstronomicalAmplitudeReader(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            AstronomicalAmplitudeReader(const AstronomicalAmplitudeReader& obj) : ::java::lang::Object(obj) {}

            AstronomicalAmplitudeReader(const ::java::lang::String &, jint, jint, jint, jdouble);

            ::java::util::Map getAstronomicalAmplitudesMap() const;
            ::java::lang::String getSupportedNames() const;
            void loadData(const ::java::io::InputStream &, const ::java::lang::String &) const;
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
          extern PyType_Def PY_TYPE_DEF(AstronomicalAmplitudeReader);
          extern PyTypeObject *PY_TYPE(AstronomicalAmplitudeReader);

          class t_AstronomicalAmplitudeReader {
          public:
            PyObject_HEAD
            AstronomicalAmplitudeReader object;
            static PyObject *wrap_Object(const AstronomicalAmplitudeReader&);
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
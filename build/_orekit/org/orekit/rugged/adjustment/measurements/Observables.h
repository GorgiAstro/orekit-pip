#ifndef org_orekit_rugged_adjustment_measurements_Observables_H
#define org_orekit_rugged_adjustment_measurements_Observables_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Collection;
  }
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace orekit {
    namespace rugged {
      namespace adjustment {
        namespace measurements {
          class SensorToGroundMapping;
          class SensorToSensorMapping;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace rugged {
      namespace adjustment {
        namespace measurements {

          class Observables : public ::java::lang::Object {
           public:
            enum {
              mid_init$_a3da1a935cb37f7b,
              mid_addGroundMapping_20b2c0aea4daece7,
              mid_addInterMapping_7e4266e4836752ff,
              mid_getGroundMapping_276bf3c3705258c9,
              mid_getGroundMappings_12ee61573a18f417,
              mid_getInterMapping_67d9a3f0c5fca42f,
              mid_getInterMappings_12ee61573a18f417,
              mid_getNbModels_412668abc8d889e9,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Observables(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Observables(const Observables& obj) : ::java::lang::Object(obj) {}

            Observables(jint);

            void addGroundMapping(const ::org::orekit::rugged::adjustment::measurements::SensorToGroundMapping &) const;
            void addInterMapping(const ::org::orekit::rugged::adjustment::measurements::SensorToSensorMapping &) const;
            ::org::orekit::rugged::adjustment::measurements::SensorToGroundMapping getGroundMapping(const ::java::lang::String &, const ::java::lang::String &) const;
            ::java::util::Collection getGroundMappings() const;
            ::org::orekit::rugged::adjustment::measurements::SensorToSensorMapping getInterMapping(const ::java::lang::String &, const ::java::lang::String &, const ::java::lang::String &, const ::java::lang::String &) const;
            ::java::util::Collection getInterMappings() const;
            jint getNbModels() const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace rugged {
      namespace adjustment {
        namespace measurements {
          extern PyType_Def PY_TYPE_DEF(Observables);
          extern PyTypeObject *PY_TYPE(Observables);

          class t_Observables {
          public:
            PyObject_HEAD
            Observables object;
            static PyObject *wrap_Object(const Observables&);
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

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
              mid_init$_44ed599e93e8a30c,
              mid_addGroundMapping_8e6e13960e940d33,
              mid_addInterMapping_33f55f90ed9a2941,
              mid_getGroundMapping_1d3ad911c8b09b5e,
              mid_getGroundMappings_cb666ea1a15f5210,
              mid_getInterMapping_280eb85d4190bd68,
              mid_getInterMappings_cb666ea1a15f5210,
              mid_getNbModels_55546ef6a647f39b,
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

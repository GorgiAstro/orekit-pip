#ifndef org_orekit_rugged_adjustment_measurements_Observables_H
#define org_orekit_rugged_adjustment_measurements_Observables_H

#include "java/lang/Object.h"

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
namespace java {
  namespace util {
    class Collection;
  }
  namespace lang {
    class Class;
    class String;
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
              mid_init$_99803b0791f320ff,
              mid_addGroundMapping_3c453fa32a2c5ba5,
              mid_addInterMapping_d927b7daafd7c09a,
              mid_getGroundMapping_67bb76e411ff1ed2,
              mid_getGroundMappings_37528d110cff6b74,
              mid_getInterMapping_eeb650d7ed3a1f0b,
              mid_getInterMappings_37528d110cff6b74,
              mid_getNbModels_570ce0828f81a2c1,
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

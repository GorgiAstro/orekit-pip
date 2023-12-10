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
          class SensorToSensorMapping;
          class SensorToGroundMapping;
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
              mid_init$_0a2a1ac2721c0336,
              mid_addGroundMapping_1afb5828617014ec,
              mid_addInterMapping_8cf2ccb67844acde,
              mid_getGroundMapping_372d2e7f09297236,
              mid_getGroundMappings_cfcfd130f9013e3e,
              mid_getInterMapping_eebda754e4c976db,
              mid_getInterMappings_cfcfd130f9013e3e,
              mid_getNbModels_f2f64475e4580546,
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

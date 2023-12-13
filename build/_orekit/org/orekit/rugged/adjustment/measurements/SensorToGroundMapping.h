#ifndef org_orekit_rugged_adjustment_measurements_SensorToGroundMapping_H
#define org_orekit_rugged_adjustment_measurements_SensorToGroundMapping_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Map$Entry;
    class Set;
  }
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace orekit {
    namespace bodies {
      class GeodeticPoint;
    }
    namespace rugged {
      namespace linesensor {
        class SensorPixel;
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

          class SensorToGroundMapping : public ::java::lang::Object {
           public:
            enum {
              mid_init$_734b91ac30d5f9b4,
              mid_init$_a627ad9c5959309d,
              mid_addMapping_6ae7cef74e9c794b,
              mid_getMapping_7e8f11dd23d1142c,
              mid_getRuggedName_1c1fa1e935d6cdcf,
              mid_getSensorName_1c1fa1e935d6cdcf,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SensorToGroundMapping(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SensorToGroundMapping(const SensorToGroundMapping& obj) : ::java::lang::Object(obj) {}

            SensorToGroundMapping(const ::java::lang::String &);
            SensorToGroundMapping(const ::java::lang::String &, const ::java::lang::String &);

            void addMapping(const ::org::orekit::rugged::linesensor::SensorPixel &, const ::org::orekit::bodies::GeodeticPoint &) const;
            ::java::util::Set getMapping() const;
            ::java::lang::String getRuggedName() const;
            ::java::lang::String getSensorName() const;
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
          extern PyType_Def PY_TYPE_DEF(SensorToGroundMapping);
          extern PyTypeObject *PY_TYPE(SensorToGroundMapping);

          class t_SensorToGroundMapping {
          public:
            PyObject_HEAD
            SensorToGroundMapping object;
            static PyObject *wrap_Object(const SensorToGroundMapping&);
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

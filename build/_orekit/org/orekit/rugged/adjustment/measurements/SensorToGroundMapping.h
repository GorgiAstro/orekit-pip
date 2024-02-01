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
    namespace rugged {
      namespace linesensor {
        class SensorPixel;
      }
    }
    namespace bodies {
      class GeodeticPoint;
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
              mid_init$_105e1eadb709d9ac,
              mid_init$_771aee6c143cc92a,
              mid_addMapping_9bc51464dd5f4881,
              mid_getMapping_6b191a9b12c1004b,
              mid_getRuggedName_d2c8eb4129821f0e,
              mid_getSensorName_d2c8eb4129821f0e,
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

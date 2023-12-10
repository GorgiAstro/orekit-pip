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
              mid_init$_d0bc48d5b00dc40c,
              mid_init$_6a2001eff0605f71,
              mid_addMapping_03574314a06b257a,
              mid_getMapping_015730311a5bacdc,
              mid_getRuggedName_11b109bd155ca898,
              mid_getSensorName_11b109bd155ca898,
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

#ifndef org_orekit_rugged_adjustment_measurements_SensorToSensorMapping_H
#define org_orekit_rugged_adjustment_measurements_SensorToSensorMapping_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Map$Entry;
    class List;
    class Set;
  }
  namespace lang {
    class Double;
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
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace rugged {
      namespace adjustment {
        namespace measurements {

          class SensorToSensorMapping : public ::java::lang::Object {
           public:
            enum {
              mid_init$_a627ad9c5959309d,
              mid_init$_03ff9b80a9f63d81,
              mid_init$_09d55289065fbca9,
              mid_init$_a76ac05fceac20a9,
              mid_addMapping_3b4fadd64e3c0457,
              mid_addMapping_17efccddf9e5f19a,
              mid_getBodyConstraintWeight_b74f83833fdad017,
              mid_getBodyDistance_92dad8b3e4c8a558,
              mid_getBodyDistances_e62d3bb06d56d7e3,
              mid_getLosDistance_92dad8b3e4c8a558,
              mid_getLosDistances_e62d3bb06d56d7e3,
              mid_getMapping_7e8f11dd23d1142c,
              mid_getRuggedNameA_1c1fa1e935d6cdcf,
              mid_getRuggedNameB_1c1fa1e935d6cdcf,
              mid_getSensorNameA_1c1fa1e935d6cdcf,
              mid_getSensorNameB_1c1fa1e935d6cdcf,
              mid_setBodyConstraintWeight_8ba9fe7a847cecad,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SensorToSensorMapping(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SensorToSensorMapping(const SensorToSensorMapping& obj) : ::java::lang::Object(obj) {}

            SensorToSensorMapping(const ::java::lang::String &, const ::java::lang::String &);
            SensorToSensorMapping(const ::java::lang::String &, const ::java::lang::String &, jdouble);
            SensorToSensorMapping(const ::java::lang::String &, const ::java::lang::String &, const ::java::lang::String &, const ::java::lang::String &);
            SensorToSensorMapping(const ::java::lang::String &, const ::java::lang::String &, const ::java::lang::String &, const ::java::lang::String &, jdouble);

            void addMapping(const ::org::orekit::rugged::linesensor::SensorPixel &, const ::org::orekit::rugged::linesensor::SensorPixel &, const ::java::lang::Double &) const;
            void addMapping(const ::org::orekit::rugged::linesensor::SensorPixel &, const ::org::orekit::rugged::linesensor::SensorPixel &, const ::java::lang::Double &, const ::java::lang::Double &) const;
            jdouble getBodyConstraintWeight() const;
            ::java::lang::Double getBodyDistance(jint) const;
            ::java::util::List getBodyDistances() const;
            ::java::lang::Double getLosDistance(jint) const;
            ::java::util::List getLosDistances() const;
            ::java::util::Set getMapping() const;
            ::java::lang::String getRuggedNameA() const;
            ::java::lang::String getRuggedNameB() const;
            ::java::lang::String getSensorNameA() const;
            ::java::lang::String getSensorNameB() const;
            void setBodyConstraintWeight(jdouble) const;
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
          extern PyType_Def PY_TYPE_DEF(SensorToSensorMapping);
          extern PyTypeObject *PY_TYPE(SensorToSensorMapping);

          class t_SensorToSensorMapping {
          public:
            PyObject_HEAD
            SensorToSensorMapping object;
            static PyObject *wrap_Object(const SensorToSensorMapping&);
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

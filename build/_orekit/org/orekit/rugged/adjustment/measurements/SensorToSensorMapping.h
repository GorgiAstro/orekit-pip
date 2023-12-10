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
              mid_init$_96073c87872b7a97,
              mid_init$_f7e4436e61826cb4,
              mid_init$_dc789c6b17416ede,
              mid_init$_d7e86d2d520c520a,
              mid_addMapping_baa040d3b267859e,
              mid_addMapping_2a58fe29d61c2d8c,
              mid_getBodyConstraintWeight_456d9a2f64d6b28d,
              mid_getBodyDistance_dec2f52f07867392,
              mid_getBodyDistances_a6156df500549a58,
              mid_getLosDistance_dec2f52f07867392,
              mid_getLosDistances_a6156df500549a58,
              mid_getMapping_e9e1a6780fe94297,
              mid_getRuggedNameA_0090f7797e403f43,
              mid_getRuggedNameB_0090f7797e403f43,
              mid_getSensorNameA_0090f7797e403f43,
              mid_getSensorNameB_0090f7797e403f43,
              mid_setBodyConstraintWeight_77e0f9a1f260e2e5,
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

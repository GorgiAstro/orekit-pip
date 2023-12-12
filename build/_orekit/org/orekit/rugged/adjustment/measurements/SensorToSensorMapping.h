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
              mid_init$_630071dd94c59169,
              mid_init$_9547058464ed819e,
              mid_init$_31dd4a79e86cd8aa,
              mid_init$_5bc8249ae26456ff,
              mid_addMapping_72201d4561b44b99,
              mid_addMapping_e7a41d3af7fb492f,
              mid_getBodyConstraintWeight_557b8123390d8d0c,
              mid_getBodyDistance_1503150ef9654792,
              mid_getBodyDistances_0d9551367f7ecdef,
              mid_getLosDistance_1503150ef9654792,
              mid_getLosDistances_0d9551367f7ecdef,
              mid_getMapping_2dfcbd371d62f4e1,
              mid_getRuggedNameA_3cffd47377eca18a,
              mid_getRuggedNameB_3cffd47377eca18a,
              mid_getSensorNameA_3cffd47377eca18a,
              mid_getSensorNameB_3cffd47377eca18a,
              mid_setBodyConstraintWeight_10f281d777284cea,
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

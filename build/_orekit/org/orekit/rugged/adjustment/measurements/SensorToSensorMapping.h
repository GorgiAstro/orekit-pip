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
              mid_init$_6a2001eff0605f71,
              mid_init$_d68f2e10a4896937,
              mid_init$_984b533a39fac42d,
              mid_init$_58fc3ae6a88fe4e7,
              mid_addMapping_c2c81f5deb5307ee,
              mid_addMapping_8615aa873d4ae124,
              mid_getBodyConstraintWeight_dff5885c2c873297,
              mid_getBodyDistance_7f1e975667450bdc,
              mid_getBodyDistances_2afa36052df4765d,
              mid_getLosDistance_7f1e975667450bdc,
              mid_getLosDistances_2afa36052df4765d,
              mid_getMapping_015730311a5bacdc,
              mid_getRuggedNameA_11b109bd155ca898,
              mid_getRuggedNameB_11b109bd155ca898,
              mid_getSensorNameA_11b109bd155ca898,
              mid_getSensorNameB_11b109bd155ca898,
              mid_setBodyConstraintWeight_17db3a65980d3441,
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

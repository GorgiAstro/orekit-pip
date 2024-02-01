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
              mid_init$_771aee6c143cc92a,
              mid_init$_04f72a78f21743a7,
              mid_init$_e0fb351f45d43efa,
              mid_init$_88bf1472d6acb4e9,
              mid_addMapping_c0d62951c4e776a5,
              mid_addMapping_6fb2ffa8e90aef41,
              mid_getBodyConstraintWeight_9981f74b2d109da6,
              mid_getBodyDistance_b1c6fd9ba6ac5772,
              mid_getBodyDistances_d751c1a57012b438,
              mid_getLosDistance_b1c6fd9ba6ac5772,
              mid_getLosDistances_d751c1a57012b438,
              mid_getMapping_6b191a9b12c1004b,
              mid_getRuggedNameA_d2c8eb4129821f0e,
              mid_getRuggedNameB_d2c8eb4129821f0e,
              mid_getSensorNameA_d2c8eb4129821f0e,
              mid_getSensorNameB_d2c8eb4129821f0e,
              mid_setBodyConstraintWeight_1ad26e8c8c0cd65b,
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

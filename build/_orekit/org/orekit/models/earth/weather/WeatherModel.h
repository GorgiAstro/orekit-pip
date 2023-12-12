#ifndef org_orekit_models_earth_weather_WeatherModel_H
#define org_orekit_models_earth_weather_WeatherModel_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace time {
      class AbsoluteDate;
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace weather {

          class WeatherModel : public ::java::lang::Object {
           public:
            enum {
              mid_weatherParameters_4ca6118c75b70100,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit WeatherModel(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            WeatherModel(const WeatherModel& obj) : ::java::lang::Object(obj) {}

            void weatherParameters(jdouble, const ::org::orekit::time::AbsoluteDate &) const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace weather {
          extern PyType_Def PY_TYPE_DEF(WeatherModel);
          extern PyTypeObject *PY_TYPE(WeatherModel);

          class t_WeatherModel {
          public:
            PyObject_HEAD
            WeatherModel object;
            static PyObject *wrap_Object(const WeatherModel&);
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

#ifndef org_orekit_models_earth_atmosphere_data_MarshallSolarActivityFutureEstimationLoader$LineParameters_H
#define org_orekit_models_earth_atmosphere_data_MarshallSolarActivityFutureEstimationLoader$LineParameters_H

#include "org/orekit/models/earth/atmosphere/data/AbstractSolarActivityDataLoader$LineParameters.h"

namespace org {
  namespace orekit {
    namespace time {
      class DateComponents;
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class Object;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace atmosphere {
          namespace data {

            class MarshallSolarActivityFutureEstimationLoader$LineParameters : public ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityDataLoader$LineParameters {
             public:
              enum {
                mid_compareTo_8b843ae7da66c9f6,
                mid_equals_72faff9b05f5ed5e,
                mid_getAp_9981f74b2d109da6,
                mid_getF107_9981f74b2d109da6,
                mid_getFileDate_70bc100457881a79,
                mid_hashCode_d6ab429752e7c267,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit MarshallSolarActivityFutureEstimationLoader$LineParameters(jobject obj) : ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityDataLoader$LineParameters(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              MarshallSolarActivityFutureEstimationLoader$LineParameters(const MarshallSolarActivityFutureEstimationLoader$LineParameters& obj) : ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityDataLoader$LineParameters(obj) {}

              jint compareTo(const ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityDataLoader$LineParameters &) const;
              jboolean equals(const ::java::lang::Object &) const;
              jdouble getAp() const;
              jdouble getF107() const;
              ::org::orekit::time::DateComponents getFileDate() const;
              jint hashCode() const;
            };
          }
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
        namespace atmosphere {
          namespace data {
            extern PyType_Def PY_TYPE_DEF(MarshallSolarActivityFutureEstimationLoader$LineParameters);
            extern PyTypeObject *PY_TYPE(MarshallSolarActivityFutureEstimationLoader$LineParameters);

            class t_MarshallSolarActivityFutureEstimationLoader$LineParameters {
            public:
              PyObject_HEAD
              MarshallSolarActivityFutureEstimationLoader$LineParameters object;
              PyTypeObject *parameters[1];
              static PyTypeObject **parameters_(t_MarshallSolarActivityFutureEstimationLoader$LineParameters *self)
              {
                return (PyTypeObject **) &(self->parameters);
              }
              static PyObject *wrap_Object(const MarshallSolarActivityFutureEstimationLoader$LineParameters&);
              static PyObject *wrap_jobject(const jobject&);
              static PyObject *wrap_Object(const MarshallSolarActivityFutureEstimationLoader$LineParameters&, PyTypeObject *);
              static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
              static void install(PyObject *module);
              static void initialize(PyObject *module);
            };
          }
        }
      }
    }
  }
}

#endif

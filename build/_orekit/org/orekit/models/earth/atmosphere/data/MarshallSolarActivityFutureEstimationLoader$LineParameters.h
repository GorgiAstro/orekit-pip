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
                mid_compareTo_2ef76e9305253641,
                mid_equals_221e8e85cb385209,
                mid_getAp_557b8123390d8d0c,
                mid_getF107_557b8123390d8d0c,
                mid_getFileDate_ef81839d8717cc3a,
                mid_hashCode_412668abc8d889e9,
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

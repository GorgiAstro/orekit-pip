#ifndef org_orekit_models_earth_atmosphere_data_CssiSpaceWeatherDataLoader$LineParameters_H
#define org_orekit_models_earth_atmosphere_data_CssiSpaceWeatherDataLoader$LineParameters_H

#include "org/orekit/models/earth/atmosphere/data/AbstractSolarActivityDataLoader$LineParameters.h"

namespace java {
  namespace lang {
    class Class;
    class Object;
  }
}
namespace org {
  namespace orekit {
    namespace time {
      class AbsoluteDate;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace atmosphere {
          namespace data {

            class CssiSpaceWeatherDataLoader$LineParameters : public ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityDataLoader$LineParameters {
             public:
              enum {
                mid_init$_307d0c8ed06cc17f,
                mid_compareTo_533614488ddee224,
                mid_equals_229c87223f486349,
                mid_getApAvg_456d9a2f64d6b28d,
                mid_getCtr81Adj_456d9a2f64d6b28d,
                mid_getCtr81Obs_456d9a2f64d6b28d,
                mid_getF107Adj_456d9a2f64d6b28d,
                mid_getF107Obs_456d9a2f64d6b28d,
                mid_getFluxQualifier_f2f64475e4580546,
                mid_getKpSum_456d9a2f64d6b28d,
                mid_getLst81Adj_456d9a2f64d6b28d,
                mid_getLst81Obs_456d9a2f64d6b28d,
                mid_getThreeHourlyAp_7cdc325af0834901,
                mid_getThreeHourlyAp_b772323fc98b7293,
                mid_getThreeHourlyKp_7cdc325af0834901,
                mid_getThreeHourlyKp_b772323fc98b7293,
                mid_hashCode_f2f64475e4580546,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit CssiSpaceWeatherDataLoader$LineParameters(jobject obj) : ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityDataLoader$LineParameters(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              CssiSpaceWeatherDataLoader$LineParameters(const CssiSpaceWeatherDataLoader$LineParameters& obj) : ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityDataLoader$LineParameters(obj) {}

              CssiSpaceWeatherDataLoader$LineParameters(const ::org::orekit::time::AbsoluteDate &, const JArray< jdouble > &, jdouble, const JArray< jdouble > &, jdouble, jdouble, jint, jdouble, jdouble, jdouble, jdouble, jdouble);

              jint compareTo(const ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityDataLoader$LineParameters &) const;
              jboolean equals(const ::java::lang::Object &) const;
              jdouble getApAvg() const;
              jdouble getCtr81Adj() const;
              jdouble getCtr81Obs() const;
              jdouble getF107Adj() const;
              jdouble getF107Obs() const;
              jint getFluxQualifier() const;
              jdouble getKpSum() const;
              jdouble getLst81Adj() const;
              jdouble getLst81Obs() const;
              JArray< jdouble > getThreeHourlyAp() const;
              jdouble getThreeHourlyAp(jint) const;
              JArray< jdouble > getThreeHourlyKp() const;
              jdouble getThreeHourlyKp(jint) const;
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
            extern PyType_Def PY_TYPE_DEF(CssiSpaceWeatherDataLoader$LineParameters);
            extern PyTypeObject *PY_TYPE(CssiSpaceWeatherDataLoader$LineParameters);

            class t_CssiSpaceWeatherDataLoader$LineParameters {
            public:
              PyObject_HEAD
              CssiSpaceWeatherDataLoader$LineParameters object;
              PyTypeObject *parameters[1];
              static PyTypeObject **parameters_(t_CssiSpaceWeatherDataLoader$LineParameters *self)
              {
                return (PyTypeObject **) &(self->parameters);
              }
              static PyObject *wrap_Object(const CssiSpaceWeatherDataLoader$LineParameters&);
              static PyObject *wrap_jobject(const jobject&);
              static PyObject *wrap_Object(const CssiSpaceWeatherDataLoader$LineParameters&, PyTypeObject *);
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
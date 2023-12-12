#ifndef org_orekit_models_earth_atmosphere_data_CssiSpaceWeatherDataLoader$LineParameters_H
#define org_orekit_models_earth_atmosphere_data_CssiSpaceWeatherDataLoader$LineParameters_H

#include "org/orekit/models/earth/atmosphere/data/AbstractSolarActivityDataLoader$LineParameters.h"

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

            class CssiSpaceWeatherDataLoader$LineParameters : public ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityDataLoader$LineParameters {
             public:
              enum {
                mid_init$_88d2fc14161786f9,
                mid_compareTo_2ef76e9305253641,
                mid_equals_221e8e85cb385209,
                mid_getApAvg_557b8123390d8d0c,
                mid_getCtr81Adj_557b8123390d8d0c,
                mid_getCtr81Obs_557b8123390d8d0c,
                mid_getF107Adj_557b8123390d8d0c,
                mid_getF107Obs_557b8123390d8d0c,
                mid_getFluxQualifier_412668abc8d889e9,
                mid_getKpSum_557b8123390d8d0c,
                mid_getLst81Adj_557b8123390d8d0c,
                mid_getLst81Obs_557b8123390d8d0c,
                mid_getThreeHourlyAp_a53a7513ecedada2,
                mid_getThreeHourlyAp_69cfb132c661aca4,
                mid_getThreeHourlyKp_a53a7513ecedada2,
                mid_getThreeHourlyKp_69cfb132c661aca4,
                mid_hashCode_412668abc8d889e9,
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

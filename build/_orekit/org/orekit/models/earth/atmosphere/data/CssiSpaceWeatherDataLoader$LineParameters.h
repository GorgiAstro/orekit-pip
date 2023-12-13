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
                mid_init$_db9eea1b704b92b4,
                mid_compareTo_73ef5c88fa79f2d9,
                mid_equals_460c5e2d9d51c6cc,
                mid_getApAvg_b74f83833fdad017,
                mid_getCtr81Adj_b74f83833fdad017,
                mid_getCtr81Obs_b74f83833fdad017,
                mid_getF107Adj_b74f83833fdad017,
                mid_getF107Obs_b74f83833fdad017,
                mid_getFluxQualifier_55546ef6a647f39b,
                mid_getKpSum_b74f83833fdad017,
                mid_getLst81Adj_b74f83833fdad017,
                mid_getLst81Obs_b74f83833fdad017,
                mid_getThreeHourlyAp_25e1757a36c4dde2,
                mid_getThreeHourlyAp_2afcbc21f4e57ab2,
                mid_getThreeHourlyKp_25e1757a36c4dde2,
                mid_getThreeHourlyKp_2afcbc21f4e57ab2,
                mid_hashCode_55546ef6a647f39b,
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
